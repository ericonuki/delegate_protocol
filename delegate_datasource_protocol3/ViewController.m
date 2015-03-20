//
//  ViewController.m
//  delegate_datasource_protocol3
//
//  Created by Eric Onuki on 20/03/15.
//  Copyright (c) 2015 BEPiD-PucPR. All rights reserved.
//

#import "ViewController.h"
#import "naofaznada.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    _naofaznadamesmo = [[naofaznada alloc] init];
    _naofaznadamesmo.delegate = self;
    [_naofaznadamesmo imprimeNSLogDaViewController];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)imprimeNSLog {
    NSLog(@"qualquer texto");
}

@end
