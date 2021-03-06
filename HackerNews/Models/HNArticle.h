//
//  HNArticle.h
//  HackerNews
//
//  Created by Matthew Stanford on 9/4/13.
//  Copyright (c) 2013 Matthew Stanford. All rights reserved.
//

#import <Foundation/Foundation.h>

@class HNComment;

@interface HNArticle : NSObject <NSCoding>

@property (nonatomic, strong) NSNumber *objectId;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *domainName;
@property (nonatomic, strong) NSString *score;
@property (nonatomic, strong) NSString *user;
@property (nonatomic, strong) NSString *timePosted;
@property (nonatomic, strong) NSString *numComments;
@property (nonatomic, strong) NSString *commentLinkId;
@property (nonatomic, strong) NSMutableArray *comments;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) HNComment *postComment;
@property (nonatomic, strong) NSArray *childComments;

-(id) initWithFirebaseData:(NSDictionary *)data;
-(void)writeNumComments;
-(NSString *) getInfoText;
-(NSString *) getCommentInfoText;
-(BOOL) isSelfPost;
-(NSString *) getShareText;

@end
