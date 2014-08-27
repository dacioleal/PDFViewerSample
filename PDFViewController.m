//
//  PDFViewController.m
//  PDFViewerSample
//
//  Created by Dacio Leal Rodriguez on 27/08/14.
//  Copyright (c) 2014 Dacio Leal Rodriguez. All rights reserved.
//

#import "PDFViewController.h"
#import "PDFScrollView.h"
#import "TiledPDFView.h"

@interface PDFViewController ()

@end

@implementation PDFViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.pageNumber = 1;
    NSURL *pdfURL = [[NSBundle mainBundle] URLForResource:@"D50.pdf" withExtension:nil];
    self.pdf = CGPDFDocumentCreateWithURL( (__bridge CFURLRef) pdfURL );
    self.page = CGPDFDocumentGetPage( self.pdf, self.pageNumber );
    
    [self.scrollView setPDFPage:self.page];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
