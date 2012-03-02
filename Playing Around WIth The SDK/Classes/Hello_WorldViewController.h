//
//  Hello_WorldViewController.h
//  Hello World
//
//  Created by Neeraj Sharma on 2/2/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Hello_WorldViewController : UIViewController {
	IBOutlet UILabel *label;
	IBOutlet UITextField *field;
	IBOutlet UILabel *labelTwo;
	IBOutlet UILabel *labelThree;
	IBOutlet UIButton *buttonOne;
	IBOutlet UIButton *buttonTwo;
	
	
}
-(IBAction)go;
-(IBAction)setNumber:(UIButton *)sender;
@end

