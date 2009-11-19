#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface WinHelper : NSObject {
}

+ (NSString*)defaultBrowserPath;

// Opens the supplied url string in the
// default browser.
+ (BOOL) openInBrowser:(NSString*)url;

// The commandLine includes an executable name and then the arguments to that executable
// i.e. blah.exe arg1 arg2
+ (BOOL) runExecutable:(NSString*)fullEXEPathName withCommandLine:(NSString*)args;

+ (NSString*)getURLFromWeblocFile:(NSString*)weblocFilename;

@end
