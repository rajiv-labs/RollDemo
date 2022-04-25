#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef ROLL_SWIFT_H
#define ROLL_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Roll",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class UIButton;
@class UILabel;
@class PlayerSupplementaryControlsView;
@class NSCoder;

SWIFT_CLASS("_TtC4Roll17LiveTransportView")
@interface LiveTransportView : UIControl
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable airPlayButton;
@property (nonatomic, readonly, strong) IBOutlet UILabel * _Nullable liveTextLabel;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable mediaSelectionOptionsButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable pictureInPictureButton;
@property (nonatomic, readonly, strong) IBOutlet PlayerSupplementaryControlsView * _Nullable playerSupplementaryControlsView;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable playPauseButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable presentationToggleButton;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC4Roll44OverCurrentContextModalContentViewController")
@interface OverCurrentContextModalContentViewController : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@end

@protocol UIViewControllerAnimatedTransitioning;

@interface OverCurrentContextModalContentViewController (SWIFT_EXTENSION(Roll)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC4Roll19PlaybackSpeedButton")
@interface PlaybackSpeedButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end



@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC4Roll40PlayerInContextModalPresentationAnimator")
@interface PlayerInContextModalPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC4Roll31PlayerSupplementaryControlsView")
@interface PlayerSupplementaryControlsView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end



SWIFT_CLASS("_TtC4Roll20PlayerViewController")
@interface PlayerViewController : UIViewController
/// See Apple documentation
/// <code>PlayerViewController</code> forces this value to be true always by design
@property (nonatomic) BOOL definesPresentationContext;
/// Represents the modal presentation style.
/// Do not set a value other than <code>.fullScreen</code> as this may at best break the user interface or at worst trap.
@property (nonatomic) UIModalPresentationStyle modalPresentationStyle;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end



@interface PlayerViewController (SWIFT_EXTENSION(Roll)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
@end



@interface PlayerViewController (SWIFT_EXTENSION(Roll))
- (void)viewDidAppear:(BOOL)animated;
- (void)didMoveToParentViewController:(UIViewController * _Nullable)parent;
- (void)viewDidLoad;
@end

@class AVPictureInPictureController;

@interface PlayerViewController (SWIFT_EXTENSION(Roll)) <AVPictureInPictureControllerDelegate>
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureController:(AVPictureInPictureController * _Nonnull)pictureInPictureController failedToStartPictureInPictureWithError:(NSError * _Nonnull)error;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureController:(AVPictureInPictureController * _Nonnull)pictureInPictureController restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^ _Nonnull)(BOOL))completionHandler;
@end






SWIFT_CLASS("_TtC4Roll37PlayerViewControllerTransitionContext")
@interface PlayerViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioning>
@property (nonatomic, strong) UIView * _Nonnull containerView;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) UIModalPresentationStyle presentationStyle;
@property (nonatomic) CGAffineTransform targetTransform;
@property (nonatomic) BOOL transitionWasCancelled;
- (void)completeTransition:(BOOL)didComplete;
- (UIViewController * _Nullable)viewControllerForKey:(UITransitionContextViewControllerKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)viewForKey:(UITransitionContextViewKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (CGRect)initialFrameForViewController:(UIViewController * _Nonnull)vc SWIFT_WARN_UNUSED_RESULT;
- (CGRect)finalFrameForViewController:(UIViewController * _Nonnull)vc SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, getter=isInteractive) BOOL interactive;
- (void)updateInteractiveTransition:(CGFloat)percentComplete;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TransportSlider;

SWIFT_CLASS("_TtC4Roll19ReplayTransportView")
@interface ReplayTransportView : UIControl
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable airPlayButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable mediaSelectionOptionsButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable nextStreamButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable pictureInPictureButton;
@property (nonatomic, readonly, strong) IBOutlet PlayerSupplementaryControlsView * _Nullable playerSupplementaryControlsView;
@property (nonatomic, readonly, strong) IBOutlet UILabel * _Nullable playheadLabel;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable playPauseButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable presentationToggleButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable previousStreamButton;
@property (nonatomic, readonly, strong) IBOutlet TransportSlider * _Nullable slider;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable stepBackwardButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable stepForwardButton;
@property (nonatomic, readonly, strong) IBOutlet UILabel * _Nullable totalDurationLabel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
@end


@class UIImage;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC4Roll15TransportSlider")
@interface TransportSlider : UISlider
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) IBInspectable UIImage * _Nullable thumbImage;
/// The height of the track (that contains the minimum and maximum)
/// Default value: 4.0
@property (nonatomic) IBInspectable CGFloat trackHeight;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nullable)thumbImageForState:(UIControlState)state SWIFT_WARN_UNUSED_RESULT;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
- (CGRect)trackRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_PROTOCOL("_TtP4Roll21WaitingStateAnimating_")
@protocol WaitingStateAnimating
- (void)startAnimating;
- (void)stopAnimating;
@end


@interface UIActivityIndicatorView (SWIFT_EXTENSION(Roll)) <WaitingStateAnimating>
@end





@class UIGestureRecognizer;

SWIFT_CLASS("_TtC4Roll20VariableValueControl")
@interface VariableValueControl : UIControl <UIGestureRecognizerDelegate>
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef ROLL_SWIFT_H
#define ROLL_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Roll",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif





@class UIButton;
@class UILabel;
@class PlayerSupplementaryControlsView;
@class NSCoder;

SWIFT_CLASS("_TtC4Roll17LiveTransportView")
@interface LiveTransportView : UIControl
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable airPlayButton;
@property (nonatomic, readonly, strong) IBOutlet UILabel * _Nullable liveTextLabel;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable mediaSelectionOptionsButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable pictureInPictureButton;
@property (nonatomic, readonly, strong) IBOutlet PlayerSupplementaryControlsView * _Nullable playerSupplementaryControlsView;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable playPauseButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable presentationToggleButton;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC4Roll44OverCurrentContextModalContentViewController")
@interface OverCurrentContextModalContentViewController : UIViewController
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@end

@protocol UIViewControllerAnimatedTransitioning;

@interface OverCurrentContextModalContentViewController (SWIFT_EXTENSION(Roll)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_CLASS("_TtC4Roll19PlaybackSpeedButton")
@interface PlaybackSpeedButton : UIButton
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end



@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC4Roll40PlayerInContextModalPresentationAnimator")
@interface PlayerInContextModalPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> _Nullable)transitionContext SWIFT_WARN_UNUSED_RESULT;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> _Nonnull)transitionContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC4Roll31PlayerSupplementaryControlsView")
@interface PlayerSupplementaryControlsView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@end



SWIFT_CLASS("_TtC4Roll20PlayerViewController")
@interface PlayerViewController : UIViewController
/// See Apple documentation
/// <code>PlayerViewController</code> forces this value to be true always by design
@property (nonatomic) BOOL definesPresentationContext;
/// Represents the modal presentation style.
/// Do not set a value other than <code>.fullScreen</code> as this may at best break the user interface or at worst trap.
@property (nonatomic) UIModalPresentationStyle modalPresentationStyle;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end



@interface PlayerViewController (SWIFT_EXTENSION(Roll)) <UIViewControllerTransitioningDelegate>
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForPresentedController:(UIViewController * _Nonnull)presented presentingController:(UIViewController * _Nonnull)presenting sourceController:(UIViewController * _Nonnull)source SWIFT_WARN_UNUSED_RESULT;
- (id <UIViewControllerAnimatedTransitioning> _Nullable)animationControllerForDismissedController:(UIViewController * _Nonnull)dismissed SWIFT_WARN_UNUSED_RESULT;
@end



@interface PlayerViewController (SWIFT_EXTENSION(Roll))
- (void)viewDidAppear:(BOOL)animated;
- (void)didMoveToParentViewController:(UIViewController * _Nullable)parent;
- (void)viewDidLoad;
@end

@class AVPictureInPictureController;

@interface PlayerViewController (SWIFT_EXTENSION(Roll)) <AVPictureInPictureControllerDelegate>
- (void)pictureInPictureControllerWillStartPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureControllerDidStartPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureController:(AVPictureInPictureController * _Nonnull)pictureInPictureController failedToStartPictureInPictureWithError:(NSError * _Nonnull)error;
- (void)pictureInPictureControllerWillStopPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureControllerDidStopPictureInPicture:(AVPictureInPictureController * _Nonnull)pictureInPictureController;
- (void)pictureInPictureController:(AVPictureInPictureController * _Nonnull)pictureInPictureController restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(void (^ _Nonnull)(BOOL))completionHandler;
@end






SWIFT_CLASS("_TtC4Roll37PlayerViewControllerTransitionContext")
@interface PlayerViewControllerTransitionContext : NSObject <UIViewControllerContextTransitioning>
@property (nonatomic, strong) UIView * _Nonnull containerView;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (nonatomic) UIModalPresentationStyle presentationStyle;
@property (nonatomic) CGAffineTransform targetTransform;
@property (nonatomic) BOOL transitionWasCancelled;
- (void)completeTransition:(BOOL)didComplete;
- (UIViewController * _Nullable)viewControllerForKey:(UITransitionContextViewControllerKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)viewForKey:(UITransitionContextViewKey _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (CGRect)initialFrameForViewController:(UIViewController * _Nonnull)vc SWIFT_WARN_UNUSED_RESULT;
- (CGRect)finalFrameForViewController:(UIViewController * _Nonnull)vc SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, getter=isInteractive) BOOL interactive;
- (void)updateInteractiveTransition:(CGFloat)percentComplete;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)pauseInteractiveTransition;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class TransportSlider;

SWIFT_CLASS("_TtC4Roll19ReplayTransportView")
@interface ReplayTransportView : UIControl
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable airPlayButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable mediaSelectionOptionsButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable nextStreamButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable pictureInPictureButton;
@property (nonatomic, readonly, strong) IBOutlet PlayerSupplementaryControlsView * _Nullable playerSupplementaryControlsView;
@property (nonatomic, readonly, strong) IBOutlet UILabel * _Nullable playheadLabel;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable playPauseButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable presentationToggleButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable previousStreamButton;
@property (nonatomic, readonly, strong) IBOutlet TransportSlider * _Nullable slider;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable stepBackwardButton;
@property (nonatomic, readonly, strong) IBOutlet UIButton * _Nullable stepForwardButton;
@property (nonatomic, readonly, strong) IBOutlet UILabel * _Nullable totalDurationLabel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
@end


@class UIImage;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC4Roll15TransportSlider")
@interface TransportSlider : UISlider
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) IBInspectable UIImage * _Nullable thumbImage;
/// The height of the track (that contains the minimum and maximum)
/// Default value: 4.0
@property (nonatomic) IBInspectable CGFloat trackHeight;
- (BOOL)beginTrackingWithTouch:(UITouch * _Nonnull)touch withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
- (UIImage * _Nullable)thumbImageForState:(UIControlState)state SWIFT_WARN_UNUSED_RESULT;
- (void)endTrackingWithTouch:(UITouch * _Nullable)touch withEvent:(UIEvent * _Nullable)event;
- (CGRect)trackRectForBounds:(CGRect)bounds SWIFT_WARN_UNUSED_RESULT;
@end



SWIFT_PROTOCOL("_TtP4Roll21WaitingStateAnimating_")
@protocol WaitingStateAnimating
- (void)startAnimating;
- (void)stopAnimating;
@end


@interface UIActivityIndicatorView (SWIFT_EXTENSION(Roll)) <WaitingStateAnimating>
@end





@class UIGestureRecognizer;

SWIFT_CLASS("_TtC4Roll20VariableValueControl")
@interface VariableValueControl : UIControl <UIGestureRecognizerDelegate>
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
