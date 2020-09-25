#define kSettings @"/var/mobile/Library/Preferences/com.xcxiao.wechatstepcount.plist"
#define key @"count"

int setStepCount()
{
    int num = ([[[NSDictionary alloc] initWithContentsOfFile:kSettings] objectForKey:key] ? [[[[NSDictionary alloc] initWithContentsOfFile:kSettings] objectForKey:key] intValue] : 0);
    if(num < 0 || num > 98800) {
        num = 0;
    }
    return num;
}

@interface WCDeviceStepObject : NSObject
{
    unsigned int m7StepCount;
}
@end


%hook WCDeviceStepObject

-(unsigned int) m7StepCount {
    // int step = [self valueForKey:@"m7StepCount"];
    int randNum = ((arc4random() % setStepCount()) + 1);
    return randNum;
}

%end
