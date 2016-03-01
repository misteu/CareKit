//
//  OCKConnectDetailTableViewController.h
//  CareKit
//
//  Created by Umer Khan on 2/27/16.
//  Copyright © 2016 carekit.org. All rights reserved.
//


#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
#import "OCKContactInfoTableViewCell.h"
#import "OCKReportsTableViewCell.h"


NS_ASSUME_NONNULL_BEGIN

@class OCKContact;

@interface OCKConnectDetailViewController : UITableViewController <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, OCKContactInfoTableViewCellDelegate, OCKReportsTableViewCellDelegate>

- (instancetype)initWithContact:(OCKContact *)contact;

@property (nonatomic) OCKContact *contact;

@end

NS_ASSUME_NONNULL_END