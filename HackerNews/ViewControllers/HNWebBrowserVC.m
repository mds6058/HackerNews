//
//  HNWebBrowserVC.m
//  HackerNews
//
//  Created by Matthew Stanford on 8/31/13.
//  Copyright (c) 2013 Matthew Stanford. All rights reserved.
//

#import "HNWebBrowserVC.h"

@interface HNWebBrowserVC ()

@end

@implementation HNWebBrowserVC

@synthesize webView, currentURL;

- (id)init {
    
    self = [super init];
    if (self) {
        
        CGRect screenBounds = [[UIScreen mainScreen] bounds];
        
        webView = [[UIWebView alloc] initWithFrame:screenBounds];
        webView.delegate = self;
        currentURL = @"http://news.ycombinator.com";
        
    }
    return self;
}

- (void) setURL:(NSString *)newUrl
{
    if(![newUrl isEqualToString:self.currentURL])
    {
        NSURL *url = [NSURL URLWithString:newUrl];
        NSURLRequest *requestObj = [NSURLRequest requestWithURL:url];
        
        currentURL = newUrl;
        [webView loadRequest:requestObj];
        
    }
}

@end
