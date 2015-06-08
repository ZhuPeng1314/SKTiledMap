//
//  SKTMObjectGroupShape.h
//  SKTiledMap
//
//  Created by JasioWoo on 15/5/29.
//  Copyright (c) 2015年 JasioWoo. All rights reserved.
//

#import "SKTMNode.h"

@interface SKTMObjectGroupShape : SKTMNode

@property (nonatomic, strong) TMXObjectGroupNode *model;

@property (nonatomic, readonly) CGPathRef path;
@property (nonatomic, strong) SKShapeNode *shape;

+ (instancetype)nodeWithModel:(TMXObjectGroupNode *)model renderer:(SKMapRenderer *)renderer;
- (instancetype)initWithModel:(TMXObjectGroupNode *)model renderer:(SKMapRenderer *)renderer;

@end
