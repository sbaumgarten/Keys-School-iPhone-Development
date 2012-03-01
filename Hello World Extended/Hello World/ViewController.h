//
//  ViewController.h
//  Hello World
//
//  Created by Samuel Baumgarten on 3/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    IBOutlet UILabel *firstLabel;
    IBOutlet UILabel *secondLabel;
    IBOutlet UITextField *field;
}

-(IBAction)go;

@end
