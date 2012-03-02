//
//  Hello_WorldViewController.m
//  Hello World
//
//  Created by Neeraj Sharma on 2/2/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import "Hello_WorldViewController.h"

@implementation Hello_WorldViewController

-(IBAction)go {
	label.text= [NSString stringWithFormat:@"Hello %@", field. text];
	labelTwo.text= [NSString stringWithFormat:@"Goodbye %@, I hope you have a nice day.", field. text];
	

}

-(IBAction)setNumber:(UIButton *)sender {
	labelThree.text = sender.titleLabel.text;
}

/*
// The designated initializer. Override to perform setup that is required before the view is loaded.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}
*/

/*
// Implement loadView to create a view hierarchy programmatically, without using a nib.
- (void)loadView {
}
*/


/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/


/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
	// Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}

@end
