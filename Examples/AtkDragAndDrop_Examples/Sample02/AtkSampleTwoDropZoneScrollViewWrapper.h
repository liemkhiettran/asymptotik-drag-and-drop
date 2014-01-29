//
//  AtkSampleTwoDropZoneScrollViewWrapper.h
//  Atkdrogen_DragAndDrop
//
//  Created by Rick Boykin on 1/21/14.
//  Copyright (c) 2014 Mondo Robot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AtkDragAndDrop.h"

@interface AtkSampleTwoDropZoneScrollViewWrapper : NSObject<AtkDropZoneProtocol>

@property (nonatomic, retain) UIScrollView *view;

- (id)initWithScrollView:(UIScrollView *)view;

@end