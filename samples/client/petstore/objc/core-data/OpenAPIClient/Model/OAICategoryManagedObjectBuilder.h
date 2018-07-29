#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


#import "OAICategoryManagedObject.h"
#import "OAICategory.h"

/**
* OpenAPI Petstore
* This is a sample server Petstore server. For this sample, you can use the api key \"special-key\" to test the authorization filters
*
* OpenAPI spec version: 1.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


@interface OAICategoryManagedObjectBuilder : NSObject



-(OAICategoryManagedObject*)createNewOAICategoryManagedObjectInContext:(NSManagedObjectContext*)context;

-(OAICategoryManagedObject*)OAICategoryManagedObjectFromOAICategory:(OAICategory*)object context:(NSManagedObjectContext*)context;

-(void)updateOAICategoryManagedObject:(OAICategoryManagedObject*)object withOAICategory:(OAICategory*)object2;

-(OAICategory*)OAICategoryFromOAICategoryManagedObject:(OAICategoryManagedObject*)obj;

-(void)updateOAICategory:(OAICategory*)object withOAICategoryManagedObject:(OAICategoryManagedObject*)object2;

@end
