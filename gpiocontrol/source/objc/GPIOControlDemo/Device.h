/*
 * Copyright 2014-2015 CyberVision, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <Foundation/Foundation.h>

@interface Device : NSObject

@property (nonatomic, strong) NSString *deviceName;
@property (nonatomic, strong) NSString *model;
@property (nonatomic, strong) NSMutableDictionary *gpioStatuses;
@property (nonatomic, strong) NSString *kaaEndpointId;

- (instancetype)initWithModel:(NSString *)model DeviceName:(NSString *)deviceName KaaEndpointId:(NSString *)endpointId andGPIOStatuses:(NSArray *)gpioStatuses;
- (NSArray *)getGpioStatuses;
- (void)setGpioStatusesFromArray:(NSArray *)gpioStatusesArray;

@end
