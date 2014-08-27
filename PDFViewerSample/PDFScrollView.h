//
//  PDFScrollView.h
//  
//
//  Created by Dacio Leal Rodriguez on 27/08/14.
//  Copyright (c) 2014 Dacio Leal Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@class TiledPDFView;

@interface PDFScrollView : UIScrollView <UIScrollViewDelegate>


// Frame of the PDF
@property (nonatomic) CGRect pageRect;
// A low resolution image of the PDF page that is displayed until the TiledPDFView renders its content.
@property (nonatomic, weak) UIView *backgroundImageView;
// The TiledPDFView that is currently front most.
@property (nonatomic, weak) TiledPDFView *tiledPDFView;
// The old TiledPDFView that we draw on top of when the zooming stops.
@property (nonatomic, weak) TiledPDFView *oldTiledPDFView;
// Current PDF zoom scale.
@property (nonatomic) CGFloat PDFScale;

- (void)setPDFPage:(CGPDFPageRef)PDFPage;
-(void)replaceTiledPDFViewWithFrame:(CGRect)frame;

@end
