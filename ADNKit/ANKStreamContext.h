//
//  ANKStreamContext.h
//  ADNKit
//
//  Created by Kolin Krewinkel on 6/8/13.
//  Copyright (c) 2013 Afterwork Studios. All rights reserved.
//

@class KATSocketShuttle;

@interface ANKStreamContext : NSObject

#pragma mark - Designated Initializer

- (id)initWithIdentifier:(NSString *)identifier socketShuttle:(KATSocketShuttle *)socketShuttle streamingDelegate:(id<ANKStreamingDelegate>)streamingDelegate;

#pragma mark - Internal

@property (nonatomic, strong) KATSocketShuttle *socketShuttle;
@property (nonatomic, weak) id<ANKStreamingDelegate> streamingDelegate;

#pragma mark - API Level

@property (nonatomic, copy) NSString *identifier;

@end