//
//  ViewController.h
//  mapTest
//
//  Created by Joao Alves on 9/25/14.
//  Copyright (c) 2014 joaopaulo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import <Parse/Parse.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate, MKMapViewDelegate>


@property (nonatomic, retain) CLLocationManager *locationManager;
@property(nonatomic, strong) MKPinAnnotationView *geoPointAnnotation;
@property(nonatomic, strong)MKPointAnnotation *annotation;
@property(nonatomic, strong)CLLocation *location;
@property (nonatomic, strong) PFObject *detailItem;
@property (weak, nonatomic) IBOutlet MKMapView *appleMap;

- (IBAction)centerMap:(id)sender;

@end

