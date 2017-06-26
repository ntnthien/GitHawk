// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.43 clang-900.0.22.8)
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

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"

SWIFT_MODULE_NAMESPACE_PUSH("SwipeCellKit")
@class UIFont;
@class UIColor;
@class UIImage;
@class UIVisualEffect;

/// The <code>SwipeAction</code> object defines a single action to present when the user swipes horizontally in a table row.
/// This class lets you define one or more custom actions to display for a given row in your table. Each instance of this class represents a single action to perform and includes the text, formatting information, and behavior for the corresponding button.
SWIFT_CLASS("_TtC12SwipeCellKit11SwipeAction")
@interface SwipeAction : NSObject
/// An optional unique action identifier.
@property (nonatomic, copy) NSString * _Nullable identifier;
/// The title of the action button.
/// note:
/// You must specify a title or an image.
@property (nonatomic, copy) NSString * _Nullable title;
/// The font to use for the title of the action button.
/// note:
/// If you do not specify a font, a 15pt system font is used.
@property (nonatomic, strong) UIFont * _Nullable font;
/// The text color of the action button.
/// note:
/// If you do not specify a color, white is used.
@property (nonatomic, strong) UIColor * _Nullable textColor;
/// The image used for the action button.
/// note:
/// You must specify a title or an image.
@property (nonatomic, strong) UIImage * _Nullable image;
/// The highlighted image used for the action button.
/// note:
/// If you do not specify a highlight image, the default <code>image</code> is used for the highlighted state.
@property (nonatomic, strong) UIImage * _Nullable highlightedImage;
/// The closure to execute when the user taps the button associated with this action.
@property (nonatomic, copy) void (^ _Nullable handler)(SwipeAction * _Nonnull, NSIndexPath * _Nonnull);
/// The background color of the action button.
/// note:
/// Use this property to specify the background color for your button. If you do not specify a value for this property, the framework assigns a default color based on the value in the style property.
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
/// The highlighted background color of the action button.
/// note:
/// Use this property to specify the highlighted background color for your button.
@property (nonatomic, strong) UIColor * _Nullable highlightedBackgroundColor;
/// The visual effect to apply to the action button.
/// note:
/// Assigning a visual effect object to this property adds that effect to the background of the action button.
@property (nonatomic, strong) UIVisualEffect * _Nullable backgroundEffect;
/// A Boolean value that determines whether the actions menu is automatically hidden upon selection.
/// note:
/// When set to <code>true</code>, the actions menu is automatically hidden when the action is selected. The default value is <code>false</code>.
@property (nonatomic) BOOL hidesWhenSelected;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end



@class NSCoder;
@class UIEvent;

SWIFT_CLASS("_TtC12SwipeCellKit23SwipeCollectionViewCell")
@interface SwipeCollectionViewCell : UICollectionViewCell
@property (nonatomic) BOOL canDelete;
/// :nodoc:
@property (nonatomic) CGPoint center;
/// :nodoc:
@property (nonatomic) CGRect frame;
/// :nodoc:
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// :nodoc:
- (void)prepareForReuse;
/// :nodoc:
- (void)didMoveToSuperview;
/// :nodoc:
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
/// :nodoc:
@property (nonatomic) UIEdgeInsets layoutMargins;
@end



@class UIGestureRecognizer;

@interface SwipeCollectionViewCell (SWIFT_EXTENSION(SwipeCellKit)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end






@interface SwipeCollectionViewCell (SWIFT_EXTENSION(SwipeCellKit))
/// The point at which the origin of the cell is offset from the non-swiped origin.
@property (nonatomic) CGFloat swipeOffset;
/// Hides the swipe actions and returns the cell to center.
/// \param animated Specify <code>true</code> to animate the hiding of the swipe actions or <code>false</code> to hide it immediately.
///
/// \param completion The closure to be executed once the animation has finished. A <code>Boolean</code> argument indicates whether or not the animations actually finished before the completion handler was called.
///
- (void)hideSwipeWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
/// The point at which the origin of the cell is offset from the non-swiped origin.
/// \param offset A point (expressed in points) that is offset from the non-swiped origin.
///
/// \param animated Specify <code>true</code> to animate the transition to the new offset, <code>false</code> to make the transition immediate.
///
/// \param completion The closure to be executed once the animation has finished. A <code>Boolean</code> argument indicates whether or not the animations actually finished before the completion handler was called.
///
- (void)setSwipeOffset:(CGFloat)offset animated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
@end


/// The <code>SwipeTableViewCell</code> class extends <code>UITableViewCell</code> and provides more flexible options for cell swiping behavior.
/// The default behavior closely matches the stock Mail.app. If you want to customize the transition style (ie. how the action buttons are exposed), or the expansion style (the behavior when the row is swiped passes a defined threshold), you can return the appropriately configured <code>SwipeTableOptions</code> via the <code>SwipeTableViewCellDelegate</code> delegate.
SWIFT_CLASS("_TtC12SwipeCellKit18SwipeTableViewCell")
@interface SwipeTableViewCell : UITableViewCell
/// :nodoc:
@property (nonatomic) CGPoint center;
/// :nodoc:
@property (nonatomic) CGRect frame;
/// :nodoc:
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
/// :nodoc:
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// :nodoc:
- (void)prepareForReuse;
/// :nodoc:
- (void)didMoveToSuperview;
/// :nodoc:
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
/// :nodoc:
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
/// :nodoc:
@property (nonatomic) UIEdgeInsets layoutMargins;
@end




@interface SwipeTableViewCell (SWIFT_EXTENSION(SwipeCellKit))
/// :nodoc:
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end




@interface SwipeTableViewCell (SWIFT_EXTENSION(SwipeCellKit))
/// :nodoc:
- (NSInteger)accessibilityElementCount SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (id _Nullable)accessibilityElementAtIndex:(NSInteger)index SWIFT_WARN_UNUSED_RESULT;
/// :nodoc:
- (NSInteger)indexOfAccessibilityElement:(id _Nonnull)element SWIFT_WARN_UNUSED_RESULT;
@end



@class UIAccessibilityCustomAction;

@interface SwipeTableViewCell (SWIFT_EXTENSION(SwipeCellKit))
/// :nodoc:
@property (nonatomic, copy) NSArray<UIAccessibilityCustomAction *> * _Nullable accessibilityCustomActions;
@end


@interface SwipeTableViewCell (SWIFT_EXTENSION(SwipeCellKit))
/// The point at which the origin of the cell is offset from the non-swiped origin.
@property (nonatomic) CGFloat swipeOffset;
/// Hides the swipe actions and returns the cell to center.
/// \param animated Specify <code>true</code> to animate the hiding of the swipe actions or <code>false</code> to hide it immediately.
///
/// \param completion The closure to be executed once the animation has finished. A <code>Boolean</code> argument indicates whether or not the animations actually finished before the completion handler was called.
///
- (void)hideSwipeWithAnimated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
/// \code
/// The point at which the origin of the cell is offset from the non-swiped origin.
///
/// - parameter offset: A point (expressed in points) that is offset from the non-swiped origin.
///
/// - parameter animated: Specify `true` to animate the transition to the new offset, `false` to make the transition immediate.
///
/// - parameter completion: The closure to be executed once the animation has finished. A `Boolean` argument indicates whether or not the animations actually finished before the completion handler was called.
///
/// \endcode
- (void)setSwipeOffset:(CGFloat)offset animated:(BOOL)animated completion:(void (^ _Nullable)(BOOL))completion;
@end









SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
