//
//  QSelectSection.h
//  QuickDialog
//
//  Created by HiveHicks on 23.03.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "QSection.h"

@interface QSelectSection : QSection
{
    NSArray *_items;
}

@property (nonatomic, strong)   NSArray         *items;
@property (nonatomic, strong)   NSMutableArray  *selectedIndexes;
@property (nonatomic)           BOOL             multipleAllowed;

- (QSelectSection *)initWithItems:(NSArray *)stringArray selectedIndexes:(NSArray *)selected;
- (QSelectSection *)initWithItems:(NSArray *)stringArray selectedIndexes:(NSArray *)selected title:(NSString *)title;
- (QSelectSection *)initWithItems:(NSArray *)stringArray selected:(NSUInteger)selected;
- (QSelectSection *)initWithItems:(NSArray *)stringArray selected:(NSUInteger)selected title:(NSString *)title;

@end
