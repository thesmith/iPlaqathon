#import <UIKit/UIKit.h>

@interface iPlaquesAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
	IBOutlet UIWebView *webView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

