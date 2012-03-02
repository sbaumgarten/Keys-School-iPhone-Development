//
//  SuperHelloWorldViewController.h
//  SuperHelloWorld
//
//  Created by Ryan Matyjasik on 2/6/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SuperHelloWorldViewController : UIViewController {
	IBOutlet UILabel *label;
	IBOutlet UILabel *labeltwo;
	IBOutlet UITextField *field;
	IBOutlet UITextField *fieldtwo;
}
-(IBAction)go;

@end

