//
//  AppDelegate.h
//  yourTube
//
//  Created by Kevin Bradley on 12/21/15.
//  Copyright © 2015 nito. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate, NSTableViewDelegate>


@property (nonatomic, assign) IBOutlet NSTextField *youtubeLink;
@property (nonatomic, assign) IBOutlet NSTextField *titleField;
@property (nonatomic, assign) IBOutlet NSTextField *userField;
@property (nonatomic, assign) IBOutlet NSTextField *lengthField;
@property (nonatomic, assign) IBOutlet NSTextField *viewsField;
@property (nonatomic, assign) IBOutlet NSImageView *imageView;
@property (nonatomic, assign) IBOutlet NSTextView *resultsField;
@property (nonatomic, assign) IBOutlet NSArrayController *streamController;
@property (nonatomic, strong) NSArray *streamArray;
@property (readwrite, assign) BOOL itemSelected;

- (IBAction)getResults:(id)sender;
- (IBAction)downloadFile:(id)sender;
- (IBAction)playFile:(id)sender;
@end

