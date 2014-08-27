//
//  PDFViewController.h
//  PDFViewerSample
//
//  Created by Dacio Leal Rodriguez on 27/08/14.
//  Copyright (c) 2014 Dacio Leal Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PDFScrollView;

@interface PDFViewController : UIViewController

@property (strong, nonatomic) IBOutlet PDFScrollView *scrollView;

@property CGPDFDocumentRef pdf;
@property CGPDFPageRef page;
@property int pageNumber;
@property CGFloat myScale;


@end
