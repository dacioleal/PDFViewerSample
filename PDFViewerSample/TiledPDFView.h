//
//  TiledPDFView.h
//  
//
//  Created by Dacio Leal Rodriguez on 27/08/14.
//  Copyright (c) 2014 Dacio Leal Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface TiledPDFView : UIView


@property CGPDFPageRef pdfPage;
@property CGFloat myScale;

- (id)initWithFrame:(CGRect)frame scale:(CGFloat)scale;
- (void)setPage:(CGPDFPageRef)newPage;

@end
