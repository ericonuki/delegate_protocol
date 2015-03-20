//
//  naofaznada.h
//  delegate_datasource_protocol3
//
//  Created by Eric Onuki on 20/03/15.
//  Copyright (c) 2015 BEPiD-PucPR. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "naofaznadadelegate.h"

@interface naofaznada : NSObject

@property id<naofaznaprotocol> delegate;

-(void)imprimeNSLogDaViewController;

@end
