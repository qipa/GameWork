//
//  HSWBEngine.h
//  HSBalloon_S3
//
//  Created by Ambition on 13-11-27.
//
//

#import <Foundation/Foundation.h>
#import "TCWBEngine.h"
#import "RootViewController.h"

#define HS_SDK_WB_KEY   @"801445511"
#define HS_SDK_WB_PASS  @"6edc815db6bbf2b96d2e08b43906cdcf"
#define HS_SDK_WB_URL   @"http://121.199.10.1/appDown/"


@interface HSWBEngine : NSObject<SSODelegate>
{
    TCWBEngine*                 m_pTCWBEngine;
    RootViewController*         m_pRootView;
}

@property (nonatomic,retain)TCWBEngine*         m_pTCWBEngine;
@property (nonatomic,retain)RootViewController* m_pRootView;

+(id) SharedWBEngine;

//登陆
-(void) Login;

//等出
-(void) Logout;

//发一个文字微博，不弹出窗口让用户修改
-(void) PostText:(NSString*)text;

-(void) LoginSuccessed;

-(void) LoginFailed:(NSError *)error;

//保存cocos2d-x窗口用的函数
-(void) SetDelegate:(id)inId;

//显示警告窗口用
-(void) ShowAlertMessage:(NSString *)msg;

-(BOOL) handleOpenURL:(NSURL *)url;

@end




