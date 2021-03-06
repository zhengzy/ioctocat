#import <UIKit/UIKit.h>
#import "GHOrganizations.h"
#import "GHUser.h"
#import "OrganizationCell.h"


@interface OrganizationsController : UITableViewController {
    GHOrganizations *organizations;
@private
	IBOutlet UITableViewCell *loadingCell;
	IBOutlet UITableViewCell *noOrganizationsCell;
    IBOutlet OrganizationCell *organizationCell;
}

@property(nonatomic,retain) GHOrganizations *organizations;
@property(nonatomic,readonly) GHUser *currentUser;

- (id)initWithOrganizations:(GHOrganizations *)theOrganizations;

@end
