//
//  ViewController.h
//  delegate_datasource_protocol3
//
//  Created by Eric Onuki on 20/03/15.
//  Copyright (c) 2015 BEPiD-PucPR. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "naofaznadadelegate.h"
@class naofaznada;

@interface ViewController : UIViewController <naofaznaprotocol>

@property naofaznada *naofaznadamesmo;
-(void)imprimeNSLog;


@end

