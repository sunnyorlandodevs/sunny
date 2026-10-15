@interface NSData(MP_Base64) : NSData
- (id)mp_base64EncodedString;
+ (id)mp_dataFromBase64String:(id)arg0;
@end
@interface NSColor(isLight) : NSColor
- (double)luma;
- (char)isLight;
@end
@interface NSString(Extensions) : NSString
- (id)uniqueFilenameInPath:(id)arg0;
@end
@interface NSDictionary(Utilities) : NSDictionary
- (id)objectForNullableKey:(id)arg0;
- (id)dictionaryCopyingKeys:(id)arg0;
@end
@interface NSObject(AssociatedObjects) : NSObject
- (void)setAssociatedObject:(id)arg0 forKey:(id)arg1;
- (id)associatedObjectForKey:(id)arg0;
@end
@interface NSURL(Parameters) : NSURL
@property (nonatomic, strong) id parameters;
- (void)scanParameters;
- (id)objectForKeyedSubscript:(id)arg0;
- (id)parameterForKey:(id)arg0;
- (id)parameters;
- (void)setParameters:(id)arg0;
@end
@interface NSEvent(Additions) : NSEvent
+ (char)isShiftDown;
+ (char)isCommandDown;
@end
@interface CALayer(LBHBackingLayerHacks) : CALayer
@property (nonatomic, strong) id lbh_ignoreNSViewBackingLayerSynchronization;
- (void)setLbh_ignoreNSViewBackingLayerSynchronization:(id)arg0;
- (char)lbh_ignoreNSViewBackingLayerSynchronization;
- (void)lbh_setAffineTransform:(id)arg0;
- (void)lbh_setAnchorPoint:(id)arg0;
@end
@interface NSArray(Additions) : NSArray
- (id)indexSetOfObjects:(id)arg0;
@end
@interface NSWindow(Additions) : NSWindow
- (void)resizeForContentSize:(id)arg0;
- (id)titleTextField;
@end
@interface NSIndexSet(Additions) : NSIndexSet
- (id)indexSetByAddingIndex:(id)arg0;
@end
@interface NSBezierPath(Additions) : NSBezierPath
- (id)quartzPath;
- (void)strokeInside;
- (void)strokeInsideWithinRect:(id)arg0;
@end
@interface NSGraphicsContext(Extensions) : NSGraphicsContext
+ (double)currentContextScaleFactor;
@end
@interface NSView(Additions) : NSView
- (id)alignToNearestPixel:(id)arg0;
- (id)pixelAlignedLocationFromEvent:(id)arg0;
- (id)pixelAlignedLocation;
- (id)snapshotVisibleRectIncludingSubviews;
@end
@interface NSImage(Additions) : NSImage
- (char)isWindowSnapshot;
- (id)pixelateImageWithOnScreenContext:(id)arg0;
- (id)flippedImage;
- (id)tintImageWithColor:(id)arg0;
- (id)onImage;
- (id)offImage;
- (void)drawDrawTemplateImageInRect:(id)arg0 state:(id)arg1;
- (id)imageTintedWithColor:(id)arg0;
@end
@interface NSToolbar(Extensions) : NSToolbar
- (id)toolbarItemWithItemIdentifier:(id)arg0;
@end
@interface NSObject(JRSwizzle) : NSObject
+ (char)jr_swizzleMethod:(id)arg0 withMethod:(id)arg1 error:(id)arg2;
+ (char)jr_swizzleClassMethod:(id)arg0 withClassMethod:(id)arg1 error:(id)arg2;
@end
@interface NSFont(Annotate) : NSFont
+ (id)dft_menuFont;
@end
@interface NSError(Annotate) : NSError
+ (id)annotateErrorWithCode:(id)arg0 description:(id)arg1;
@end
@interface NSURLSessionTask(_AFStateObserving) : NSURLSessionTask
- (void)af_resume;
- (void)af_suspend;
+ (void)initialize;
@end
@interface NSDictionary(Additions) : NSDictionary
- (id)dictionaryWithoutNSNulls;
@end
@interface NSDictionary(Dropbox) : NSDictionary
- (id)urlRepresentation;
+ (id)dictionaryWithQueryString:(id)arg0;
@end
@interface NSObject(NSObject_DBJSON) : NSObject
- (id)JSONFragment;
- (id)JSONRepresentation;
@end
@interface NSString(NSString_DBJSON) : NSString
- (id)JSONFragmentValue;
- (id)JSONValue;
@end
@interface NSString(Dropbox) : NSString
- (id)normalizedDropboxPath;
- (char)isEqualToDropboxPath:(id)arg0;
@end
@interface NSString(MPURLEscapingAdditions) : NSString
- (char)isIPAddress;
- (id)stringByAddingURIPercentEscapesUsingEncoding:(id)arg0;
@end
@interface NSURL(MPURLEscapingAdditions) : NSURL
- (id)stringByAddingURIPercentEscapesUsingEncoding:(id)arg0;
@end
@interface NSURL(MPURLParameterAdditions) : NSURL
- (id)urlByAddingParameters:(id)arg0;
- (id)urlByAddingParameterDictionary:(id)arg0;
- (id)urlByRemovingQuery;
- (id)absoluteNormalizedString;
- (char)domainMatches:(id)arg0;
@end
@interface NSURLResponse(EncodingAdditions) : NSURLResponse
- (unsigned long long)encoding;
@end
@interface NSArray(RACSequenceAdditions) : NSArray
@property (nonatomic, strong) id rac_sequence;
- (id)rac_sequence;
@end
@interface NSControl(RACCommandSupport) : NSControl
@property (nonatomic, strong) id rac_command;
- (id)rac_command;
- (void)setRac_command:(id)arg0;
- (void)rac_hijackActionAndTargetIfNeeded;
- (void)rac_commandPerformAction:(id)arg0;
@end
@interface NSControl(RACTextSignalSupport) : NSControl
- (id)rac_textSignal;
@end
@interface NSData(RACSupport) : NSData
+ (id)rac_readContentsOfURL:(id)arg0 options:(id)arg1 scheduler:(id)arg2;
@end
@interface NSDictionary(RACSequenceAdditions) : NSDictionary
@property (nonatomic, strong) id rac_sequence;
@property (nonatomic, strong) id rac_keySequence;
@property (nonatomic, strong) id rac_valueSequence;
- (id)rac_sequence;
- (id)rac_keySequence;
- (id)rac_valueSequence;
@end
@interface NSEnumerator(RACSequenceAdditions) : NSEnumerator
@property (nonatomic, strong) id rac_sequence;
- (id)rac_sequence;
@end
@interface NSFileHandle(RACSupport) : NSFileHandle
- (id)rac_readInBackground;
@end
@interface NSIndexSet(RACSequenceAdditions) : NSIndexSet
@property (nonatomic, strong) id rac_sequence;
- (id)rac_sequence;
@end
@interface NSInvocation(RACTypeParsing) : NSInvocation
@property (nonatomic, strong) id rac_argumentsTuple;
- (void)rac_setArgument:(id)arg0 atIndex:(id)arg1;
- (id)rac_argumentAtIndex:(id)arg0;
- (id)rac_argumentsTuple;
- (void)setRac_argumentsTuple:(id)arg0;
- (id)rac_returnValue;
@end
@interface NSNotificationCenter(RACSupport) : NSNotificationCenter
- (id)rac_addObserverForName:(id)arg0 object:(id)arg1;
@end
@interface NSObject(RACAppKitBindings) : NSObject
- (id)rac_channelToBinding:(id)arg0;
- (id)rac_channelToBinding:(id)arg0 options:(id)arg1;
@end
@interface NSObject(RACAppKitBindingsDeprecated) : NSObject
- (void)rac_bind:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2;
- (void)rac_bind:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 nilValue:(id)arg3;
- (void)rac_bind:(id)arg0 toObject:(id)arg1 withKeyPath:(id)arg2 transform:(id)arg3;
- (void)rac_bind:(id)arg0 toObject:(id)arg1 withNegatedKeyPath:(id)arg2;
@end
@interface NSObject(RACDeallocating) : NSObject
@property (nonatomic, strong) id rac_deallocDisposable;
- (id)rac_willDeallocSignal;
- (id)rac_deallocDisposable;
@end
@interface NSObject(RACDeallocatingDeprecated) : NSObject
- (id)rac_didDeallocSignal;
- (void)rac_addDeallocDisposable:(id)arg0;
@end
@interface NSObject(RACDescription) : NSObject
- (id)rac_description;
@end
@interface NSValue(RACDescription) : NSValue
- (id)rac_description;
@end
@interface NSString(RACDescription) : NSString
- (id)rac_description;
@end
@interface NSObject(RACKVOWrapper) : NSObject
- (id)rac_observeKeyPath:(id)arg0 options:(id)arg1 observer:(id)arg2 block:(id)arg3;
@end
@interface NSObject(RACKVOWrapperDeprecated) : NSObject
- (id)rac_addObserver:(id)arg0 forKeyPath:(id)arg1 options:(id)arg2 block:(id)arg3;
@end
@interface NSObject(RACLifting) : NSObject
- (id)rac_liftSelector:(id)arg0 withSignalOfArguments:(id)arg1;
- (id)rac_liftSelector:(id)arg0 withSignalsFromArray:(id)arg1;
- (id)rac_liftSelector:(id)arg0 withSignals:(id)arg1;
@end
@interface NSObject(RACLiftingDeprecated) : NSObject
- (id)rac_liftSelector:(id)arg0 withObjects:(id)arg1;
- (id)rac_liftSelector:(id)arg0 withObjectsFromArray:(id)arg1;
- (id)rac_liftBlock:(id)arg0 withArguments:(id)arg1;
- (id)rac_liftBlock:(id)arg0 withArgumentsFromArray:(id)arg1;
@end
@interface NSObject(RACPropertySubscribing) : NSObject
- (id)rac_valuesForKeyPath:(id)arg0 observer:(id)arg1;
- (id)rac_valuesAndChangesForKeyPath:(id)arg0 options:(id)arg1 observer:(id)arg2;
@end
@interface NSObject(RACPropertySubscribingDeprecated) : NSObject
- (id)rac_signalForKeyPath:(id)arg0 observer:(id)arg1;
- (id)rac_signalWithStartingValueForKeyPath:(id)arg0 observer:(id)arg1;
- (id)rac_deriveProperty:(id)arg0 from:(id)arg1;
+ (id)rac_signalFor:(id)arg0 keyPath:(id)arg1 observer:(id)arg2;
+ (id)rac_signalWithStartingValueFor:(id)arg0 keyPath:(id)arg1 observer:(id)arg2;
+ (id)rac_signalWithChangesFor:(id)arg0 keyPath:(id)arg1 options:(id)arg2 observer:(id)arg3;
@end
@interface NSObject(RACSelectorSignal) : NSObject
- (id)rac_signalForSelector:(id)arg0;
- (id)rac_signalForSelector:(id)arg0 fromProtocol:(id)arg1;
@end
@interface NSOrderedSet(RACSequenceAdditions) : NSOrderedSet
@property (nonatomic, strong) id rac_sequence;
- (id)rac_sequence;
@end
@interface NSSet(RACSequenceAdditions) : NSSet
@property (nonatomic, strong) id rac_sequence;
- (id)rac_sequence;
@end
@interface NSString(RACKeyPathUtilities) : NSString
- (id)rac_keyPathComponents;
- (id)rac_keyPathByDeletingLastKeyPathComponent;
- (id)rac_keyPathByDeletingFirstKeyPathComponent;
@end
@interface NSString(RACSequenceAdditions) : NSString
@property (nonatomic, strong) id rac_sequence;
- (id)rac_sequence;
@end
@interface NSString(RACSupport) : NSString
+ (id)rac_readContentsOfURL:(id)arg0 usedEncoding:(id)arg1 scheduler:(id)arg2;
@end
@interface NSText(RACSignalSupport) : NSText
- (id)rac_textSignal;
@end
@interface NSURLConnection(RACSupport) : NSURLConnection
+ (id)rac_sendAsynchronousRequest:(id)arg0;
@end
@interface NSUserDefaults(RACSupport) : NSUserDefaults
- (id)rac_channelTerminalForKey:(id)arg0;
@end
@interface NSString(IFUnicodeURLHelpers) : NSString
- (id)IFUnicodeURL_splitAfterString:(id)arg0;
- (id)IFUnicodeURL_splitBeforeCharactersInSet:(id)arg0;
@end
@interface NSURL(IFUnicodeURL) : NSURL
- (id)initWithUnicodeString:(id)arg0;
- (id)unicodeAbsoluteString;
- (id)unicodeHost;
+ (id)URLWithUnicodeString:(id)arg0;
@end
@interface NSMutableURLRequest(NPPOSTBody) : NSMutableURLRequest
- (void)addToHTTPBodyValue:(id)arg0 forKey:(id)arg1;
- (void)addToHTTPBodyFileData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 forKey:(id)arg3;
- (void)finalizeHTTPBody;
@end
@interface NSString(NPAdditions) : NSString
+ (id)stringWithData:(id)arg0 encoding:(id)arg1;
+ (id)uniqueString;
@end
@interface NSString(NPMimeType) : NSString
- (id)mimeType;
@end
@interface ActionPreferencesViewController : NSViewController
{
	NSArray * _tableContents;
	NSTableView * _tableView;
}
@property (nonatomic, strong) NSTableView * tableView;
@property (nonatomic, strong) id hasResizableWidth;
@property (nonatomic, strong) id hasResizableHeight;
@property (nonatomic, strong) id identifier;
@property (nonatomic, strong) id toolbarItemImage;
@property (nonatomic, strong) id toolbarItemLabel;
- (void)viewDidLoad;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)toggleInToolbar:(id)arg0;
- (id)tableView:(id)arg0 viewForTableColumn:(id)arg1 row:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg0;
- (id)identifier;
- (id)toolbarItemImage;
- (id)toolbarItemLabel;
// - (void).cxx_destruct;
- (NSTableView *)tableView;
- (void)setTableView:(NSTableView *)arg0;
@end
@interface ActionTableCellView : NSTableCellView
{
	NSButton * _toggleButton;
}
@property (nonatomic, strong) NSButton * toggleButton;
- (void)drawRect:(id)arg0;
// - (void).cxx_destruct;
- (NSButton *)toggleButton;
- (void)setToggleButton:(NSButton *)arg0;
@end
@interface RecordScreenWindow : NSWindow
- (id)initForScreen:(id)arg0 recordDelegate:(id)arg1;
- (char)canBecomeKeyWindow;
- (void)dealloc;
@end
@interface ContentView : NSView
- (void)awakeFromNib;
- (void)drawRect:(id)arg0;
- (char)acceptsFirstResponder;
- (void)dealloc;
@end
@interface OverlayRectangle : Overlay <Overlay>
- (id)drawingPath;
@end
@interface DrifttClient : Client <Client>
{
	DrifttLoginWindowController * _loginWindowController;
}
@property (nonatomic, strong) DrifttLoginWindowController * loginWindowController;
@property (nonatomic, strong) id user;
@property (nonatomic, strong) id accessToken;
- (char)isLinked;
- (id)user;
- (id)email;
- (id)keychainAccessTokenKey;
- (id)accessToken;
- (void)authenticateWithCompletion:(id)arg0;
- (void)saveAccessToken:(id)arg0 firstName:(id)arg1 lastName:(id)arg2 email:(id)arg3 userID:(id)arg4;
- (void)revoke;
- (void)uploadFile:(id)arg0 forDocument:(id)arg1 onStart:(id)arg2 completion:(id)arg3 onCancel:(id)arg4;
- (id)sessionManager;
// - (void).cxx_destruct;
- (DrifttLoginWindowController *)loginWindowController;
- (void)setLoginWindowController:(DrifttLoginWindowController *)arg0;
+ (id)sharedClient;
+ (id)linkTypeKey;
+ (id)linkTypes;
+ (id)serviceImageLeft;
+ (id)serviceImageCentered;
+ (id)displayName;
+ (id)displayNameForLinkType:(id)arg0;
@end
@interface ArrowNormal : Arrow <Arrow>
{
	BOOL _isInverted;
}
- (id)initAtPoint:(id)arg0 inWindow:(id)arg1;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)drawingPath;
@end
@interface MPCSerializedJSONData : NSObject
{
	NSData * data;
}
@property (nonatomic, strong) NSData * data;
- (id)initWithData:(id)arg0;
- (void)dealloc;
- (NSData *)data;
@end
@interface ExportActionsController : NSObject
{
	NSArray * _exportActions;
	NSMenu * _mainMenuShareMenu;
	NSMenu * _shareButtonShareMenu;
	NSMenu * _contextualShareMenu;
}
@property (nonatomic, strong) NSMenu * mainMenuShareMenu;
@property (nonatomic, strong) NSMenu * shareButtonShareMenu;
@property (nonatomic, strong) NSMenu * contextualShareMenu;
@property (nonatomic, strong) NSArray * exportActions;
- (id)init;
- (NSMenu *)mainMenuShareMenu;
- (NSMenu *)shareButtonShareMenu;
- (NSMenu *)contextualShareMenu;
// - (void).cxx_destruct;
- (NSArray *)exportActions;
- (void)setMainMenuShareMenu:(NSMenu *)arg0;
- (void)setShareButtonShareMenu:(NSMenu *)arg0;
- (void)setContextualShareMenu:(NSMenu *)arg0;
+ (id)sharedController;
+ (id)exportActionTypes;
@end
@interface Video : NSObject
{
	AVAsset * _asset;
	AVAssetTrack * _track;
	{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _cropRect;
}
@property (nonatomic, strong) AVAsset * asset;
@property (nonatomic, strong) AVAssetTrack * track;
@property (nonatomic, assign) {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} cropRect;
@property (nonatomic, strong) id displaySize;
@property (nonatomic, strong) id pixelSize;
- (id)initWithAsset:(id)arg0;
- (id)displaySize;
- (id)pixelSize;
- ({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})cropRect;
- (void)setAsset:(AVAsset *)arg0;
// - (void).cxx_destruct;
- (void)setCropRect:({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})arg0;
- (AVAsset *)asset;
- (AVAssetTrack *)track;
- (void)setTrack:(AVAssetTrack *)arg0;
@end
@interface ProTipController : NSObject
{
	NSTimer * _imageViewTimer;
	NSStoryboard * _storyboard;
	NSWindow * _window;
	@? _completionBlock;
}
@property (nonatomic, strong) NSStoryboard * storyboard;
@property (nonatomic, strong) NSWindow * window;
@property (nonatomic, assign) @? completionBlock;
- (id)init;
- (void)windowWillClose:(id)arg0;
- (void)sendCompletion;
- (void)showDragProTip;
- (void)showShareProTipWithCompletion:(id)arg0;
- (void)showUploadProTip;
- (void)showCopyProTip;
- (void)showShareProTip:(id)arg0;
- (void)showDragProTip:(id)arg0;
- (void)showUploadProTip:(id)arg0;
- (void)showCopyProTip:(id)arg0;
- (id)showViewControllerWithIdentifier:(id)arg0 forKey:(id)arg1 forceShow:(id)arg2;
- (NSStoryboard *)storyboard;
// - (void).cxx_destruct;
- (void)setStoryboard:(NSStoryboard *)arg0;
- (NSWindow *)window;
- (void)setWindow:(NSWindow *)arg0;
- (@?)completionBlock;
- (void)setCompletionBlock:(@?)arg0;
+ (id)sharedController;
@end
@interface ResizeToolbarControl : NSControl
{
	double _scale;
	NSTextField * _resizePercentText;
	NSImageView * _downArrow;
	NSDictionary * _textAttributes;
}
@property (nonatomic, strong) NSTextField * resizePercentText;
@property (nonatomic, strong) NSImageView * downArrow;
@property (nonatomic, strong) NSDictionary * textAttributes;
@property (nonatomic, assign) double scale;
- (id)init;
- (void)dealloc;
- (void)setScale:(double)arg0;
- (void)imageScaleChangedNotification:(id)arg0;
- (void)windowStatusChanged:(id)arg0;
- (void)setEnabled:(id)arg0;
- (void)updateAlpha;
- (char)acceptsFirstResponder;
// - (void).cxx_destruct;
- (double)scale;
- (NSTextField *)resizePercentText;
- (void)setResizePercentText:(NSTextField *)arg0;
- (NSImageView *)downArrow;
- (void)setDownArrow:(NSImageView *)arg0;
- (NSDictionary *)textAttributes;
- (void)setTextAttributes:(NSDictionary *)arg0;
+ (Class)cellClass;
@end
@interface YRKSpinningProgressIndicator : NSView
{
	int _position;
	int _numFins;
	NSMutableArray * _finColors;
	BOOL _isAnimating;
	BOOL _isFadingOut;
	BOOL _isDisplaying;
	NSTimer * _animationTimer;
	NSThread * _animationThread;
	NSColor * _foreColor;
	NSColor * _backColor;
	BOOL _drawsBackground;
	BOOL _displayedWhenStopped;
	BOOL _usesThreadedAnimation;
	BOOL _isIndeterminate;
	double _currentValue;
	double _maxValue;
}
@property (nonatomic, strong) id color;
@property (nonatomic, strong) id backgroundColor;
@property (nonatomic, assign) BOOL drawsBackground;
@property (nonatomic, assign) BOOL displayedWhenStopped;
@property (nonatomic, assign) BOOL usesThreadedAnimation;
@property (nonatomic, strong) id indeterminate;
@property (nonatomic, strong) id doubleValue;
@property (nonatomic, assign) double maxValue;
- (id)initWithFrame:(id)arg0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (void)drawRect:(id)arg0;
- (void)startAnimation:(id)arg0;
- (void)stopAnimation:(id)arg0;
- (void)setStyle:(id)arg0;
- (void)setColor:(id)arg0;
- (void)setBackgroundColor:(id)arg0;
- (void)setDrawsBackground:(BOOL)arg0;
- (void)setIndeterminate:(id)arg0;
- (void)setDoubleValue:(id)arg0;
- (void)setMaxValue:(double)arg0;
- (void)setUsesThreadedAnimation:(BOOL)arg0;
- (void)setDisplayedWhenStopped:(BOOL)arg0;
- (void)updateFrame:(id)arg0;
- (void)actuallyStartAnimation;
- (void)actuallyStopAnimation;
- (void)generateFinColorsStartAtPosition:(id)arg0;
- (void)animateInBackgroundThread;
// - (void).cxx_destruct;
- (id)color;
- (id)backgroundColor;
- (char)drawsBackground;
- (char)isDisplayedWhenStopped;
- (char)usesThreadedAnimation;
- (char)isIndeterminate;
- (double)doubleValue;
- (double)maxValue;
@end
@interface WindowController : NSWindowController
{
	BOOL _forceShowNotification;
	long long _currentTool;
	NSIndexSet * _selectionIndexes;
	OverlayViewController * _overlayViewController;
	NSView * _canvasView;
	NSSlider * _sizeSlider;
	ColorPickerButton * _colorPickerButton;
	TitlebarRenameControl * _renameControl;
	NSPopover * _colorPopover;
	NSMenu * _resizeMenu;
	MixpanelEventt * _shareOutputEvent;
	NSWindow * _modalWindow;
	NSView * _overlayView;
	uint64_t _lockCount;
}
@property (nonatomic, strong) NSSlider * sizeSlider;
@property (nonatomic, strong) ColorPickerButton * colorPickerButton;
@property (nonatomic, strong) TitlebarRenameControl * renameControl;
@property (nonatomic, strong) NSPopover * colorPopover;
@property (nonatomic, strong) NSMenu * resizeMenu;
@property (nonatomic, strong) MixpanelEventt * shareOutputEvent;
@property (nonatomic, strong) NSWindow * modalWindow;
@property (nonatomic, strong) NSView * overlayView;
@property (nonatomic, assign) uint64_t lockCount;
@property (nonatomic, assign) long long currentTool;
@property (nonatomic, strong) NSIndexSet * selectionIndexes;
@property (nonatomic, strong) OverlayViewController * overlayViewController;
@property (nonatomic, strong) NSView * canvasView;
- (void)windowDidLoad;
- (void)dealloc;
- (void)setDocument:(id)arg0;
- (void)windowDidBecomeKey:(id)arg0;
- (void)windowDidResignKey:(id)arg0;
- (void)windowWillClose:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)altKeyDown:(id)arg0;
- (void)altKeyUp:(id)arg0;
- (void)changeTool:(id)arg0;
- (void)changeGraphicsSize:(id)arg0;
- (void)scaleImage:(id)arg0;
- (void)resizeImage:(id)arg0;
- (void)showResizeMenu:(id)arg0;
- (void)showColorPopover:(id)arg0;
- (void)showShareMenu:(id)arg0;
- (void)renameImage:(id)arg0;
- (void)performVoidSelector:(id)arg0 onReciever:(id)arg1 withArgument:(id)arg2;
- (void)setSelectionIndexes:(NSIndexSet *)arg0;
- (void)setCurrentTool:(long long)arg0;
- (NSView *)canvasView;
- (void)updateControls;
- (void)enableAndSetValueForControl:(id)arg0 setSelector:(id)arg1 conditionallyEnabled:(id)arg2 forKeyPath:(id)arg3 withSelectedItems:(id)arg4;
- (void)updateToolbarForDocument:(id)arg0;
- (id)toolsItemIdentifiers;
- (id)actionsItemIdentifiers;
- (void)insertItemWithItemIdentifier:(id)arg0 atIndex:(id)arg1;
- (void)removeItemWithItemIdentifier:(id)arg0;
- (id)toolbarDefaultItemIdentifiers:(id)arg0;
- (id)toolbarAllowedItemIdentifiers:(id)arg0;
- (id)toolbar:(id)arg0 itemForItemIdentifier:(id)arg1 willBeInsertedIntoToolbar:(id)arg2;
- (long long)linkContentTypeForDocument;
- (void)uploadImageRequestedNotification:(id)arg0;
- (void)uploadImage:(id)arg0;
- (void)dragImage:(id)arg0;
- (void)saveImage:(id)arg0;
- (void)copyImage:(id)arg0;
- (void)emailLink:(id)arg0;
- (void)emailImage:(id)arg0;
- (void)messageLink:(id)arg0;
- (void)messageImage:(id)arg0;
- (void)tweetLink:(id)arg0;
- (void)tweetImage:(id)arg0;
- (void)postLink:(id)arg0;
- (void)postImage:(id)arg0;
- (void)shareItems:(id)arg0 withSharingServiceNamed:(id)arg1;
- (char)hasLinkedServiceFromAction:(id)arg0;
- (void)uploadWithCompletion:(id)arg0;
- (void)lockUI;
- (void)unlockUI;
- (id)writeDocumentForExportAndHandleError;
- (id)writeDocumentForExportPassDataAndHandleError;
- (void)showVideoExportSpinner:(id)arg0;
- (void)hideVideoExportSpinner:(id)arg0;
- (id)sharingService:(id)arg0 sourceWindowForShareItems:(id)arg1 sharingContentScope:(id)arg2;
- (id)sharingService:(id)arg0 transitionImageForShareItem:(id)arg1 contentRect:(id)arg2;
- (id)sharingService:(id)arg0 sourceFrameOnScreenForShareItem:(id)arg1;
- (void)sharingService:(id)arg0 didShareItems:(id)arg1;
- (void)sharingService:(id)arg0 didFailToShareItems:(id)arg1 error:(id)arg2;
- (void)shouldAskForRatingOnOpen;
// - (void).cxx_destruct;
- (long long)currentTool;
- (NSIndexSet *)selectionIndexes;
- (OverlayViewController *)overlayViewController;
- (void)setOverlayViewController:(OverlayViewController *)arg0;
- (void)setCanvasView:(NSView *)arg0;
- (NSSlider *)sizeSlider;
- (void)setSizeSlider:(NSSlider *)arg0;
- (ColorPickerButton *)colorPickerButton;
- (void)setColorPickerButton:(ColorPickerButton *)arg0;
- (TitlebarRenameControl *)renameControl;
- (void)setRenameControl:(TitlebarRenameControl *)arg0;
- (NSPopover *)colorPopover;
- (void)setColorPopover:(NSPopover *)arg0;
- (NSMenu *)resizeMenu;
- (void)setResizeMenu:(NSMenu *)arg0;
- (MixpanelEventt *)shareOutputEvent;
- (void)setShareOutputEvent:(MixpanelEventt *)arg0;
- (NSWindow *)modalWindow;
- (void)setModalWindow:(NSWindow *)arg0;
- (NSView *)overlayView;
- (void)setOverlayView:(NSView *)arg0;
- (unsigned long long)lockCount;
- (void)setLockCount:(uint64_t)arg0;
@end
@interface MixpanelEvent : NSObject
{
	NSString * name;
	NSMutableDictionary * properties;
	NSDate * timestamp;
}
- (id)initWithName:(id)arg0 properties:(id)arg1;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)dealloc;
- (id)dictionaryValue;
@end
@interface ZendeskLoginViewController : NSViewController
{
	@? _completionBlock;
	NSTextField * _subdomainTextField;
	NSButton * _loginButton;
	NSButton * _cancelButton;
}
@property (nonatomic, strong) NSTextField * subdomainTextField;
@property (nonatomic, strong) NSButton * loginButton;
@property (nonatomic, strong) NSButton * cancelButton;
@property (nonatomic, assign) @? completionBlock;
- (void)viewDidLoad;
- (void)dealloc;
- (void)cancelButton:(id)arg0;
- (void)login:(id)arg0;
- (void)controlTextDidChange:(id)arg0;
- (void)cancelOperation:(id)arg0;
- (char)isValidEmail:(id)arg0;
// - (void).cxx_destruct;
- (@?)completionBlock;
- (void)setCompletionBlock:(@?)arg0;
- (NSTextField *)subdomainTextField;
- (void)setSubdomainTextField:(NSTextField *)arg0;
- (NSButton *)loginButton;
- (void)setLoginButton:(NSButton *)arg0;
- (NSButton *)cancelButton;
- (void)setCancelButton:(NSButton *)arg0;
@end
@interface TitlebarRenameControl : NSView
{
	BOOL _sendAction;
	NSTextField * _titleTextField;
	NSTrackingArea * _trackingArea;
	NSImageView * _arrowImageView;
	NSTimer * _fadeTimer;
	BOOL _mouseIsOverView;
	double _targetOpacity;
	double _fadeDelay;
	NSPopover * _popover;
}
@property (nonatomic, strong) NSPopover * popover;
- (id)initForWindow:(id)arg0;
- (void)dealloc;
- (void)updateTrackingAreas;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)mouseDown:(id)arg0;
- (void)mouseDragged:(id)arg0;
- (void)mouseUp:(id)arg0;
- (void)showArrow:(id)arg0;
- (void)mouseEntered:(id)arg0;
- (void)mouseExited:(id)arg0;
- (void)popoverWillClose:(id)arg0;
- (void)showPopover;
- (id)windowController;
- (id)document;
// - (void).cxx_destruct;
- (NSPopover *)popover;
- (void)setPopover:(NSPopover *)arg0;
@end
@interface ZendeskUpload : Upload <Upload>
{
	NSString * _filename;
	NSString * _email;
	NSString * _authToken;
	NSString * _uploadToken;
	NSURL * _fileURL;
	@? _onStart;
}
@property (nonatomic, strong) NSString * filename;
@property (nonatomic, strong) NSString * email;
@property (nonatomic, strong) NSString * authToken;
@property (nonatomic, strong) NSString * uploadToken;
@property (nonatomic, strong) NSURL * fileURL;
@property (nonatomic, assign) @? onStart;
- (id)initWithFileURL:(id)arg0 forDocument:(id)arg1 onStart:(id)arg2 withCompletion:(id)arg3;
- (void)uploadFile;
- (void)commentOnTicket:(id)arg0 withText:(id)arg1 isPublic:(id)arg2;
- (void)uploadToTicket:(id)arg0 withText:(id)arg1 isPublic:(id)arg2;
// - (void).cxx_destruct;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (NSString *)email;
- (void)setEmail:(NSString *)arg0;
- (NSString *)authToken;
- (void)setAuthToken:(NSString *)arg0;
- (NSString *)uploadToken;
- (void)setUploadToken:(NSString *)arg0;
- (NSURL *)fileURL;
- (void)setFileURL:(NSURL *)arg0;
- (@?)onStart;
- (void)setOnStart:(@?)arg0;
@end
@interface ProTipViewController : NSViewController
{
	NSButton * _closeButton;
	NSImageView * _newImageView;
	NSButton * _suppressCheckbox;
	NSImageView * _imageView;
	NSTextField * _label;
	NSButton * _button;
}
@property (nonatomic, strong) NSButton * suppressCheckbox;
@property (nonatomic, strong) NSImageView * imageView;
@property (nonatomic, strong) NSTextField * label;
@property (nonatomic, strong) NSButton * button;
- (void)viewDidLoad;
- (void)dealloc;
- (void)toggleImage;
- (void)animationDidStop:(id)arg0 finished:(id)arg1;
// - (void).cxx_destruct;
- (NSButton *)suppressCheckbox;
- (void)setSuppressCheckbox:(NSButton *)arg0;
- (NSImageView *)imageView;
- (void)setImageView:(NSImageView *)arg0;
- (NSTextField *)label;
- (void)setLabel:(NSTextField *)arg0;
- (NSButton *)button;
- (void)setButton:(NSButton *)arg0;
@end
@interface MixpanelAPI : NSObject
{
	NSString * apiToken;
	NSMutableArray * eventQueue;
	NSMutableArray * peopleQueue;
	NSMutableDictionary * superProperties;
	NSTimer * timer;
	NSArray * eventsToSend;
	NSArray * peopleToSend;
	NSMutableData * responseData;
	NSMutableData * peopleResponseData;
	NSURLConnection * connection;
	NSURLConnection * people_connection;
	<MixpanelDelegate> * delegate;
	NSString * defaultUserId;
	uint64_t uploadInterval;
	BOOL testMode;
	BOOL sendDeviceModel;
	BOOL flushOnBackground;
	NSURLConnection * peopleConnection;
	NSString * serverURL;
}
@property (nonatomic, strong) NSString * apiToken;
@property (nonatomic, strong) NSMutableDictionary * superProperties;
@property (nonatomic, strong) NSArray * eventsToSend;
@property (nonatomic, strong) NSArray * peopleToSend;
@property (nonatomic, strong) NSMutableArray * eventQueue;
@property (nonatomic, strong) NSMutableArray * peopleQueue;
@property (nonatomic, strong) NSURLConnection * connection;
@property (nonatomic, strong) NSURLConnection * peopleConnection;
@property (nonatomic, strong) NSMutableData * responseData;
@property (nonatomic, strong) NSMutableData * peopleResponseData;
@property (nonatomic, strong) NSString * defaultUserId;
@property (nonatomic, assign) uint64_t uploadInterval;
@property (nonatomic, assign) BOOL flushOnBackground;
@property (nonatomic, strong) id nameTag;
@property (nonatomic, assign) BOOL testMode;
@property (nonatomic, strong) NSString * serverURL;
@property (nonatomic, strong) <MixpanelDelegate> * delegate;
@property (nonatomic, assign) BOOL sendDeviceModel;
- (void)setUploadInterval:(uint64_t)arg0;
- (void)setNameTag:(id)arg0;
- (id)nameTag;
- (id)interfaces;
- (id)userIdentifier;
- (void)start;
- (void)stop;
- (void)setSendDeviceModel:(BOOL)arg0;
- (id)initWithToken:(id)arg0;
- (id)init;
- (void)registerSuperProperties:(id)arg0;
- (void)registerSuperPropertiesOnce:(id)arg0;
- (void)registerSuperPropertiesOnce:(id)arg0 defaultValue:(id)arg1;
- (void)identifyUser:(id)arg0;
- (id)eventFilePath;
- (id)peopleFilePath;
- (void)track:(id)arg0;
- (void)track:(id)arg0 properties:(id)arg1;
- (void)addPersonToQueueWithAction:(id)arg0 andProperties:(id)arg1;
- (void)setUserProperties:(id)arg0;
- (void)setUserProperty:(id)arg0 forKey:(id)arg1;
- (void)incrementUserProperties:(id)arg0;
- (void)incrementUserPropertyWithKey:(id)arg0;
- (void)incrementUserPropertyWithKey:(id)arg0 byNumber:(id)arg1;
- (void)incrementUserPropertyWithKey:(id)arg0 byInt:(id)arg1;
- (void)append:(id)arg0 toUserPropertyWithKey:(id)arg1;
- (void)deleteUser:(id)arg0;
- (void)deleteCurrentUser;
- (void)unarchiveData;
- (void)unarchiveEvents;
- (void)unarchivePeople;
- (void)archiveData;
- (void)archiveEvents;
- (void)archivePeople;
- (void)applicationWillTerminate:(id)arg0;
- (void)applicationDidEnterBackground:(id)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
- (id)apiConnectionWithEndpoint:(id)arg0 andBody:(id)arg1;
- (id)encodedStringFromArray:(id)arg0;
- (void)flush;
- (void)flushPeople;
- (void)flushEvents;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg0;
- (void)dealloc;
- (NSString *)apiToken;
- (void)setApiToken:(NSString *)arg0;
- (NSMutableDictionary *)superProperties;
- (void)setSuperProperties:(NSMutableDictionary *)arg0;
- (NSMutableArray *)eventQueue;
- (void)setEventQueue:(NSMutableArray *)arg0;
- (NSMutableArray *)peopleQueue;
- (void)setPeopleQueue:(NSMutableArray *)arg0;
- (NSArray *)eventsToSend;
- (void)setEventsToSend:(NSArray *)arg0;
- (NSArray *)peopleToSend;
- (void)setPeopleToSend:(NSArray *)arg0;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (NSURLConnection *)peopleConnection;
- (void)setPeopleConnection:(NSURLConnection *)arg0;
- (NSMutableData *)responseData;
- (void)setResponseData:(NSMutableData *)arg0;
- (NSMutableData *)peopleResponseData;
- (void)setPeopleResponseData:(NSMutableData *)arg0;
- (NSString *)defaultUserId;
- (void)setDefaultUserId:(NSString *)arg0;
- (unsigned long long)uploadInterval;
- (char)flushOnBackground;
- (void)setFlushOnBackground:(BOOL)arg0;
- (NSString *)serverURL;
- (void)setServerURL:(NSString *)arg0;
- (<MixpanelDelegate> *)delegate;
- (void)setDelegate:(<MixpanelDelegate> *)arg0;
- (char)testMode;
- (void)setTestMode:(BOOL)arg0;
- (char)sendDeviceModel;
+ (id)calculateHMAC_SHA1withString:(id)arg0 andKey:(id)arg1;
+ (id)currentPlatform;
+ (void)initialize;
+ (id)sharedAPIWithToken:(id)arg0;
+ (id)sharedAPI;
@end
@interface SegmentAnalytics : NSObject
{
	AFHTTPSessionManager * _sessionManager;
	NSString * _anonymousUserID;
	NSString * _userID;
}
@property (nonatomic, strong) AFHTTPSessionManager * sessionManager;
@property (nonatomic, strong) NSString * anonymousUserID;
@property (nonatomic, strong) NSString * userID;
- (id)init;
- (void)track:(id)arg0;
- (void)track:(id)arg0 properties:(id)arg1;
- (void)identifyWithEmail:(id)arg0 userID:(id)arg1;
- (void)identifyWithEmail:(id)arg0 userID:(id)arg1 traits:(id)arg2;
// - (void).cxx_destruct;
- (AFHTTPSessionManager *)sessionManager;
- (void)setSessionManager:(AFHTTPSessionManager *)arg0;
- (NSString *)anonymousUserID;
- (void)setAnonymousUserID:(NSString *)arg0;
- (NSString *)userID;
- (void)setUserID:(NSString *)arg0;
+ (id)sharedInstance;
@end
@interface ChooseServiceViewController : NSViewController
{
	NSArray * _tableData;
	NSTableView * _tableView;
}
@property (nonatomic, strong) NSTableView * tableView;
- (void)viewDidLoad;
- (double)tableView:(id)arg0 heightOfRow:(id)arg1;
- (void)dealloc;
- (long long)numberOfRowsInTableView:(id)arg0;
- (id)tableView:(id)arg0 viewForTableColumn:(id)arg1 row:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg0;
- (void)cancelOperation:(id)arg0;
- (void)cancelSheet:(id)arg0;
// - (void).cxx_destruct;
- (NSTableView *)tableView;
- (void)setTableView:(NSTableView *)arg0;
@end
@interface ZendeskTicketTextFieldBackgroundView : NSView
- (id)initWithFrame:(id)arg0;
@end
@interface UploadsMenuController : NSObject
{
	NSMenu * _menu;
}
@property (nonatomic, strong) NSMenu * menu;
- (id)initForMenu:(id)arg0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)updateRecenUploadMenuItems;
- (void)clearMenu:(id)arg0;
- (void)openLink:(id)arg0;
// - (void).cxx_destruct;
- (NSMenu *)menu;
- (void)setMenu:(NSMenu *)arg0;
@end
@interface DropboxUpload : Upload <Upload>
{
	DBRestClient * _restClient;
}
@property (nonatomic, strong) DBRestClient * restClient;
- (void)dealloc;
- (void)restClient:(id)arg0 uploadedFile:(id)arg1 from:(id)arg2 metadata:(id)arg3;
- (void)restClient:(id)arg0 uploadFileFailedWithError:(id)arg1;
- (void)restClient:(id)arg0 loadedSharableLink:(id)arg1 forFile:(id)arg2;
- (void)restClient:(id)arg0 loadSharableLinkFailedWithError:(id)arg1;
// - (void).cxx_destruct;
- (DBRestClient *)restClient;
- (void)setRestClient:(DBRestClient *)arg0;
+ (id)uploadFile:(id)arg0 forDocument:(id)arg1 withCompletion:(id)arg2;
@end
@interface ArrowLine : Arrow <Arrow>
- (double)strokeWidth;
- (id)drawingPath;
@end
@interface ToolbarItem : NSToolbarItem
+ (id)buttonForToobarItem;
+ (id)toggleButtonForToobarItem;
+ (id)popUpButtonForToolbarItem;
+ (id)rect;
@end
@interface ZendeskTicketScroller : NSScroller
- (void)drawRect:(id)arg0;
@end
@interface PurchaseProWindowController : NSWindowController
{
	<PurchaseProWindowControllerDelegate> * _delegate;
	NSProgressIndicator * _spinner;
	NSTextField * _useDrifttText;
}
@property (nonatomic, strong) NSProgressIndicator * spinner;
@property (nonatomic, strong) NSTextField * useDrifttText;
@property (nonatomic, strong) <PurchaseProWindowControllerDelegate> * delegate;
- (id)initWithDelegate:(id)arg0;
- (void)windowDidLoad;
- (void)useDrifttTextPressed:(id)arg0;
- (void)upgradeButtonPressed:(id)arg0;
- (void)restoreUpgradeButtonPressed:(id)arg0;
- (void)cancelOrCloseButtonPressed:(id)arg0;
- (void)animateSpinner;
// - (void).cxx_destruct;
- (<PurchaseProWindowControllerDelegate> *)delegate;
- (NSProgressIndicator *)spinner;
- (void)setSpinner:(NSProgressIndicator *)arg0;
- (NSTextField *)useDrifttText;
- (void)setUseDrifttText:(NSTextField *)arg0;
@end
@interface ZendeskTicketTableCellView : NSTableCellView
{
	ZendeskTicket * _ticket;
	NSTextField * _ticketNumberTextField;
	NSTextField * _ticketSubjectTextField;
}
@property (nonatomic, strong) NSTextField * ticketNumberTextField;
@property (nonatomic, strong) NSTextField * ticketSubjectTextField;
@property (nonatomic, strong) ZendeskTicket * ticket;
- (void)setTicket:(ZendeskTicket *)arg0;
- (void)setBackgroundStyle:(id)arg0;
// - (void).cxx_destruct;
- (ZendeskTicket *)ticket;
- (NSTextField *)ticketNumberTextField;
- (void)setTicketNumberTextField:(NSTextField *)arg0;
- (NSTextField *)ticketSubjectTextField;
- (void)setTicketSubjectTextField:(NSTextField *)arg0;
@end
@interface RecordScreenController : NSObject
{
	@? _completion;
	NSMutableArray * _windows;
	AVCaptureSession * _captureSession;
	AVCaptureScreenInput * _captureInput;
	AVCaptureVideoDataOutput * _captureOutput;
	AVAssetWriterInput * _assetWriterInput;
	AVAssetWriter * _assetWriter;
	NSObject<OS_dispatch_queue> * _recordScreenSerialQueue;
}
@property (nonatomic, assign) @? completion;
@property (nonatomic, strong) NSMutableArray * windows;
@property (nonatomic, strong) AVCaptureSession * captureSession;
@property (nonatomic, strong) AVCaptureScreenInput * captureInput;
@property (nonatomic, strong) AVCaptureVideoDataOutput * captureOutput;
@property (nonatomic, strong) AVAssetWriterInput * assetWriterInput;
@property (nonatomic, strong) AVAssetWriter * assetWriter;
@property (nonatomic, strong) NSObject<OS_dispatch_queue> * recordScreenSerialQueue;
@property (nonatomic, strong) id isVisible;
@property (nonatomic, strong) id isRecording;
- (id)initWithCompletion:(id)arg0;
- (void)showWindows:(id)arg0;
- (void)closeWindows:(id)arg0;
- (char)isRecording;
- (char)isVisible;
- (void)cancel;
- (void)beginRecordingSelectedScreenAreaRect:(id)arg0 screen:(id)arg1;
- (void)beginRecordingSelectedScreenAreaRect:(id)arg0 screen:(id)arg1 toFileURL:(id)arg2;
- (void)stopRecording;
- (void)callCompletionWithOutputURL:(id)arg0;
- (void)cleanupRecording;
- (id)pixelDensityMetatdataItemForCaptureRect:(id)arg0 screen:(id)arg1;
- (void)captureOutput:(id)arg0 didOutputSampleBuffer:(id)arg1 fromConnection:(id)arg2;
- (void)captureOutput:(id)arg0 didDropSampleBuffer:(id)arg1 fromConnection:(id)arg2;
- (void)dealloc;
// - (void).cxx_destruct;
- (@?)completion;
- (void)setCompletion:(@?)arg0;
- (NSMutableArray *)windows;
- (void)setWindows:(NSMutableArray *)arg0;
- (AVCaptureSession *)captureSession;
- (void)setCaptureSession:(AVCaptureSession *)arg0;
- (AVCaptureScreenInput *)captureInput;
- (void)setCaptureInput:(AVCaptureScreenInput *)arg0;
- (AVCaptureVideoDataOutput *)captureOutput;
- (void)setCaptureOutput:(AVCaptureVideoDataOutput *)arg0;
- (AVAssetWriterInput *)assetWriterInput;
- (void)setAssetWriterInput:(AVAssetWriterInput *)arg0;
- (AVAssetWriter *)assetWriter;
- (void)setAssetWriter:(AVAssetWriter *)arg0;
- (NSObject<OS_dispatch_queue> *)recordScreenSerialQueue;
- (void)setRecordScreenSerialQueue:(NSObject<OS_dispatch_queue> *)arg0;
@end
@interface Export : NSObject
{
	NSString * _filenameWithoutExtension;
	NSString * _fileType;
	Document * _document;
	NSSavePanel * _savePanel;
}
@property (nonatomic, strong) NSSavePanel * savePanel;
@property (nonatomic, strong) NSString * filenameWithoutExtension;
@property (nonatomic, strong) NSString * fileType;
@property (nonatomic, strong) id filename;
@property (nonatomic, strong) Document * document;
- (void)dealloc;
- (id)initWithDocument:(id)arg0 filename:(id)arg1;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)fileExtension;
- (id)filename;
- (void)setFileType:(NSString *)arg0;
- (void)setFilenameWithoutExtension:(NSString *)arg0;
- (id)writeToDropDestination:(id)arg0;
- (id)copyImageToClipboard;
- (id)writeExportedDataToURL:(id)arg0;
- (id)writeForExportSignal;
- (void)presentSavePanel;
- (void)changeFileFormat:(id)arg0;
// - (void).cxx_destruct;
- (NSString *)filenameWithoutExtension;
- (NSString *)fileType;
- (Document *)document;
- (void)setDocument:(Document *)arg0;
- (NSSavePanel *)savePanel;
- (void)setSavePanel:(NSSavePanel *)arg0;
+ (void)registerDefaults;
+ (id)writableTypesForDocumentType:(id)arg0;
+ (id)fileTypeKeyForDocumentType:(id)arg0;
+ (id)fileExtensionForType:(id)arg0;
+ (id)dottedFileExtensionForType:(id)arg0;
+ (id)savePanelFormatNameForType:(id)arg0;
+ (void)setDefaultFileType:(id)arg0 forDocumentType:(id)arg1;
+ (id)defaultFileTypeForDocumentType:(id)arg0;
@end
@interface ZendeskTicketTableView : NSTableView
- (void)keyDown:(id)arg0;
@end
@interface MPCJSONSerializer : NSObject
{
	MPCJSONDataSerializer * serializer;
}
- (id)init;
- (void)dealloc;
- (id)serializeObject:(id)arg0 error:(id)arg1;
- (id)serializeArray:(id)arg0 error:(id)arg1;
- (id)serializeDictionary:(id)arg0 error:(id)arg1;
+ (id)serializer;
@end
@interface OverlayViewController : NSViewController
{
	BOOL _removeViewOnAnimationCompletion;
	NSTimer * _dismissTimer;
	BOOL _isAnimating;
	@ _eventMonitor;
}
- (void)loadView;
- (void)dealloc;
- (void)showOverlayForError:(id)arg0 inWindow:(id)arg1;
- (void)showOverlayWithMessage:(id)arg0 subMessage:(id)arg1 subLink:(id)arg2 icon:(id)arg3 window:(id)arg4 delay:(id)arg5 isDismissable:(id)arg6;
- (void)hideOverlay;
- (void)animationDidStop:(id)arg0 finished:(id)arg1;
- (char)acceptsFirstResponder;
// - (void).cxx_destruct;
@end
@interface OnboardingWindowController : NSWindowController
{
	NSView * _topBackgroundView;
	NSButton * _closeButton;
	NSButton * _okButton;
	NSButton * _proTipsButton;
	OnboardingShortcutView * _crosshairView;
	OnboardingShortcutView * _windowSnapshotView;
	OnboardingShortcutView * _clipboardView;
	NSView * _mobileAppView;
	NSVisualEffectView * _visualEffectView;
	NSImageView * _phoneImageView;
	NSButton * _showWindowButton;
}
@property (nonatomic, strong) NSView * topBackgroundView;
@property (nonatomic, strong) NSButton * closeButton;
@property (nonatomic, strong) NSButton * okButton;
@property (nonatomic, strong) NSButton * proTipsButton;
@property (nonatomic, strong) OnboardingShortcutView * crosshairView;
@property (nonatomic, strong) OnboardingShortcutView * windowSnapshotView;
@property (nonatomic, strong) OnboardingShortcutView * clipboardView;
@property (nonatomic, strong) NSView * mobileAppView;
@property (nonatomic, strong) NSVisualEffectView * visualEffectView;
@property (nonatomic, strong) NSImageView * phoneImageView;
@property (nonatomic, strong) NSButton * showWindowButton;
- (id)init;
- (void)windowDidLoad;
- (void)mouseEntered:(id)arg0;
- (void)openMobileDownloadLink:(id)arg0;
- (void)closeButtonPressed:(id)arg0;
- (void)showWindowButtonPressed:(id)arg0;
// - (void).cxx_destruct;
- (NSView *)topBackgroundView;
- (void)setTopBackgroundView:(NSView *)arg0;
- (NSButton *)closeButton;
- (void)setCloseButton:(NSButton *)arg0;
- (NSButton *)okButton;
- (void)setOkButton:(NSButton *)arg0;
- (NSButton *)proTipsButton;
- (void)setProTipsButton:(NSButton *)arg0;
- (OnboardingShortcutView *)crosshairView;
- (void)setCrosshairView:(OnboardingShortcutView *)arg0;
- (OnboardingShortcutView *)windowSnapshotView;
- (void)setWindowSnapshotView:(OnboardingShortcutView *)arg0;
- (OnboardingShortcutView *)clipboardView;
- (void)setClipboardView:(OnboardingShortcutView *)arg0;
- (NSView *)mobileAppView;
- (void)setMobileAppView:(NSView *)arg0;
- (NSVisualEffectView *)visualEffectView;
- (void)setVisualEffectView:(NSVisualEffectView *)arg0;
- (NSImageView *)phoneImageView;
- (void)setPhoneImageView:(NSImageView *)arg0;
- (NSButton *)showWindowButton;
- (void)setShowWindowButton:(NSButton *)arg0;
@end
@interface VideoControlTrackView : NSView
{
	BOOL _mouseDown;
	BOOL _wasPlaying;
	AVPlayer * _videoPlayer;
	double _progress;
	@ _playbackTimeObserver;
}
@property (nonatomic, assign) BOOL mouseDown;
@property (nonatomic, assign) BOOL wasPlaying;
@property (nonatomic, assign) double progress;
@property (nonatomic, assign) @ playbackTimeObserver;
@property (nonatomic, strong) AVPlayer * videoPlayer;
- (id)initWithFrame:(id)arg0 player:(id)arg1;
- (void)drawRect:(id)arg0;
- (void)setProgressWithPlaybackTime:(id)arg0;
- (void)setProgressWithMouseEvent:(id)arg0;
- (void)setMouseDown:(BOOL)arg0;
- (void)seekToProgress:(id)arg0;
- (void)mouseDown:(id)arg0;
- (void)mouseDragged:(id)arg0;
- (void)mouseUp:(id)arg0;
- (double)progressForXPosition:(id)arg0;
- (double)lineLength;
- (void)setProgress:(double)arg0;
- (void)dealloc;
// - (void).cxx_destruct;
- (AVPlayer *)videoPlayer;
- (void)setVideoPlayer:(AVPlayer *)arg0;
- (char)mouseDown;
- (char)wasPlaying;
- (void)setWasPlaying:(BOOL)arg0;
- (double)progress;
- (@)playbackTimeObserver;
- (void)setPlaybackTimeObserver:(@)arg0;
@end
@interface CloudAppLoginViewController : NSViewController
{
	@? _completionBlock;
	NSSecureTextField * _passwordField;
	NSTextField * _emailTextField;
	NSButton * _loginButton;
	NSButton * _cancelButton;
}
@property (nonatomic, strong) NSSecureTextField * passwordField;
@property (nonatomic, strong) NSTextField * emailTextField;
@property (nonatomic, strong) NSButton * loginButton;
@property (nonatomic, strong) NSButton * cancelButton;
@property (nonatomic, assign) @? completionBlock;
- (void)viewDidLoad;
- (void)dealloc;
- (void)cancelButton:(id)arg0;
- (void)login:(id)arg0;
- (void)controlTextDidChange:(id)arg0;
- (void)cancelOperation:(id)arg0;
- (char)isValidEmail:(id)arg0;
// - (void).cxx_destruct;
- (@?)completionBlock;
- (void)setCompletionBlock:(@?)arg0;
- (NSSecureTextField *)passwordField;
- (void)setPasswordField:(NSSecureTextField *)arg0;
- (NSTextField *)emailTextField;
- (void)setEmailTextField:(NSTextField *)arg0;
- (NSButton *)loginButton;
- (void)setLoginButton:(NSButton *)arg0;
- (NSButton *)cancelButton;
- (void)setCancelButton:(NSButton *)arg0;
@end
@interface ToolSizeSlider : NSSlider
{
	NSImage * _knobImage;
	NSImage * _backgroundImage;
}
@property (nonatomic, strong) NSImage * knobImage;
@property (nonatomic, strong) NSImage * backgroundImage;
- (id)initWithFrame:(id)arg0;
- (void)dealloc;
- (void)setKnobImage:(NSImage *)arg0;
- (void)setBackgroundImage:(NSImage *)arg0;
- (void)windowStatusChanged:(id)arg0;
- (void)setEnabled:(id)arg0;
- (void)updateAlpha;
- (char)acceptsFirstResponder;
// - (void).cxx_destruct;
- (NSImage *)knobImage;
- (NSImage *)backgroundImage;
@end
@interface ZendeskTicketTableRowView : NSTableRowView
- (void)drawSelectionInRect:(id)arg0;
- (long long)interiorBackgroundStyle;
@end
@interface HistoryManager : NSObject
{
	NSArray * _recentUploads;
}
@property (nonatomic, strong) NSArray * recentUploads;
- (id)init;
- (void)addItem:(id)arg0;
- (void)clearHistory;
// - (void).cxx_destruct;
- (NSArray *)recentUploads;
+ (id)sharedManager;
@end
@interface MixpanelEventt : NSObject
{
	long long _outputType;
	long long _outputContentType;
	long long _inputType;
	NSNumber * _annotations;
	NSNumber * _duration;
	NSNumber * _arrows;
	NSNumber * _lines;
	NSNumber * _rectangleOverlays;
	NSNumber * _ovalOverlays;
	NSNumber * _rectangles;
	NSNumber * _ovals;
	NSNumber * _texts;
	NSNumber * _pens;
	NSNumber * _pixelates;
	NSString * _fileType;
	NSString * _applicationType;
}
@property (nonatomic, assign) long long inputType;
@property (nonatomic, strong) NSNumber * annotations;
@property (nonatomic, strong) NSNumber * duration;
@property (nonatomic, strong) NSNumber * arrows;
@property (nonatomic, strong) NSNumber * lines;
@property (nonatomic, strong) NSNumber * rectangleOverlays;
@property (nonatomic, strong) NSNumber * ovalOverlays;
@property (nonatomic, strong) NSNumber * rectangles;
@property (nonatomic, strong) NSNumber * ovals;
@property (nonatomic, strong) NSNumber * texts;
@property (nonatomic, strong) NSNumber * pens;
@property (nonatomic, strong) NSNumber * pixelates;
@property (nonatomic, strong) NSString * fileType;
@property (nonatomic, strong) NSString * applicationType;
@property (nonatomic, assign) long long outputType;
@property (nonatomic, assign) long long outputContentType;
- (id)initForDocument:(id)arg0;
- (void)commitEvent;
- (id)trialVersionString;
- (id)inputTypeString;
- (id)snapshotTypeString;
- (id)serviceTypeString;
- (id)linkTypeString;
- (id)outputContentTypeString;
- (id)outputTypeString;
// - (void).cxx_destruct;
- (long long)outputType;
- (void)setOutputType:(long long)arg0;
- (long long)outputContentType;
- (void)setOutputContentType:(long long)arg0;
- (long long)inputType;
- (void)setInputType:(long long)arg0;
- (NSNumber *)annotations;
- (void)setAnnotations:(NSNumber *)arg0;
- (NSNumber *)duration;
- (void)setDuration:(NSNumber *)arg0;
- (NSNumber *)arrows;
- (void)setArrows:(NSNumber *)arg0;
- (NSNumber *)lines;
- (void)setLines:(NSNumber *)arg0;
- (NSNumber *)rectangleOverlays;
- (void)setRectangleOverlays:(NSNumber *)arg0;
- (NSNumber *)ovalOverlays;
- (void)setOvalOverlays:(NSNumber *)arg0;
- (NSNumber *)rectangles;
- (void)setRectangles:(NSNumber *)arg0;
- (NSNumber *)ovals;
- (void)setOvals:(NSNumber *)arg0;
- (NSNumber *)texts;
- (void)setTexts:(NSNumber *)arg0;
- (NSNumber *)pens;
- (void)setPens:(NSNumber *)arg0;
- (NSNumber *)pixelates;
- (void)setPixelates:(NSNumber *)arg0;
- (NSString *)fileType;
- (void)setFileType:(NSString *)arg0;
- (NSString *)applicationType;
- (void)setApplicationType:(NSString *)arg0;
+ (void)track:(id)arg0 properties:(id)arg1;
+ (void)initMixpanel;
@end
@interface ServicePreferencesViewController : NSViewController
{
	NSPopUpButton * _uploadServicePopUpButton;
	NSBox * _box;
	long long _serviceType;
	NSView * _noServiceView;
	NSView * _signedOutView;
	NSImageView * _signedOutImageView;
	NSButton * _signInButton;
	NSView * _signedInView;
	NSImageView * _signedInImageView;
	NSTextField * _accountLabel;
	NSTextField * _shareLinkLabel;
	NSPopUpButton * _linkTypePopUpButton;
	NSButton * _signOutButton;
}
@property (nonatomic, strong) NSPopUpButton * uploadServicePopUpButton;
@property (nonatomic, strong) NSBox * box;
@property (nonatomic, assign) long long serviceType;
@property (nonatomic, strong) NSView * noServiceView;
@property (nonatomic, strong) NSView * signedOutView;
@property (nonatomic, strong) NSImageView * signedOutImageView;
@property (nonatomic, strong) NSButton * signInButton;
@property (nonatomic, strong) NSView * signedInView;
@property (nonatomic, strong) NSImageView * signedInImageView;
@property (nonatomic, strong) NSTextField * accountLabel;
@property (nonatomic, strong) NSTextField * shareLinkLabel;
@property (nonatomic, strong) NSPopUpButton * linkTypePopUpButton;
@property (nonatomic, strong) NSButton * signOutButton;
@property (nonatomic, strong) id hasResizableWidth;
@property (nonatomic, strong) id hasResizableHeight;
@property (nonatomic, strong) id identifier;
@property (nonatomic, strong) id toolbarItemImage;
@property (nonatomic, strong) id toolbarItemLabel;
- (void)viewDidLoad;
- (void)dealloc;
- (void)menu:(id)arg0 willHighlightItem:(id)arg1;
- (void)menuDidClose:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)serviceTypeChanged:(id)arg0;
- (void)changeLinkType:(id)arg0;
- (void)setServiceType:(long long)arg0;
- (void)updateUI;
- (void)showViewInBox:(id)arg0;
- (id)configuredForService:(id)arg0;
- (void)setLinkTypeButtonHidden:(id)arg0;
- (void)signIn:(id)arg0;
- (void)signOut:(id)arg0;
- (long long)newService;
- (id)identifier;
- (id)toolbarItemImage;
- (id)toolbarItemLabel;
// - (void).cxx_destruct;
- (NSPopUpButton *)uploadServicePopUpButton;
- (void)setUploadServicePopUpButton:(NSPopUpButton *)arg0;
- (NSBox *)box;
- (void)setBox:(NSBox *)arg0;
- (long long)serviceType;
- (NSView *)noServiceView;
- (void)setNoServiceView:(NSView *)arg0;
- (NSView *)signedOutView;
- (void)setSignedOutView:(NSView *)arg0;
- (NSImageView *)signedOutImageView;
- (void)setSignedOutImageView:(NSImageView *)arg0;
- (NSButton *)signInButton;
- (void)setSignInButton:(NSButton *)arg0;
- (NSView *)signedInView;
- (void)setSignedInView:(NSView *)arg0;
- (NSImageView *)signedInImageView;
- (void)setSignedInImageView:(NSImageView *)arg0;
- (NSTextField *)accountLabel;
- (void)setAccountLabel:(NSTextField *)arg0;
- (NSTextField *)shareLinkLabel;
- (void)setShareLinkLabel:(NSTextField *)arg0;
- (NSPopUpButton *)linkTypePopUpButton;
- (void)setLinkTypePopUpButton:(NSPopUpButton *)arg0;
- (NSButton *)signOutButton;
- (void)setSignOutButton:(NSButton *)arg0;
@end
@interface DragViewController : NSViewController
{
	double _scale;
	BOOL _wasInitializedWithAltKey;
	Document * _document;
	<DragViewDelegate> * _delegate;
	NSData * _data;
	NSURL * _fileURL;
	DragView * _dragView;
	SnapshotAnimationView * _animationView;
}
@property (nonatomic, strong) DragView * dragView;
@property (nonatomic, strong) SnapshotAnimationView * animationView;
@property (nonatomic, strong) Document * document;
@property (nonatomic, strong) <DragViewDelegate> * delegate;
@property (nonatomic, assign) BOOL wasInitializedWithAltKey;
@property (nonatomic, strong) NSData * data;
@property (nonatomic, strong) NSURL * fileURL;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (void)addViewToView:(id)arg0 withFrame:(id)arg1;
- (void)startTransition;
- (void)animationDidStop:(id)arg0 finished:(id)arg1;
- (void)cancel:(id)arg0;
- (void)endTransition;
- (id)canvasViewController;
- (id)windowController;
// - (void).cxx_destruct;
- (Document *)document;
- (void)setDocument:(Document *)arg0;
- (<DragViewDelegate> *)delegate;
- (void)setDelegate:(<DragViewDelegate> *)arg0;
- (char)wasInitializedWithAltKey;
- (void)setWasInitializedWithAltKey:(BOOL)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSURL *)fileURL;
- (void)setFileURL:(NSURL *)arg0;
- (DragView *)dragView;
- (void)setDragView:(DragView *)arg0;
- (SnapshotAnimationView *)animationView;
- (void)setAnimationView:(SnapshotAnimationView *)arg0;
@end
@interface ProTipWindow : NSWindow
- (void)dealloc;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (char)windowShouldClose:(id)arg0;
- (char)isExcludedFromWindowsMenu;
- (void)performClose:(id)arg0;
- (char)validateUserInterfaceItem:(id)arg0;
- (void)cancelOperation:(id)arg0;
+ (id)window;
@end
@interface Image : NSObject
{
	BOOL _hasShadow;
	NSImage * _image;
	NSNumber * _scale;
	double _PPI;
	NSImage * _pixelatedImage;
}
@property (nonatomic, strong) NSImage * image;
@property (nonatomic, strong) NSImage * pixelatedImage;
@property (nonatomic, assign) BOOL hasShadow;
@property (nonatomic, strong) NSNumber * scale;
@property (nonatomic, assign) double PPI;
- (id)initWithImage:(id)arg0;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (NSImage *)pixelatedImage;
- (void)setScale:(NSNumber *)arg0;
- (id)cropToRect:(id)arg0;
- (void)setImage:(NSImage *)arg0;
// - (void).cxx_destruct;
- (NSImage *)image;
- (char)hasShadow;
- (void)setHasShadow:(BOOL)arg0;
- (NSNumber *)scale;
- (double)PPI;
- (void)setPPI:(id)arg0;
- (void)setPixelatedImage:(NSImage *)arg0;
@end
@interface OnboardingWindow : NSWindow
{
	{CGPoint="x"d"y"d} _initialLocation;
}
@property (nonatomic, assign) {CGPoint="x"d"y"d} initialLocation;
- (id)initWithContentRect:(id)arg0 styleMask:(id)arg1 backing:(id)arg2 defer:(id)arg3;
- (void)setContentView:(id)arg0;
- (char)canBecomeKeyWindow;
- (void)mouseDown:(id)arg0;
- (void)mouseDragged:(id)arg0;
- (char)windowShouldClose:(id)arg0;
- (void)performClose:(id)arg0;
- ({CGPoint="x"d"y"d})initialLocation;
- (void)setInitialLocation:({CGPoint="x"d"y"d})arg0;
@end
@interface RenameViewController : NSViewController
{
	Document * _document;
	NSTextField * _filenameTextField;
	NSPopUpButton * _fileFormatPopUpButton;
}
@property (nonatomic, strong) Document * document;
@property (nonatomic, strong) NSTextField * filenameTextField;
@property (nonatomic, strong) NSPopUpButton * fileFormatPopUpButton;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)changeFileFormat:(id)arg0;
- (void)changeFilename:(id)arg0;
- (void)cancelOperation:(id)arg0;
// - (void).cxx_destruct;
- (Document *)document;
- (void)setDocument:(Document *)arg0;
- (NSTextField *)filenameTextField;
- (void)setFilenameTextField:(NSTextField *)arg0;
- (NSPopUpButton *)fileFormatPopUpButton;
- (void)setFileFormatPopUpButton:(NSPopUpButton *)arg0;
@end
@interface CanvasView : NSView
{
	BOOL _isFirstResponder;
	Selection * _selection;
	Crop * _crop;
	Graphic * _text;
	NSArray * _graphics;
	Graphic * _creatingGraphic;
	NSIndexSet * _selectionIndexes;
	NSCursor * _cursor;
}
@property (nonatomic, assign) BOOL isFirstResponder;
@property (nonatomic, strong) Selection * selection;
@property (nonatomic, strong) Crop * crop;
@property (nonatomic, strong) Graphic * text;
@property (nonatomic, strong) NSArray * graphics;
@property (nonatomic, strong) Graphic * creatingGraphic;
@property (nonatomic, strong) NSIndexSet * selectionIndexes;
@property (nonatomic, strong) NSCursor * cursor;
- (void)dealloc;
- (void)drawRect:(id)arg0;
- (void)setCursor:(NSCursor *)arg0;
- (void)resetCursorRects;
- (char)acceptsFirstResponder;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)setIsFirstResponder:(BOOL)arg0;
// - (void).cxx_destruct;
- (Selection *)selection;
- (void)setSelection:(Selection *)arg0;
- (Crop *)crop;
- (void)setCrop:(Crop *)arg0;
- (Graphic *)text;
- (void)setText:(Graphic *)arg0;
- (NSArray *)graphics;
- (void)setGraphics:(NSArray *)arg0;
- (Graphic *)creatingGraphic;
- (void)setCreatingGraphic:(Graphic *)arg0;
- (NSIndexSet *)selectionIndexes;
- (void)setSelectionIndexes:(NSIndexSet *)arg0;
- (NSCursor *)cursor;
- (char)isFirstResponder;
+ (void)drawImage:(id)arg0;
+ (void)drawGraphics:(id)arg0 size:(id)arg1;
@end
@interface Pixelate : Graphic <Graphic>
{
	{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
}
- (long long)zIndex;
- (id)cursorForHandle:(id)arg0;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (void)drawSelectionInView:(id)arg0;
- (id)drawingPath;
- (id)hitTestPath;
- (void)setHandles:(id)arg0;
- (char)didGetCreated;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
@end
@interface Pen : Graphic <Graphic>
{
	NSArray * _points;
	double _strokeWidth;
	CGPath= _hitTestPath;
	CGPath= _drawingPath;
	{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
}
@property (nonatomic, strong) NSArray * points;
@property (nonatomic, assign) double strokeWidth;
@property (nonatomic, assign) CGPath= hitTestPath;
@property (nonatomic, assign) CGPath= drawingPath;
@property (nonatomic, assign) {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} rect;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (long long)zIndex;
- (id)cursorForHandle:(id)arg0;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)scaleTo:(id)arg0;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (char)didGetCreated;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (void)drawSelectionInView:(id)arg0;
- (CGPath=)hitTestPath;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
- (id)initAtPoint:(id)arg0 inWindow:(id)arg1;
- (void)dealloc;
- (void)setPoints:(NSArray *)arg0;
- (double)strokeWidth;
- (id)pathFromPoints:(id)arg0 smooth:(id)arg1;
- (id)perpendicularDistanceSimplificationOnPoints:(id)arg0;
// - (void).cxx_destruct;
- (NSArray *)points;
- (void)setStrokeWidth:(double)arg0;
- (void)setHitTestPath:(CGPath=)arg0;
- (CGPath=)drawingPath;
- (void)setDrawingPath:(CGPath=)arg0;
- ({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})rect;
- (void)setRect:({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})arg0;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
@end
@interface MPCJSONDataSerializer : NSObject
- (id)serializeObject:(id)arg0 error:(id)arg1;
- (id)serializeNull:(id)arg0 error:(id)arg1;
- (id)serializeNumber:(id)arg0 error:(id)arg1;
- (id)serializeString:(id)arg0 error:(id)arg1;
- (id)serializeDate:(id)arg0 error:(id)arg1;
- (id)serializeArray:(id)arg0 error:(id)arg1;
- (id)serializeDictionary:(id)arg0 error:(id)arg1;
+ (void)initialize;
+ (id)serializer;
@end
@interface RecordScreenControlView : NSView
{
	uint64_t _state;
	CALayer * _startStopLayer;
	NSTextField * _recordStopText;
	NSTextField * _keyboardShortcutText;
}
@property (nonatomic, strong) CALayer * startStopLayer;
@property (nonatomic, strong) NSTextField * recordStopText;
@property (nonatomic, strong) NSTextField * keyboardShortcutText;
@property (nonatomic, assign) uint64_t state;
- (id)initWithFrame:(id)arg0;
- (void)resetCursorRects;
- (void)setState:(uint64_t)arg0;
- (void)setFrame:(id)arg0;
- (char)acceptsFirstMouse:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)dealloc;
// - (void).cxx_destruct;
- (unsigned long long)state;
- (CALayer *)startStopLayer;
- (void)setStartStopLayer:(CALayer *)arg0;
- (NSTextField *)recordStopText;
- (void)setRecordStopText:(NSTextField *)arg0;
- (NSTextField *)keyboardShortcutText;
- (void)setKeyboardShortcutText:(NSTextField *)arg0;
@end
@interface ZendeskTicket : NSObject
{
	uint64_t _ID;
	NSString * _externalID;
	NSDate * _createdAt;
	NSDate * _updatedAt;
	NSString * _type;
	NSString * _subject;
	NSString * _body;
	NSString * _priority;
	NSString * _status;
	NSString * _recipient;
	RACSignal * _requesterSignal;
	NSArray * _tags;
	NSString * _requesterID;
}
@property (nonatomic, strong) NSString * requesterID;
@property (nonatomic, strong) RACSignal * requesterSignal;
@property (nonatomic, assign) uint64_t ID;
@property (nonatomic, strong) NSString * externalID;
@property (nonatomic, strong) NSDate * createdAt;
@property (nonatomic, strong) NSDate * updatedAt;
@property (nonatomic, strong) NSString * type;
@property (nonatomic, strong) NSString * subject;
@property (nonatomic, strong) NSString * body;
@property (nonatomic, strong) NSString * priority;
@property (nonatomic, strong) NSString * status;
@property (nonatomic, strong) NSString * recipient;
@property (nonatomic, strong) NSArray * tags;
- (id)initWithJSON:(id)arg0;
- (id)description;
// - (void).cxx_destruct;
- (unsigned long long)ID;
- (NSString *)externalID;
- (NSDate *)createdAt;
- (NSDate *)updatedAt;
- (NSString *)type;
- (NSString *)subject;
- (NSString *)body;
- (NSString *)priority;
- (NSString *)status;
- (NSString *)recipient;
- (RACSignal *)requesterSignal;
- (void)setRequesterSignal:(RACSignal *)arg0;
- (NSArray *)tags;
- (NSString *)requesterID;
- (void)setRequesterID:(NSString *)arg0;
@end
@interface VideoControlsView : NSView
{
	AVPlayer * _videoPlayer;
	PlayPauseButton * _playPauseButton;
	VideoControlTrackView * _controlTrackView;
}
@property (nonatomic, strong) PlayPauseButton * playPauseButton;
@property (nonatomic, strong) VideoControlTrackView * controlTrackView;
@property (nonatomic, strong) AVPlayer * videoPlayer;
- (id)initWithFrame:(id)arg0 player:(id)arg1;
// - (void).cxx_destruct;
- (AVPlayer *)videoPlayer;
- (PlayPauseButton *)playPauseButton;
- (void)setPlayPauseButton:(PlayPauseButton *)arg0;
- (VideoControlTrackView *)controlTrackView;
- (void)setControlTrackView:(VideoControlTrackView *)arg0;
@end
@interface Overlay : Graphic <Graphic>
{
	NSBezierPath * _drawingPath;
	CGPath= _hitTestPath;
}
@property (nonatomic, assign) CGPath= hitTestPath;
@property (nonatomic, strong) NSBezierPath * drawingPath;
@property (nonatomic, strong) id strokeWidth;
- (id)cursorForHandle:(id)arg0;
- (long long)zIndex;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (char)didGetCreated;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (void)drawSelectionInView:(id)arg0;
- (CGPath=)hitTestPath;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
- (void)dealloc;
- (double)strokeWidth;
- (void)setHandles:(id)arg0;
- (void)setSize:(id)arg0;
// - (void).cxx_destruct;
- (NSBezierPath *)drawingPath;
- (void)setHitTestPath:(CGPath=)arg0;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (void)drawOverlayForGraphics:(id)arg0 withSize:(id)arg1;
@end
@interface DrifttUpload : Upload <Upload>
+ (id)uploadDocument:(id)arg0 atURL:(id)arg1 sessionManager:(id)arg2;
+ (id)dataSignalForFileURL:(id)arg0;
+ (id)requestUploadPermissionForFileName:(id)arg0 fileData:(id)arg1 sessionManager:(id)arg2;
+ (id)uploadData:(id)arg0 withPermissionResponse:(id)arg1 sessionManager:(id)arg2;
+ (id)completeUploadForFileID:(id)arg0 sessionManager:(id)arg1;
@end
@interface ColorBoxControl : NSControl
{
	BOOL _opensColorPanelView;
	NSColor * _color;
}
@property (nonatomic, strong) NSColor * color;
@property (nonatomic, assign) BOOL opensColorPanelView;
- (void)awakeFromNib;
- (void)drawRect:(id)arg0;
- (void)mouseUp:(id)arg0;
- (void)changeColor:(id)arg0;
// - (void).cxx_destruct;
- (NSColor *)color;
- (void)setColor:(NSColor *)arg0;
- (char)opensColorPanelView;
- (void)setOpensColorPanelView:(BOOL)arg0;
@end
@interface ZendeskTicketDescriptionWhiteBackgroundView : NSView
- (void)drawRect:(id)arg0;
@end
@interface LBHView : NSView
{
	BOOL _ignoreNSViewBackingLayerSynchronization;
}
@property (nonatomic, assign) BOOL ignoreNSViewBackingLayerSynchronization;
- (id)initWithFrame:(id)arg0;
- (id)makeBackingLayer;
- (void)setIgnoreNSViewBackingLayerSynchronization:(BOOL)arg0;
- (char)ignoreNSViewBackingLayerSynchronization;
@end
@interface PlayPauseButton : NSView
{
	BOOL _playing;
	AVPlayer * _videoPlayer;
}
@property (nonatomic, assign) BOOL playing;
@property (nonatomic, strong) AVPlayer * videoPlayer;
- (id)initWithFrame:(id)arg0 player:(id)arg1;
- (void)clicked:(id)arg0;
- (void)drawRect:(id)arg0;
- (void)setPlaying:(BOOL)arg0;
// - (void).cxx_destruct;
- (AVPlayer *)videoPlayer;
- (void)setVideoPlayer:(AVPlayer *)arg0;
- (char)playing;
@end
@interface Upload : NSObject
{
	@? _completionBlock;
	long long _linkType;
	long long _serviceType;
	Client * _client;
	double _scaleFactor;
}
@property (nonatomic, assign) @? completionBlock;
@property (nonatomic, assign) long long linkType;
@property (nonatomic, assign) long long serviceType;
@property (nonatomic, strong) Client * client;
@property (nonatomic, assign) double scaleFactor;
- (void)getShortGluiLink:(id)arg0 completion:(id)arg1;
- (void)uploadCompletedWithLink:(id)arg0 filename:(id)arg1;
- (void)uploadFailedWithError:(id)arg0;
// - (void).cxx_destruct;
- (@?)completionBlock;
- (void)setCompletionBlock:(@?)arg0;
- (long long)linkType;
- (void)setLinkType:(long long)arg0;
- (long long)serviceType;
- (void)setServiceType:(long long)arg0;
- (Client *)client;
- (void)setClient:(Client *)arg0;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg0;
+ (id)uploadFile:(id)arg0 forDocument:(id)arg1 withCompletion:(id)arg2;
@end
@interface ZendeskTicketDescriptionViewController : NSViewController
{
	NSView * _backgroundView;
	NSTextField * _commentTextField;
	NSView * _titleBackgroundView;
	ZendeskTicket * _ticket;
	<ZendeskTicketDescriptionViewControllerDelegate> * _delegate;
	NSTextField * _ticketNumberTextField;
	NSTextField * _subjectTextField;
	NSTextField * _requestorTextField;
	NSTextField * _imageNameTextField;
	NSButton * _cancelButton;
	NSButton * _sendButton;
	NSButton * _publicButton;
	NSButton * _internalButton;
	ZendeskUpload * _upload;
}
@property (nonatomic, strong) NSTextField * ticketNumberTextField;
@property (nonatomic, strong) NSTextField * subjectTextField;
@property (nonatomic, strong) NSTextField * requestorTextField;
@property (nonatomic, strong) NSTextField * imageNameTextField;
@property (nonatomic, strong) NSButton * cancelButton;
@property (nonatomic, strong) NSButton * sendButton;
@property (nonatomic, strong) NSButton * publicButton;
@property (nonatomic, strong) NSButton * internalButton;
@property (nonatomic, strong) ZendeskUpload * upload;
@property (nonatomic, strong) NSView * backgroundView;
@property (nonatomic, strong) NSTextField * commentTextField;
@property (nonatomic, strong) NSView * titleBackgroundView;
@property (nonatomic, strong) ZendeskTicket * ticket;
@property (nonatomic, strong) <ZendeskTicketDescriptionViewControllerDelegate> * delegate;
- (id)initWithUpload:(id)arg0;
- (void)viewDidLoad;
- (id)preferredContentSize;
- (void)setTicket:(ZendeskTicket *)arg0;
- (void)searchButtonClicked:(id)arg0;
- (void)cancelButtonClicked:(id)arg0;
- (void)sendButtonClicked:(id)arg0;
- (void)commentPrivacyChanged:(id)arg0;
- (char)control:(id)arg0 textView:(id)arg1 doCommandBySelector:(id)arg2;
- (void)controlTextDidChange:(id)arg0;
// - (void).cxx_destruct;
- (NSView *)backgroundView;
- (void)setBackgroundView:(NSView *)arg0;
- (NSTextField *)commentTextField;
- (void)setCommentTextField:(NSTextField *)arg0;
- (NSView *)titleBackgroundView;
- (void)setTitleBackgroundView:(NSView *)arg0;
- (ZendeskTicket *)ticket;
- (<ZendeskTicketDescriptionViewControllerDelegate> *)delegate;
- (void)setDelegate:(<ZendeskTicketDescriptionViewControllerDelegate> *)arg0;
- (NSTextField *)ticketNumberTextField;
- (void)setTicketNumberTextField:(NSTextField *)arg0;
- (NSTextField *)subjectTextField;
- (void)setSubjectTextField:(NSTextField *)arg0;
- (NSTextField *)requestorTextField;
- (void)setRequestorTextField:(NSTextField *)arg0;
- (NSTextField *)imageNameTextField;
- (void)setImageNameTextField:(NSTextField *)arg0;
- (NSButton *)cancelButton;
- (void)setCancelButton:(NSButton *)arg0;
- (NSButton *)sendButton;
- (void)setSendButton:(NSButton *)arg0;
- (NSButton *)publicButton;
- (void)setPublicButton:(NSButton *)arg0;
- (NSButton *)internalButton;
- (void)setInternalButton:(NSButton *)arg0;
- (ZendeskUpload *)upload;
- (void)setUpload:(ZendeskUpload *)arg0;
@end
@interface AppDelegate : NSObject
{
	NSMenuItem * _imageFromClipboardMenuItem;
	NSMenuItem * _crosshairSnapshotMenuItem;
	NSMenuItem * _crosshairVideoMenuItem;
	NSMenuItem * _windowMenuItem;
	NSMenuItem * _deleteMenuItem;
	NSMenuItem * _shareMenuItem;
	NSMenu * _uploadsMenu;
	StatusBarController * _statusBarController;
	UploadsMenuController * _uploadsMenuController;
	NSWindowController * _preferencesWindowController;
	NSOpenPanel * _openPanel;
	@ _dragModeEventMonitor;
	uint64_t _applicationType;
	NSWindow * _renamedAppWindow;
	OnboardingWindowController * _onboardingWindowController;
	RecordScreenController * _recordScreenController;
}
@property (nonatomic, strong) StatusBarController * statusBarController;
@property (nonatomic, strong) UploadsMenuController * uploadsMenuController;
@property (nonatomic, strong) NSWindowController * preferencesWindowController;
@property (nonatomic, strong) NSOpenPanel * openPanel;
@property (nonatomic, assign) @ dragModeEventMonitor;
@property (nonatomic, assign) uint64_t applicationType;
@property (nonatomic, strong) NSWindow * renamedAppWindow;
@property (nonatomic, strong) OnboardingWindowController * onboardingWindowController;
@property (nonatomic, strong) RecordScreenController * recordScreenController;
@property (nonatomic, strong) NSMenuItem * imageFromClipboardMenuItem;
@property (nonatomic, strong) NSMenuItem * crosshairSnapshotMenuItem;
@property (nonatomic, strong) NSMenuItem * crosshairVideoMenuItem;
@property (nonatomic, strong) NSMenuItem * windowMenuItem;
@property (nonatomic, strong) NSMenuItem * deleteMenuItem;
@property (nonatomic, strong) NSMenuItem * shareMenuItem;
@property (nonatomic, strong) NSMenu * uploadsMenu;
- (void)applicationWillFinishLaunching:(id)arg0;
- (void)handleURLEvent:(id)arg0 withReplyEvent:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg0;
- (void)applicationWillTerminate:(id)arg0;
- (char)applicationShouldOpenUntitledFile:(id)arg0;
- (void)application:(id)arg0 openFiles:(id)arg1;
- (void)maybeShowOnboarding;
- (void)windowWillClose:(id)arg0;
- (void)userNotificationCenter:(id)arg0 didActivateNotification:(id)arg1;
- (char)userNotificationCenter:(id)arg0 shouldPresentNotification:(id)arg1;
- (void)openDocument:(id)arg0;
- (void)openPreferences:(id)arg0;
- (void)sendFeedback:(id)arg0;
- (void)openWebsite:(id)arg0;
- (void)bringToFront:(id)arg0;
- (void)crosshairSnapshot:(id)arg0;
- (void)windowSnapshot:(id)arg0;
- (void)imageFromClipboard:(id)arg0;
- (void)recordScreenAction:(id)arg0;
- (void)recordScreen;
- (char)willCloseWindowsIfNeededThenInvoke:(id)arg0;
- (char)validateMenuItem:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)openFiles:(id)arg0 type:(id)arg1;
- (void)createDocumentAndOpenFile:(id)arg0 type:(id)arg1;
- (void)setupPreferencesWindowController;
- (void)registerDefaults;
- (void)setupKeyboardShortcuts;
- (void)snapshotType:(id)arg0;
- (void)setupAppMode;
- (void)showAppInDock;
- (void)setupMainMenu;
- (void)checkForTrialExpiration;
- (void)documentController:(id)arg0 didCloseAll:(id)arg1 contextInfo:(id)arg2;
- (void)showRenameWindowIfNeeded;
// - (void).cxx_destruct;
- (NSMenuItem *)imageFromClipboardMenuItem;
- (void)setImageFromClipboardMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)crosshairSnapshotMenuItem;
- (void)setCrosshairSnapshotMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)crosshairVideoMenuItem;
- (void)setCrosshairVideoMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)windowMenuItem;
- (void)setWindowMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)deleteMenuItem;
- (void)setDeleteMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)shareMenuItem;
- (void)setShareMenuItem:(NSMenuItem *)arg0;
- (NSMenu *)uploadsMenu;
- (void)setUploadsMenu:(NSMenu *)arg0;
- (StatusBarController *)statusBarController;
- (void)setStatusBarController:(StatusBarController *)arg0;
- (UploadsMenuController *)uploadsMenuController;
- (void)setUploadsMenuController:(UploadsMenuController *)arg0;
- (NSWindowController *)preferencesWindowController;
- (void)setPreferencesWindowController:(NSWindowController *)arg0;
- (NSOpenPanel *)openPanel;
- (void)setOpenPanel:(NSOpenPanel *)arg0;
- (@)dragModeEventMonitor;
- (void)setDragModeEventMonitor:(@)arg0;
- (unsigned long long)applicationType;
- (void)setApplicationType:(uint64_t)arg0;
- (NSWindow *)renamedAppWindow;
- (void)setRenamedAppWindow:(NSWindow *)arg0;
- (OnboardingWindowController *)onboardingWindowController;
- (void)setOnboardingWindowController:(OnboardingWindowController *)arg0;
- (RecordScreenController *)recordScreenController;
- (void)setRecordScreenController:(RecordScreenController *)arg0;
@end
@interface ZendeskTicketBackgroundView : NSView
- (void)drawRect:(id)arg0;
- (char)acceptsFirstResponder;
@end
@interface ToolSizeSliderCell : NSSliderCell
{
	NSImage * _backgroundImage;
	NSImage * _knobImage;
}
@property (nonatomic, strong) NSImage * backgroundImage;
@property (nonatomic, strong) NSImage * knobImage;
- (void)drawKnob:(id)arg0;
- (void)drawBarInside:(id)arg0 flipped:(id)arg1;
- (void)drawTickMarks;
// - (void).cxx_destruct;
- (NSImage *)backgroundImage;
- (void)setBackgroundImage:(NSImage *)arg0;
- (NSImage *)knobImage;
- (void)setKnobImage:(NSImage *)arg0;
@end
@interface ZendeskTicketListViewController : NSViewController
{
	ZendeskTicketCancelButton * _cancelButton;
	ZendeskTicketDescriptionViewController * _descriptionViewController;
	NSTableView * _tableView;
	NSTextField * _searchTextField;
	NSTextField * _latestActivityLabel;
	NSArray * _ticketsArray;
	@? _cancelBlock;
	ZendeskUpload * _upload;
	NSString * _initialTicketID;
	RACDisposable * _initialTicketDisposable;
}
@property (nonatomic, strong) ZendeskTicketCancelButton * cancelButton;
@property (nonatomic, strong) ZendeskTicketDescriptionViewController * descriptionViewController;
@property (nonatomic, strong) NSTableView * tableView;
@property (nonatomic, strong) NSTextField * searchTextField;
@property (nonatomic, strong) NSTextField * latestActivityLabel;
@property (nonatomic, strong) NSArray * ticketsArray;
@property (nonatomic, assign) @? cancelBlock;
@property (nonatomic, strong) ZendeskUpload * upload;
@property (nonatomic, strong) NSString * initialTicketID;
@property (nonatomic, strong) RACDisposable * initialTicketDisposable;
- (id)initWithUpload:(id)arg0 cancel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)preferredContentSize;
- (void)cancelButtonPressed:(id)arg0;
- (long long)numberOfRowsInTableView:(id)arg0;
- (id)tableView:(id)arg0 viewForTableColumn:(id)arg1 row:(id)arg2;
- (id)tableView:(id)arg0 rowViewForRow:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg0;
- (void)tableViewClicked:(id)arg0;
- (void)animateDescriptionViewControllerToX:(id)arg0;
- (void)controlTextDidChange:(id)arg0;
- (char)control:(id)arg0 textView:(id)arg1 doCommandBySelector:(id)arg2;
- (void)changeSelectedTicketIsNext:(id)arg0;
- (void)closeTicketDescription;
- (void)ticketDidUpload;
// - (void).cxx_destruct;
- (ZendeskTicketCancelButton *)cancelButton;
- (void)setCancelButton:(ZendeskTicketCancelButton *)arg0;
- (ZendeskTicketDescriptionViewController *)descriptionViewController;
- (void)setDescriptionViewController:(ZendeskTicketDescriptionViewController *)arg0;
- (NSTableView *)tableView;
- (void)setTableView:(NSTableView *)arg0;
- (NSTextField *)searchTextField;
- (void)setSearchTextField:(NSTextField *)arg0;
- (NSTextField *)latestActivityLabel;
- (void)setLatestActivityLabel:(NSTextField *)arg0;
- (NSArray *)ticketsArray;
- (void)setTicketsArray:(NSArray *)arg0;
- (@?)cancelBlock;
- (void)setCancelBlock:(@?)arg0;
- (ZendeskUpload *)upload;
- (void)setUpload:(ZendeskUpload *)arg0;
- (NSString *)initialTicketID;
- (void)setInitialTicketID:(NSString *)arg0;
- (RACDisposable *)initialTicketDisposable;
- (void)setInitialTicketDisposable:(RACDisposable *)arg0;
@end
@interface SnapshotAnimationView : LBHView <LBHView>
{
	NSImage * _image;
}
@property (nonatomic, strong) NSImage * image;
- (void)drawRect:(id)arg0;
// - (void).cxx_destruct;
- (NSImage *)image;
- (void)setImage:(NSImage *)arg0;
@end
@interface StatusBarController : NSObject
{
	NSStatusItem * _statusItem;
	NSArray * _recentUploadMenuItems;
}
@property (nonatomic, strong) NSArray * recentUploadMenuItems;
@property (nonatomic, strong) NSStatusItem * statusItem;
- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (id)makeStatusItem;
- (void)updateRecenUploadMenuItems;
- (void)openLink:(id)arg0;
// - (void).cxx_destruct;
- (NSStatusItem *)statusItem;
- (void)setStatusItem:(NSStatusItem *)arg0;
- (NSArray *)recentUploadMenuItems;
- (void)setRecentUploadMenuItems:(NSArray *)arg0;
@end
@interface Document : NSDocument
{
	NSMutableArray * _graphics;
	BOOL _isExporting;
	uint64_t _documentType;
	Image * _image;
	Video * _video;
	Export * _export;
	long long _inputType;
	NSData * _cachedExportData;
	NSMutableSet * _undoGroupInsertedGraphics;
	NSMapTable * _undoGroupOldPropertiesPerGraphic;
}
@property (nonatomic, strong) NSMutableSet * undoGroupInsertedGraphics;
@property (nonatomic, strong) NSMapTable * undoGroupOldPropertiesPerGraphic;
@property (nonatomic, strong) Export * export;
@property (nonatomic, assign) long long inputType;
@property (nonatomic, assign) uint64_t documentType;
@property (nonatomic, strong) NSMutableArray * graphics;
@property (nonatomic, strong) Image * image;
@property (nonatomic, strong) Video * video;
@property (nonatomic, strong) NSData * cachedExportData;
@property (nonatomic, assign) BOOL isExporting;
- (id)init;
- (void)dealloc;
- (void)makeWindowControllers;
- (void)setInputType:(long long)arg0;
- (id)dataSignalOfType:(id)arg0;
- (id)dataOfType:(id)arg0 error:(id)arg1;
- (id)annotationImageDataForTypeName:(id)arg0 withImage:(id)arg1;
- (char)readFromData:(id)arg0 ofType:(id)arg1 error:(id)arg2;
- (void)canCloseDocumentWithDelegate:(id)arg0 shouldCloseSelector:(id)arg1 contextInfo:(id)arg2;
- (id)displayName;
- (void)readVideoFromURL:(id)arg0 inputType:(id)arg1;
- (void)readImageFromURL:(id)arg0 inputType:(id)arg1;
- (void)commonSetupForURL:(id)arg0 inputType:(id)arg1;
- (unsigned long long)imageFileTypeFromUTIString:(id)arg0;
- (void)setImage:(Image *)arg0;
- (id)mutableGraphics;
- (void)insertGraphics:(id)arg0 atIndexes:(id)arg1;
- (void)removeGraphicsAtIndexes:(id)arg0;
- (void)observeUndoManagerCheckpoint:(id)arg0;
- (NSMutableSet *)undoGroupInsertedGraphics;
- (void)setGraphicProperties:(id)arg0;
- (void)startObservingGraphics:(id)arg0;
- (void)stopObservingGraphics:(id)arg0;
- (void)startObservingImage:(id)arg0;
- (void)stopObservingImage:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)autosave;
- (void)document:(id)arg0 didAutosave:(id)arg1 contextInfo:(id)arg2;
// - (void).cxx_destruct;
- (unsigned long long)documentType;
- (NSMutableArray *)graphics;
- (Image *)image;
- (Video *)video;
- (Export *)export;
- (void)setExport:(Export *)arg0;
- (long long)inputType;
- (NSData *)cachedExportData;
- (void)setCachedExportData:(NSData *)arg0;
- (char)isExporting;
- (void)setIsExporting:(BOOL)arg0;
- (void)setUndoGroupInsertedGraphics:(NSMutableSet *)arg0;
- (NSMapTable *)undoGroupOldPropertiesPerGraphic;
- (void)setUndoGroupOldPropertiesPerGraphic:(NSMapTable *)arg0;
+ (char)autosavesInPlace;
+ (char)autosavesDrafts;
+ (id)fileURLForNewVideo;
+ (id)fileURLForNewGIF;
+ (id)fileURLForNewScreenshot;
+ (id)fileURLForNewCaptureWithExtension:(id)arg0;
@end
@interface Graphic : NSObject
{
	BOOL _hasShadow;
	BOOL _didGetCreated;
	NSWindow * _window;
	NSColor * _color;
	double _size;
	{?="contents"[8{CGPoint="x"d"y"d}]} _handles;
}
@property (nonatomic, assign) {?="contents"[8{CGPoint="x"d"y"d}]} handles;
@property (nonatomic, strong) NSWindow * window;
@property (nonatomic, strong) id drawingBounds;
@property (nonatomic, strong) id zIndex;
@property (nonatomic, strong) id keyPathsForSettableValues;
@property (nonatomic, strong) id keysForValuesToObserveForUndo;
@property (nonatomic, strong) NSColor * color;
@property (nonatomic, assign) double size;
@property (nonatomic, assign) BOOL hasShadow;
@property (nonatomic, assign) BOOL didGetCreated;
- (long long)indexInGraphics:(id)arg0;
- (long long)proposedIndexInGraphics:(id)arg0;
- (long long)handleUnderPoint:(id)arg0;
- (char)isHandleAtPoint:(id)arg0 underPoint:(id)arg1;
- (void)drawHandlesInView:(id)arg0;
- (void)drawHandle:(id)arg0 inView:(id)arg1 atPoint:(id)arg2;
- (void)dealloc;
- (id)initAtPoint:(id)arg0 inWindow:(id)arg1;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)cursorForHandle:(id)arg0;
- (long long)zIndex;
- (void)scaleTo:(id)arg0;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (void)drawSelectionInView:(id)arg0;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
- (id)windowController;
- (id)document;
- (id)canvasView;
// - (void).cxx_destruct;
- ({?="contents"[8{CGPoint="x"d"y"d}]})handles;
- (void)setHandles:({?="contents"[8{CGPoint="x"d"y"d}]})arg0;
- (NSWindow *)window;
- (void)setWindow:(NSWindow *)arg0;
- (NSColor *)color;
- (void)setColor:(NSColor *)arg0;
- (double)size;
- (void)setSize:(double)arg0;
- (char)hasShadow;
- (void)setHasShadow:(BOOL)arg0;
- (char)didGetCreated;
- (void)setDidGetCreated:(BOOL)arg0;
+ (id)propertiesWithGraphics:(id)arg0;
+ (id)graphicsWithProperties:(id)arg0;
+ (id)graphicUnderPoint:(id)arg0 handle:(id)arg1 fromGraphics:(id)arg2;
+ (void)registerDefaults;
+ (double)strokeWidthForSize:(id)arg0;
+ (id)defaultColor;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
@end
@interface DragView : NSView
{
	NSTrackingArea * _trackingArea;
	Document * _document;
	NSImage * _image;
	NSData * _data;
	NSURL * _fileURL;
}
@property (nonatomic, strong) Document * document;
@property (nonatomic, strong) NSImage * image;
@property (nonatomic, strong) NSData * data;
@property (nonatomic, strong) NSURL * fileURL;
- (id)initWithFrame:(id)arg0;
- (void)dealloc;
- (void)updateTrackingAreas;
- (void)setFrame:(id)arg0;
- (void)drawRect:(id)arg0;
- (void)setImage:(NSImage *)arg0;
- (char)acceptsFirstResponder;
- (void)mouseDown:(id)arg0;
- (unsigned long long)draggingSession:(id)arg0 sourceOperationMaskForDraggingContext:(id)arg1;
- (void)draggingSession:(id)arg0 endedAtPoint:(id)arg1 operation:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg0;
- (id)pasteboardPropertyListForType:(id)arg0;
// - (void).cxx_destruct;
- (Document *)document;
- (void)setDocument:(Document *)arg0;
- (NSImage *)image;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSURL *)fileURL;
- (void)setFileURL:(NSURL *)arg0;
@end
@interface CanvasViewController : NSViewController
{
	long long _resizeHandle;
	long long _panType;
	{CGPoint="x"d"y"d} _mouseLocation;
	BOOL _isMouseDown;
	BOOL _overrideCreationBlock;
	Document * _document;
	CanvasView * _canvasView;
	AVPlayer * _videoPlayer;
	ScrollView * _scrollView;
	NSView * _containerDocumentView;
	NSImageView * _imageView;
	NSView * _videoView;
	Text * _text;
	Graphic * _creatingGraphic;
	Crop * _crop;
	Selection * _selection;
}
@property (nonatomic, strong) ScrollView * scrollView;
@property (nonatomic, strong) NSView * containerDocumentView;
@property (nonatomic, strong) NSImageView * imageView;
@property (nonatomic, strong) NSView * videoView;
@property (nonatomic, strong) Text * text;
@property (nonatomic, strong) Graphic * creatingGraphic;
@property (nonatomic, strong) Crop * crop;
@property (nonatomic, strong) Selection * selection;
@property (nonatomic, strong) AVPlayer * videoPlayer;
@property (nonatomic, strong) Document * document;
@property (nonatomic, strong) CanvasView * canvasView;
- (void)loadView;
- (void)dealloc;
- (void)setDocument:(Document *)arg0;
- (void)mouseDown:(id)arg0;
- (void)mouseDragged:(id)arg0;
- (void)mouseUp:(id)arg0;
- (char)blockGraphicsCreationOnMouseDown:(id)arg0;
- (void)mouseMoved:(id)arg0;
- (void)checkAndSetMouseCursor;
- (void)keyDown:(id)arg0;
- (char)validateMenuItem:(id)arg0;
- (void)delete:(id)arg0;
- (void)deleteBackward:(id)arg0;
- (void)deleteForward:(id)arg0;
- (void)cancelOperation:(id)arg0;
- (void)selectAll:(id)arg0;
- (void)moveLeft:(id)arg0;
- (void)moveRight:(id)arg0;
- (void)moveUp:(id)arg0;
- (void)moveDown:(id)arg0;
- (void)undo:(id)arg0;
- (void)moveGraphic:(id)arg0 fromIndex:(id)arg1 toIndex:(id)arg2;
- (id)selectedGraphics;
- (Class)graphicClassForTool:(id)arg0;
- (void)createCenteredEmojiTextWithString:(id)arg0;
- (id)videoPlayerForDocument:(id)arg0;
- (id)videoViewWithPlayer:(id)arg0 video:(id)arg1;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)startObservingGraphics:(id)arg0;
- (void)stopObservingGraphics:(id)arg0;
- (void)currentToolChangedNotification:(id)arg0;
- (void)selectionIndexesChangedNotification:(id)arg0;
- (void)startEditingText:(id)arg0;
- (void)stopEditingText;
- (void)doCrop;
- (void)stopCrop;
- (id)windowController;
- (void)setCreatingGraphic:(Graphic *)arg0;
- (void)setSelection:(Selection *)arg0;
- (void)setText:(Text *)arg0;
- (void)setCrop:(Crop *)arg0;
- (char)acceptsFirstResponder;
- (id)snapshotRect;
- (id)snapshot;
// - (void).cxx_destruct;
- (Document *)document;
- (CanvasView *)canvasView;
- (void)setCanvasView:(CanvasView *)arg0;
- (AVPlayer *)videoPlayer;
- (void)setVideoPlayer:(AVPlayer *)arg0;
- (ScrollView *)scrollView;
- (void)setScrollView:(ScrollView *)arg0;
- (NSView *)containerDocumentView;
- (void)setContainerDocumentView:(NSView *)arg0;
- (NSImageView *)imageView;
- (void)setImageView:(NSImageView *)arg0;
- (NSView *)videoView;
- (void)setVideoView:(NSView *)arg0;
- (Text *)text;
- (Graphic *)creatingGraphic;
- (Crop *)crop;
- (Selection *)selection;
@end
@interface ExportAction : NSObject
{
	BOOL _showInToolbar;
	long long _exportActionType;
	NSToolbarItem * _toolbarItem;
	NSString * _title;
	NSImage * _menuItemImage;
	NSMenuItem * _mainMenuMenuItem;
	NSMenuItem * _mainMenuAltarnateMenuItem;
	NSMenuItem * _shareButtonMenuItem;
	NSMenuItem * _shareButtonAltarnateMenuItem;
	NSMenuItem * _contextualMenuItem;
	NSMenuItem * _contextualAltarnateMenuItem;
	NSImage * _toolbarItemImage;
	NSString * _alternateTitle;
	: _action;
	: _alternateAction;
	NSString * _keyEquivalent;
	uint64_t _keyEquivalentModifierMask;
	uint64_t _alternateKeyEquivalentModifierMask;
	NSString * _key;
}
@property (nonatomic, strong) NSMenuItem * mainMenuMenuItem;
@property (nonatomic, strong) NSMenuItem * mainMenuAltarnateMenuItem;
@property (nonatomic, strong) NSMenuItem * shareButtonMenuItem;
@property (nonatomic, strong) NSMenuItem * shareButtonAltarnateMenuItem;
@property (nonatomic, strong) NSMenuItem * contextualMenuItem;
@property (nonatomic, strong) NSMenuItem * contextualAltarnateMenuItem;
@property (nonatomic, strong) NSImage * toolbarItemImage;
@property (nonatomic, strong) NSString * alternateTitle;
@property (nonatomic, assign) : action;
@property (nonatomic, assign) : alternateAction;
@property (nonatomic, strong) NSString * keyEquivalent;
@property (nonatomic, assign) uint64_t keyEquivalentModifierMask;
@property (nonatomic, assign) uint64_t alternateKeyEquivalentModifierMask;
@property (nonatomic, strong) NSString * key;
@property (nonatomic, assign) long long exportActionType;
@property (nonatomic, assign) BOOL showInToolbar;
@property (nonatomic, strong) NSToolbarItem * toolbarItem;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSImage * menuItemImage;
- (id)initForExportAction:(id)arg0;
- (void)dealloc;
- (void)addToMainMenu:(id)arg0;
- (void)addToShareButtonMenu:(id)arg0;
- (void)addToContextualMenu:(id)arg0;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (NSImage *)menuItemImage;
- (NSImage *)toolbarItemImage;
- (NSString *)title;
- (NSString *)alternateTitle;
- (:)action;
- (:)alternateAction;
- (NSString *)keyEquivalent;
- (unsigned long long)keyEquivalentModifierMask;
- (unsigned long long)alternateKeyEquivalentModifierMask;
- (void)setShowInToolbar:(BOOL)arg0;
- (NSString *)key;
// - (void).cxx_destruct;
- (long long)exportActionType;
- (void)setExportActionType:(long long)arg0;
- (char)showInToolbar;
- (NSToolbarItem *)toolbarItem;
- (void)setToolbarItem:(NSToolbarItem *)arg0;
- (void)setTitle:(NSString *)arg0;
- (void)setMenuItemImage:(NSImage *)arg0;
- (NSMenuItem *)mainMenuMenuItem;
- (void)setMainMenuMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)mainMenuAltarnateMenuItem;
- (void)setMainMenuAltarnateMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)shareButtonMenuItem;
- (void)setShareButtonMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)shareButtonAltarnateMenuItem;
- (void)setShareButtonAltarnateMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)contextualMenuItem;
- (void)setContextualMenuItem:(NSMenuItem *)arg0;
- (NSMenuItem *)contextualAltarnateMenuItem;
- (void)setContextualAltarnateMenuItem:(NSMenuItem *)arg0;
- (void)setToolbarItemImage:(NSImage *)arg0;
- (void)setAlternateTitle:(NSString *)arg0;
- (void)setAction:(:)arg0;
- (void)setAlternateAction:(:)arg0;
- (void)setKeyEquivalent:(NSString *)arg0;
- (void)setKeyEquivalentModifierMask:(uint64_t)arg0;
- (void)setAlternateKeyEquivalentModifierMask:(uint64_t)arg0;
- (void)setKey:(NSString *)arg0;
@end
@interface CHelpers : NSObject
@end
@interface TextView : NSTextView
- (id)initWithFrame:(id)arg0;
- (void)drawRect:(id)arg0;
- (char)acceptsFirstResponder;
@end
@interface CenteredTextButtonCell : NSButtonCell
- (id)drawTitle:(id)arg0 withFrame:(id)arg1 inView:(id)arg2;
@end
@interface DropboxClient : Client <Client>
{
	BOOL _isAuthenticating;
	@? _authenticateCompletionBlock;
	NSMutableSet * _uploads;
	DBRestClient * _restClient;
}
@property (nonatomic, assign) @? authenticateCompletionBlock;
@property (nonatomic, strong) NSMutableSet * uploads;
@property (nonatomic, strong) DBRestClient * restClient;
@property (nonatomic, strong) id user;
- (id)init;
- (void)authHelperStateChangedNotification:(id)arg0;
- (void)restClient:(id)arg0 loadedAccountInfo:(id)arg1;
- (void)restClient:(id)arg0 loadAccountInfoFailedWithError:(id)arg1;
- (void)authenticateCompletion:(id)arg0;
- (char)isLinked;
- (void)revoke;
- (void)uploadFile:(id)arg0 forDocument:(id)arg1 onStart:(id)arg2 completion:(id)arg3 onCancel:(id)arg4;
- (void)addUpload:(id)arg0;
- (void)removeUpload:(id)arg0;
- (id)user;
// - (void).cxx_destruct;
- (@?)authenticateCompletionBlock;
- (void)setAuthenticateCompletionBlock:(@?)arg0;
- (NSMutableSet *)uploads;
- (void)setUploads:(NSMutableSet *)arg0;
- (DBRestClient *)restClient;
- (void)setRestClient:(DBRestClient *)arg0;
+ (id)linkTypeKey;
+ (id)sharedClient;
+ (id)linkTypes;
+ (void)registerDefaults;
+ (id)serviceImageLeft;
+ (id)serviceImageCentered;
+ (id)displayName;
+ (id)displayNameForLinkType:(id)arg0;
+ (id)serviceErrorForError:(id)arg0;
@end
@interface ColorPickerButtonCell : NSButtonCell
{
	NSColor * _color;
}
@property (nonatomic, strong) NSColor * color;
- (id)init;
- (void)drawWithFrame:(id)arg0 inView:(id)arg1;
- (void)drawImage:(id)arg0 withFrame:(id)arg1 inView:(id)arg2;
- (void)drawBezelWithFrame:(id)arg0 inView:(id)arg1;
- (id)drawTitle:(id)arg0 withFrame:(id)arg1 inView:(id)arg2;
// - (void).cxx_destruct;
- (NSColor *)color;
- (void)setColor:(NSColor *)arg0;
@end
@interface Text : Graphic <Graphic>
{
	BOOL _hasOutline;
	BOOL _isBold;
	BOOL _isItalic;
	BOOL _isUnderlined;
	BOOL _hasUserSpecifiedWidth;
	BOOL _handlesBeingChangedToMatchContents;
	double _fontSize;
	NSString * _fontName;
	NSTextView * _textView;
	NSTextStorage * _textStorage;
	NSDictionary * _attributes;
	double _outlineSize;
	NSNumber * _textContainerWidth;
	uint64_t _numberOfLines;
	{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _bounds;
}
@property (nonatomic, strong) NSTextStorage * textStorage;
@property (nonatomic, strong) NSDictionary * attributes;
@property (nonatomic, assign) double outlineSize;
@property (nonatomic, strong) NSNumber * textContainerWidth;
@property (nonatomic, assign) BOOL hasUserSpecifiedWidth;
@property (nonatomic, assign) {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} bounds;
@property (nonatomic, assign) uint64_t numberOfLines;
@property (nonatomic, assign) BOOL handlesBeingChangedToMatchContents;
@property (nonatomic, assign) double fontSize;
@property (nonatomic, strong) NSString * fontName;
@property (nonatomic, assign) BOOL hasOutline;
@property (nonatomic, assign) BOOL isBold;
@property (nonatomic, assign) BOOL isItalic;
@property (nonatomic, assign) BOOL isUnderlined;
@property (nonatomic, strong) NSTextView * textView;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (long long)zIndex;
- (id)cursorForHandle:(id)arg0;
- (void)scaleTo:(id)arg0;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (void)drawSelectionInView:(id)arg0;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
- (void)dealloc;
- (void)setHasOutline:(BOOL)arg0;
- (void)setHandles:(id)arg0;
- (void)setSize:(id)arg0;
- (double)size;
- (void)setFontSize:(double)arg0;
- (void)setFontName:(NSString *)arg0;
- (void)setColor:(id)arg0;
- (void)setIsBold:(BOOL)arg0;
- (void)setIsItalic:(BOOL)arg0;
- (void)setIsUnderlined:(BOOL)arg0;
- (NSDictionary *)attributes;
- (id)font;
- (double)outlineSize;
- (void)updateTextAttributes;
- (void)updateTextViewWithAttributes:(id)arg0;
- (id)newEditingView;
- (char)finalizeEditingView;
- (id)naturalSizeForTextContainerWidth:(id)arg0;
- (void)undoRegistrationForHandlesChangeDisabled:(id)arg0;
- (void)setSizeToMatchContents;
- (void)textDidChange:(id)arg0;
- (void)textStorageDidProcessEditing:(id)arg0;
- (void)drawEditSelection;
- (void)drawContentsWithOutline:(id)arg0 andText:(id)arg1;
- (NSTextStorage *)textStorage;
- (char)didGetCreated;
- (id)initAtPoint:(id)arg0 inWindow:(id)arg1;
// - (void).cxx_destruct;
- (double)fontSize;
- (NSString *)fontName;
- (char)hasOutline;
- (char)isBold;
- (char)isItalic;
- (char)isUnderlined;
- (NSTextView *)textView;
- (void)setTextView:(NSTextView *)arg0;
- (void)setTextStorage:(NSTextStorage *)arg0;
- (void)setAttributes:(NSDictionary *)arg0;
- (void)setOutlineSize:(double)arg0;
- (NSNumber *)textContainerWidth;
- (void)setTextContainerWidth:(NSNumber *)arg0;
- (char)hasUserSpecifiedWidth;
- (void)setHasUserSpecifiedWidth:(BOOL)arg0;
- ({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})bounds;
- (void)setBounds:({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})arg0;
- (unsigned long long)numberOfLines;
- (void)setNumberOfLines:(uint64_t)arg0;
- (char)handlesBeingChangedToMatchContents;
- (void)setHandlesBeingChangedToMatchContents:(BOOL)arg0;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (double)fontSizeForSize:(id)arg0;
+ (id)sharedLayoutManager;
@end
@interface ToolbarButton : NSButton
- (id)initWithFrame:(id)arg0;
- (void)dealloc;
- (void)setState:(id)arg0;
- (void)setEnabled:(id)arg0;
- (void)highlight:(id)arg0;
- (void)updateImage;
- (char)acceptsFirstResponder;
@end
@interface ZendeskTicketTitleHeaderBackgroundView : NSView
- (void)drawRect:(id)arg0;
@end
@interface Client : NSObject
- (void)uploadFile:(id)arg0 forDocument:(id)arg1 onStart:(id)arg2 completion:(id)arg3 onCancel:(id)arg4;
- (void)removeUpload:(id)arg0;
- (void)revoke;
+ (void)registerDefaults;
+ (Class)clientClassForSerivceType:(id)arg0;
+ (id)selectedClient;
+ (id)serviceErrorForError:(id)arg0;
@end
@interface ContentViewController : NSViewController
{
	Document * _document;
	DragViewController * _dragViewController;
	CanvasViewController * _canvasViewController;
	VideoControlsView * _videoControlsView;
}
@property (nonatomic, strong) Document * document;
@property (nonatomic, strong) DragViewController * dragViewController;
@property (nonatomic, strong) CanvasViewController * canvasViewController;
@property (nonatomic, strong) VideoControlsView * videoControlsView;
@property (nonatomic, strong) id desiredContentSize;
- (void)viewDidLoad;
- (void)dealloc;
- (char)acceptsFirstResponder;
- (void)setDocument:(Document *)arg0;
- (id)canvasViewFrame;
- (id)desiredContentSize;
- (void)createVideoControlsWithPlayer:(id)arg0;
- (void)startDragMode:(id)arg0 data:(id)arg1 fileURL:(id)arg2;
- (void)endDragMode:(id)arg0;
- (void)dragModeDidEnd;
- (id)windowController;
// - (void).cxx_destruct;
- (Document *)document;
- (DragViewController *)dragViewController;
- (void)setDragViewController:(DragViewController *)arg0;
- (CanvasViewController *)canvasViewController;
- (void)setCanvasViewController:(CanvasViewController *)arg0;
- (VideoControlsView *)videoControlsView;
- (void)setVideoControlsView:(VideoControlsView *)arg0;
@end
@interface ClipView : NSClipView
- (id)constrainBoundsRect:(id)arg0;
@end
@interface ShapeCircle : Shape <Shape>
- (id)drawingPath;
@end
@interface OverlayView : NSView
{
	NSTextField * _messageTextField;
	NSTextView * _subMessageTextView;
	NSImageView * _iconImageView;
	YRKSpinningProgressIndicator * _throbber;
}
@property (nonatomic, strong) NSTextField * messageTextField;
@property (nonatomic, strong) NSTextView * subMessageTextView;
@property (nonatomic, strong) NSImageView * iconImageView;
@property (nonatomic, strong) YRKSpinningProgressIndicator * throbber;
- (void)dealloc;
- (id)initWithFrame:(id)arg0;
- (void)setMessage:(id)arg0 iconType:(id)arg1 subMessage:(id)arg2 subMessageLink:(id)arg3;
- (void)drawRect:(id)arg0;
- (char)acceptsFirstResponder;
// - (void).cxx_destruct;
- (NSTextField *)messageTextField;
- (void)setMessageTextField:(NSTextField *)arg0;
- (NSTextView *)subMessageTextView;
- (void)setSubMessageTextView:(NSTextView *)arg0;
- (NSImageView *)iconImageView;
- (void)setIconImageView:(NSImageView *)arg0;
- (YRKSpinningProgressIndicator *)throbber;
- (void)setThrobber:(YRKSpinningProgressIndicator *)arg0;
@end
@interface Crop : NSResponder
{
	{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
	{CGPoint="x"d"y"d} _mouseDownOffset;
	NSWindow * _window;
	{?="contents"[8{CGPoint="x"d"y"d}]} _handles;
}
@property (nonatomic, assign) {?="contents"[8{CGPoint="x"d"y"d}]} handles;
@property (nonatomic, strong) NSWindow * window;
@property (nonatomic, strong) id frame;
- (id)cursorForHandle:(id)arg0;
- (id)initAtPoint:(id)arg0 inWindow:(id)arg1;
- (void)dealloc;
- (id)hitRectForHandle:(id)arg0;
- (long long)handleUnderPoint:(id)arg0;
- (void)mouseDownOnHandle:(id)arg0 atLocation:(id)arg1;
- (void)scaleTo:(id)arg0;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (void)setHandlesFromRect:(id)arg0;
- (void)drawContentsInView:(id)arg0;
- (id)handle:(id)arg0 atPoint:(id)arg1;
- (void)drawHandle:(id)arg0 inView:(id)arg1 atPoint:(id)arg2;
- (void)setHandles:({?="contents"[8{CGPoint="x"d"y"d}]})arg0;
- (char)didGetCreated;
- ({?="contents"[8{CGPoint="x"d"y"d}]})handles;
- (void)nudgeWithDelta:(id)arg0;
- (void)moveLeft:(id)arg0;
- (void)moveRight:(id)arg0;
- (void)moveUp:(id)arg0;
- (void)moveDown:(id)arg0;
- (char)acceptsFirstResponder;
- (id)frame;
- (id)windowController;
- (id)canvasView;
// - (void).cxx_destruct;
- (NSWindow *)window;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
@end
@interface Shape : Graphic <Graphic>
{
	NSBezierPath * _drawingPath;
	CGPath= _hitTestPath;
}
@property (nonatomic, assign) CGPath= hitTestPath;
@property (nonatomic, strong) NSBezierPath * drawingPath;
@property (nonatomic, strong) id strokeWidth;
- (id)cursorForHandle:(id)arg0;
- (long long)zIndex;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (char)didGetCreated;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (void)drawSelectionInView:(id)arg0;
- (CGPath=)hitTestPath;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
- (void)dealloc;
- (double)strokeWidth;
- (void)setHandles:(id)arg0;
- (void)setSize:(id)arg0;
// - (void).cxx_destruct;
- (NSBezierPath *)drawingPath;
- (void)setHitTestPath:(CGPath=)arg0;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
@end
@interface CloudAppUpload : Upload <Upload>
{
	CLAPIEngine * _engine;
}
@property (nonatomic, strong) CLAPIEngine * engine;
- (id)init;
- (void)dealloc;
- (void)requestDidFailWithError:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)fileUploadDidProgress:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)fileUploadDidSucceedWithResultingItem:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2;
// - (void).cxx_destruct;
- (CLAPIEngine *)engine;
- (void)setEngine:(CLAPIEngine *)arg0;
+ (id)uploadFile:(id)arg0 forDocument:(id)arg1 withCompletion:(id)arg2;
@end
@interface ZendeskTicketCancelButton : NSButton
- (void)drawRect:(id)arg0;
@end
@interface Cursors : NSObject
{
	NSCursor * _resizeTopRightBottomLeft;
	NSCursor * _resizeTopLeftBottomRight;
	NSCursor * _resizeLeftRight;
	NSCursor * _resizeTopBottom;
	NSCursor * _resize;
}
@property (nonatomic, strong) NSCursor * resizeTopRightBottomLeft;
@property (nonatomic, strong) NSCursor * resizeTopLeftBottomRight;
@property (nonatomic, strong) NSCursor * resizeLeftRight;
@property (nonatomic, strong) NSCursor * resizeTopBottom;
@property (nonatomic, strong) NSCursor * resize;
- (NSCursor *)resize;
- (NSCursor *)resizeTopBottom;
- (NSCursor *)resizeLeftRight;
- (NSCursor *)resizeTopLeftBottomRight;
- (NSCursor *)resizeTopRightBottomLeft;
- (id)loadCursorNamed:(id)arg0;
// - (void).cxx_destruct;
- (void)setResizeTopRightBottomLeft:(NSCursor *)arg0;
- (void)setResizeTopLeftBottomRight:(NSCursor *)arg0;
- (void)setResizeLeftRight:(NSCursor *)arg0;
- (void)setResizeTopBottom:(NSCursor *)arg0;
- (void)setResize:(NSCursor *)arg0;
+ (id)sharedInstance;
@end
@interface ZendeskTicketDescriptionBackgroundView : ZendeskTicketBackgroundView <ZendeskTicketBackgroundView>
- (id)initWithFrame:(id)arg0;
- (void)mouseDown:(id)arg0;
@end
@interface ProTipView : NSView
- (void)drawRect:(id)arg0;
@end
@interface VideoExporter : NSObject
+ (id)GIFDataForVideo:(id)arg0 overlayImage:(id)arg1;
+ (id)compositionAndVideoCompositionForVideo:(id)arg0 overlayImage:(id)arg1;
+ (id)generateFramesFromComposition:(id)arg0 videoComposition:(id)arg1;
+ (id)GIFDataWithFrames:(id)arg0 framesPerSecond:(id)arg1;
+ (id)imageWithoutAlpha:(id)arg0;
+ (void)videoExport;
@end
@interface RecordScreenView : NSView
{
	<RecordScreenDelegate> * _delegate;
	RecordScreenSelectionView * _recordScreenSelectionView;
	RecordScreenControlView * _recordScreenControlView;
	NSColor * _backgroundColor;
	uint64_t _state;
	NSTimer * _elapsedRecordingTimer;
	{CGPoint="x"d"y"d} _dragOrigin;
}
@property (nonatomic, strong) RecordScreenSelectionView * recordScreenSelectionView;
@property (nonatomic, strong) RecordScreenControlView * recordScreenControlView;
@property (nonatomic, assign) {CGPoint="x"d"y"d} dragOrigin;
@property (nonatomic, strong) NSColor * backgroundColor;
@property (nonatomic, assign) uint64_t state;
@property (nonatomic, strong) NSTimer * elapsedRecordingTimer;
@property (nonatomic, strong) <RecordScreenDelegate> * delegate;
- (id)initWithFrame:(id)arg0 delegate:(id)arg1;
- (void)stateChangedNotification:(id)arg0;
- (void)setState:(uint64_t)arg0;
- (void)drawRect:(id)arg0;
- (void)resetCursorRects;
- (void)setBackgroundColor:(NSColor *)arg0;
- (id)controlViewFrameForSelectionFrame:(id)arg0;
- (void)mouseDownNotification:(id)arg0;
- (void)mouseDown:(id)arg0;
- (void)mouseDragged:(id)arg0;
- (void)mouseUp:(id)arg0;
- (void)keyDown:(id)arg0;
- (char)acceptsFirstResponder;
- (void)updateTrackingAreas;
- (void)mouseMoved:(id)arg0;
- (void)mouseEntered:(id)arg0;
- (void)controlClicked:(id)arg0;
- (void)shouldBeginRecordingNotification:(id)arg0;
- (void)beginRecording;
- (void)stopRecording;
- (char)rectIsRecordableSize:(id)arg0;
- (void)dealloc;
// - (void).cxx_destruct;
- (<RecordScreenDelegate> *)delegate;
- (void)setDelegate:(<RecordScreenDelegate> *)arg0;
- (RecordScreenSelectionView *)recordScreenSelectionView;
- (void)setRecordScreenSelectionView:(RecordScreenSelectionView *)arg0;
- (RecordScreenControlView *)recordScreenControlView;
- (void)setRecordScreenControlView:(RecordScreenControlView *)arg0;
- ({CGPoint="x"d"y"d})dragOrigin;
- (void)setDragOrigin:({CGPoint="x"d"y"d})arg0;
- (NSColor *)backgroundColor;
- (unsigned long long)state;
- (NSTimer *)elapsedRecordingTimer;
- (void)setElapsedRecordingTimer:(NSTimer *)arg0;
@end
@interface PurchaseManager : NSObject
{
	PurchaseProWindowController * _purchaseProWindowController;
}
@property (nonatomic, strong) PurchaseProWindowController * purchaseProWindowController;
@property (nonatomic, strong) id isPro;
- (id)init;
- (char)isPro;
- (void)recordEarliestInstall;
- (void)maybeAutoUpgrade;
- (void)checkForAPIUpgrade;
- (void)upgradeToProWithTransaction:(id)arg0;
- (void)showPurchaseProWindow;
- (void)closeProPurchaseWindow;
- (void)purchaseProduct:(id)arg0;
- (void)showModalAlertWithMessage:(id)arg0 informativeText:(id)arg1 style:(id)arg2;
- (void)proPurchaseWantsPurchase:(id)arg0;
- (void)proPurchaseWantsRestore:(id)arg0;
- (void)proPurchaseDidCancel:(id)arg0;
- (void)proPurchaseDidUseDriftt:(id)arg0;
- (void)paymentQueue:(id)arg0 updatedTransactions:(id)arg1;
- (void)paymentQueue:(id)arg0 updatedTransaction:(id)arg1;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg0;
- (void)paymentQueue:(id)arg0 restoreCompletedTransactionsFailedWithError:(id)arg1;
- (void)showRestoreFailedError:(id)arg0;
- (void)productsRequest:(id)arg0 didReceiveResponse:(id)arg1;
// - (void).cxx_destruct;
- (PurchaseProWindowController *)purchaseProWindowController;
- (void)setPurchaseProWindowController:(PurchaseProWindowController *)arg0;
+ (id)defaultManager;
@end
@interface ShapeRectangle : Shape <Shape>
- (id)drawingPath;
@end
@interface ScrollView : NSScrollView
- (id)initWithFrame:(id)arg0;
@end
@interface DrifttLoginWindowController : NSWindowController
{
	BOOL _hasFoundToken;
	@? _completion;
	WebView * _loginWebView;
	NSView * _noInternetView;
}
@property (nonatomic, strong) WebView * loginWebView;
@property (nonatomic, strong) NSView * noInternetView;
@property (nonatomic, assign) BOOL hasFoundToken;
@property (nonatomic, assign) @? completion;
- (id)initWithCompletion:(id)arg0;
- (void)windowDidLoad;
- (void)loadURL:(id)arg0;
- (void)windowWillClose:(id)arg0;
- (void)webView:(id)arg0 didReceiveTitle:(id)arg1 forFrame:(id)arg2;
- (id)parseJavascriptResult:(id)arg0;
- (void)webView:(id)arg0 didFinishLoadForFrame:(id)arg1;
- (id)initialURL;
// - (void).cxx_destruct;
- (@?)completion;
- (WebView *)loginWebView;
- (void)setLoginWebView:(WebView *)arg0;
- (NSView *)noInternetView;
- (void)setNoInternetView:(NSView *)arg0;
- (char)hasFoundToken;
- (void)setHasFoundToken:(BOOL)arg0;
@end
@interface OnboardingShortcutView : NSView
{
	NSView * _circleView;
	NSTextField * _shortcutTextField;
}
@property (nonatomic, strong) NSView * circleView;
@property (nonatomic, strong) NSTextField * shortcutTextField;
- (void)setShortcutString:(id)arg0;
- (void)awakeFromNib;
- (void)drawRect:(id)arg0;
- (void)mouseEntered:(id)arg0;
- (void)mouseExited:(id)arg0;
- (void)mouseDragged:(id)arg0;
- (void)animateBackgroundColorFrom:(id)arg0 to:(id)arg1 borderColorFrom:(id)arg2 to:(id)arg3;
// - (void).cxx_destruct;
- (NSView *)circleView;
- (void)setCircleView:(NSView *)arg0;
- (NSTextField *)shortcutTextField;
- (void)setShortcutTextField:(NSTextField *)arg0;
@end
@interface ZendeskUser : NSObject
{
	NSString * _userID;
	NSString * _name;
	NSString * _email;
}
@property (nonatomic, strong) NSString * userID;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * email;
- (id)initWithJSON:(id)arg0;
// - (void).cxx_destruct;
- (NSString *)userID;
- (NSString *)name;
- (NSString *)email;
@end
@interface ToolbarPopUpButton : NSPopUpButton
{
	NSTrackingArea * _trackingArea;
	BOOL _mouseIsDown;
	BOOL _menuWasShownForLastMouseDown;
	int _mouseDownUniquenessCounter;
}
@property (nonatomic, assign) BOOL mouseIsDown;
@property (nonatomic, assign) BOOL menuWasShownForLastMouseDown;
@property (nonatomic, assign) int mouseDownUniquenessCounter;
- (id)initWithFrame:(id)arg0;
- (char)acceptsFirstResponder;
- (void)dealloc;
- (void)updateTrackingAreas;
- (char)performKeyEquivalent:(id)arg0;
- (long long)tag;
- (void)popUpSelectionChanged:(id)arg0;
- (void)mouseDown:(id)arg0;
- (void)mouseUp:(id)arg0;
- (void)sendAction;
- (void)setState:(id)arg0;
- (long long)state;
- (char)sendAction:(id)arg0 to:(id)arg1;
- (void)mouseEntered:(id)arg0;
- (void)mouseExited:(id)arg0;
// - (void).cxx_destruct;
- (char)mouseIsDown;
- (void)setMouseIsDown:(BOOL)arg0;
- (char)menuWasShownForLastMouseDown;
- (void)setMenuWasShownForLastMouseDown:(BOOL)arg0;
- (int)mouseDownUniquenessCounter;
- (void)setMouseDownUniquenessCounter:(int)arg0;
@end
@interface ZendeskClient : Client <Client>
{
	NSString * _ticketID;
	NSString * _ticketSubject;
	NSString * _ticketFilterText;
	NSMutableSet * _uploads;
	RACSignal * _ticketsSignal;
	RACSignal * _sortedTicketsSignal;
	RACSubject * _fetchTicketsSubject;
	NSMutableDictionary * _userSignals;
	NSMutableDictionary * _userFetchSubjects;
	@? _authCompletionBlock;
}
@property (nonatomic, strong) NSMutableSet * uploads;
@property (nonatomic, strong) RACSignal * ticketsSignal;
@property (nonatomic, strong) RACSignal * sortedTicketsSignal;
@property (nonatomic, strong) RACSubject * fetchTicketsSubject;
@property (nonatomic, strong) id subdomain;
@property (nonatomic, strong) id email;
@property (nonatomic, strong) id accessToken;
@property (nonatomic, strong) id accessTokenKey;
@property (nonatomic, strong) NSMutableDictionary * userSignals;
@property (nonatomic, strong) NSMutableDictionary * userFetchSubjects;
@property (nonatomic, assign) @? authCompletionBlock;
@property (nonatomic, strong) id authAPIPath;
@property (nonatomic, strong) id baseAPIPath;
@property (nonatomic, strong) id searchAPIPath;
@property (nonatomic, strong) id ticketAPIPath;
@property (nonatomic, strong) id uploadAPIPath;
@property (nonatomic, strong) id user;
@property (nonatomic, strong) NSString * ticketID;
@property (nonatomic, strong) NSString * ticketSubject;
@property (nonatomic, strong) NSString * ticketFilterText;
- (id)init;
- (char)isLinked;
- (id)user;
- (id)email;
- (void)setEmail:(id)arg0;
- (id)subdomain;
- (void)setSubdomain:(id)arg0;
- (id)accessTokenKey;
- (id)accessToken;
- (void)setAccessToken:(id)arg0;
- (id)authAPIPath;
- (id)authAPITokenPath;
- (id)baseAPIPath;
- (id)searchAPIPath;
- (id)ticketAPIPath;
- (id)uploadAPIPath;
- (RACSignal *)ticketsSignal;
- (RACSignal *)sortedTicketsSignal;
- (id)sessionManager;
- (id)ticketsFromJSON:(id)arg0;
- (void)fetchTickets;
- (void)fetchMoreTickets;
- (void)showTicketSheetOnViewController:(id)arg0 fileURL:(id)arg1 forDocument:(id)arg2 onStart:(id)arg3 completion:(id)arg4 onCancel:(id)arg5;
- (void)showAuthenticateSheetOnViewController:(id)arg0 completion:(id)arg1;
- (void)authenticateForSubdomain:(id)arg0 completion:(id)arg1;
- (void)handleAuthCallback:(id)arg0 error:(id)arg1;
- (void)uploadFile:(id)arg0 forDocument:(id)arg1 onStart:(id)arg2 completion:(id)arg3 onCancel:(id)arg4;
- (void)addUpload:(id)arg0;
- (void)removeUpload:(id)arg0;
- (id)userSignalForID:(id)arg0;
- (void)fetchUserForID:(id)arg0;
- (void)clearTicketInfo;
- (void)revoke;
// - (void).cxx_destruct;
- (NSString *)ticketID;
- (void)setTicketID:(NSString *)arg0;
- (NSString *)ticketSubject;
- (void)setTicketSubject:(NSString *)arg0;
- (NSString *)ticketFilterText;
- (void)setTicketFilterText:(NSString *)arg0;
- (NSMutableSet *)uploads;
- (void)setUploads:(NSMutableSet *)arg0;
- (void)setTicketsSignal:(RACSignal *)arg0;
- (void)setSortedTicketsSignal:(RACSignal *)arg0;
- (RACSubject *)fetchTicketsSubject;
- (void)setFetchTicketsSubject:(RACSubject *)arg0;
- (NSMutableDictionary *)userSignals;
- (void)setUserSignals:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)userFetchSubjects;
- (void)setUserFetchSubjects:(NSMutableDictionary *)arg0;
- (@?)authCompletionBlock;
- (void)setAuthCompletionBlock:(@?)arg0;
+ (id)sharedClient;
+ (id)linkTypeKey;
+ (id)linkTypes;
+ (void)registerDefaults;
+ (id)serviceImageLeft;
+ (id)serviceImageCentered;
+ (id)displayName;
+ (id)displayNameForLinkType:(id)arg0;
+ (id)serviceErrorForError:(id)arg0;
@end
@interface GeneralPreferencesViewController : NSViewController
{
	NSPopUpButton * _showIconInPopUpButton;
	NSTextField * _rebootRequiredLabel;
	NSButton * _launchAtLoginButton;
	NSButton * _showWelcomeScreenAtLaunchButton;
	NSButton * _closeWindowButton;
	NSButton * _multipleWindowsButton;
	NSButton * _invertArrowButton;
	NSButton * _disableScalingButton;
}
@property (nonatomic, strong) NSPopUpButton * showIconInPopUpButton;
@property (nonatomic, strong) NSTextField * rebootRequiredLabel;
@property (nonatomic, strong) NSButton * launchAtLoginButton;
@property (nonatomic, strong) NSButton * showWelcomeScreenAtLaunchButton;
@property (nonatomic, strong) NSButton * closeWindowButton;
@property (nonatomic, strong) NSButton * multipleWindowsButton;
@property (nonatomic, strong) NSButton * invertArrowButton;
@property (nonatomic, strong) NSButton * disableScalingButton;
@property (nonatomic, strong) id hasResizableWidth;
@property (nonatomic, strong) id hasResizableHeight;
@property (nonatomic, strong) id identifier;
@property (nonatomic, strong) id toolbarItemImage;
@property (nonatomic, strong) id toolbarItemLabel;
- (void)viewDidLoad;
- (void)toggleLaunchOnLogin:(id)arg0;
- (void)toggleShowWelcomeScreenAtLaunch:(id)arg0;
- (void)toggleCloseWindow:(id)arg0;
- (void)toggleMultipleWindows:(id)arg0;
- (void)toggleInvertArrow:(id)arg0;
- (void)toggleScaling:(id)arg0;
- (void)changeApplicationType:(id)arg0;
- (id)identifier;
- (id)toolbarItemImage;
- (id)toolbarItemLabel;
// - (void).cxx_destruct;
- (NSPopUpButton *)showIconInPopUpButton;
- (void)setShowIconInPopUpButton:(NSPopUpButton *)arg0;
- (NSTextField *)rebootRequiredLabel;
- (void)setRebootRequiredLabel:(NSTextField *)arg0;
- (NSButton *)launchAtLoginButton;
- (void)setLaunchAtLoginButton:(NSButton *)arg0;
- (NSButton *)showWelcomeScreenAtLaunchButton;
- (void)setShowWelcomeScreenAtLaunchButton:(NSButton *)arg0;
- (NSButton *)closeWindowButton;
- (void)setCloseWindowButton:(NSButton *)arg0;
- (NSButton *)multipleWindowsButton;
- (void)setMultipleWindowsButton:(NSButton *)arg0;
- (NSButton *)invertArrowButton;
- (void)setInvertArrowButton:(NSButton *)arg0;
- (NSButton *)disableScalingButton;
- (void)setDisableScalingButton:(NSButton *)arg0;
@end
@interface OverlayCircle : Overlay <Overlay>
- (id)drawingPath;
@end
@interface ColorPickerButton : NSButton
@property (nonatomic, strong) id color;
- (id)initWithFrame:(id)arg0;
- (char)acceptsFirstResponder;
- (void)setColor:(id)arg0;
- (id)color;
@end
@interface Arrow : Graphic <Graphic>
{
	NSBezierPath * _drawingPath;
	CGPath= _hitTestPath;
}
@property (nonatomic, strong) NSBezierPath * drawingPath;
@property (nonatomic, assign) CGPath= hitTestPath;
- (id)cursorForHandle:(id)arg0;
- (long long)zIndex;
- (void)scaleTo:(id)arg0;
- (long long)resizeByMovingHandle:(id)arg0 withDelta:(id)arg1 toLocation:(id)arg2;
- (void)translateWithDelta:(id)arg0 toLocation:(id)arg1;
- (id)keyPathsForSettableValues;
- (id)drawingBounds;
- (void)drawContentsInView:(id)arg0 isBeingCreated:(id)arg1 isBeingEdited:(id)arg2;
- (char)didGetCreated;
- (void)drawSelectionInView:(id)arg0;
- (CGPath=)hitTestPath;
- (char)isContentsUnderPoint:(id)arg0;
- (char)isContentsInRect:(id)arg0;
- (id)keysForValuesToObserveForUndo;
- (void)dealloc;
- (void)setSize:(id)arg0;
- (void)setHandles:(id)arg0;
// - (void).cxx_destruct;
- (NSBezierPath *)drawingPath;
- (void)setDrawingPath:(NSBezierPath *)arg0;
- (void)setHitTestPath:(CGPath=)arg0;
+ (id)hiddenHandles;
+ (long long)numberOfHandles;
+ (long long)creationSizingHandle;
+ (id)creationCursor;
+ (id)keyPathsForValuesAffectingDrawingContents;
+ (id)keyPathsForValuesAffectingDrawingBounds;
@end
@interface Selection : NSObject
{
	{CGPoint="x"d"y"d} _endPoint;
	{CGPoint="x"d"y"d} _startPoint;
	{CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} _rect;
}
@property (nonatomic, assign) {CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}} rect;
@property (nonatomic, assign) {CGPoint="x"d"y"d} startPoint;
@property (nonatomic, assign) {CGPoint="x"d"y"d} endPoint;
- (void)setEndPoint:({CGPoint="x"d"y"d})arg0;
- ({CGPoint="x"d"y"d})endPoint;
- (void)dealloc;
- (void)drawContentsInView:(id)arg0;
- ({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})rect;
- (void)setRect:({CGRect="origin"{CGPoint="x"d"y"d}"size"{CGSize="width"d"height"d}})arg0;
- ({CGPoint="x"d"y"d})startPoint;
- (void)setStartPoint:({CGPoint="x"d"y"d})arg0;
@end
@interface DropView : NSView
{
	NSArray * _validDropTypes;
}
- (id)initWithFrame:(id)arg0;
- (unsigned long long)draggingEntered:(id)arg0;
- (char)performDragOperation:(id)arg0;
// - (void).cxx_destruct;
@end
@interface ColorViewController : NSViewController
{
	BOOL _didChangePropertyWithControl;
	NSWindow * _window;
	ColorPickerButton * _colorPickerButton;
	NSButton * _outlineButton;
}
@property (nonatomic, strong) NSWindow * window;
@property (nonatomic, strong) ColorPickerButton * colorPickerButton;
@property (nonatomic, strong) NSButton * outlineButton;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (void)startObservingGraphics:(id)arg0;
- (void)stopObservingGraphics:(id)arg0;
- (void)changeColor:(id)arg0;
- (void)updateOutlineControlSelection;
- (void)toggleOutline:(id)arg0;
- (void)setAndStoreGraphicsValue:(id)arg0 forKey:(id)arg1;
- (id)windowController;
- (id)document;
- (id)selectedGraphics;
// - (void).cxx_destruct;
- (NSWindow *)window;
- (void)setWindow:(NSWindow *)arg0;
- (ColorPickerButton *)colorPickerButton;
- (void)setColorPickerButton:(ColorPickerButton *)arg0;
- (NSButton *)outlineButton;
- (void)setOutlineButton:(NSButton *)arg0;
@end
@interface ToolbarPopUpButtonCell : NSPopUpButtonCell
{
	NSButtonCell * _drawingButtonCell;
	NSImage * _arrowImage;
}
- (id)init;
- (void)setState:(id)arg0;
- (long long)state;
- (void)drawWithFrame:(id)arg0 inView:(id)arg1;
// - (void).cxx_destruct;
@end
@interface ShortcutsPreferencesViewController : NSViewController
{
	MASShortcutView * _crosshairShortcutView;
	MASShortcutView * _windowShortcutView;
	MASShortcutView * _imageFromClipboardShortcutView;
	MASShortcutView * _bringToFrontShortcutView;
	MASShortcutView * _recordScreenShortcutView;
}
@property (nonatomic, strong) MASShortcutView * crosshairShortcutView;
@property (nonatomic, strong) MASShortcutView * windowShortcutView;
@property (nonatomic, strong) MASShortcutView * imageFromClipboardShortcutView;
@property (nonatomic, strong) MASShortcutView * bringToFrontShortcutView;
@property (nonatomic, strong) MASShortcutView * recordScreenShortcutView;
@property (nonatomic, strong) id hasResizableWidth;
@property (nonatomic, strong) id hasResizableHeight;
@property (nonatomic, strong) id identifier;
@property (nonatomic, strong) id toolbarItemImage;
@property (nonatomic, strong) id toolbarItemLabel;
- (void)viewDidLoad;
- (void)resetShortcuts:(id)arg0;
- (id)identifier;
- (id)toolbarItemImage;
- (id)toolbarItemLabel;
// - (void).cxx_destruct;
- (MASShortcutView *)crosshairShortcutView;
- (void)setCrosshairShortcutView:(MASShortcutView *)arg0;
- (MASShortcutView *)windowShortcutView;
- (void)setWindowShortcutView:(MASShortcutView *)arg0;
- (MASShortcutView *)imageFromClipboardShortcutView;
- (void)setImageFromClipboardShortcutView:(MASShortcutView *)arg0;
- (MASShortcutView *)bringToFrontShortcutView;
- (void)setBringToFrontShortcutView:(MASShortcutView *)arg0;
- (MASShortcutView *)recordScreenShortcutView;
- (void)setRecordScreenShortcutView:(MASShortcutView *)arg0;
@end
@interface ToolbarSlider : NSSlider
- (char)acceptsFirstResponder;
@end
@interface HistoryItem : NSObject
{
	NSString * _filename;
	long long _serviceType;
	long long _linkType;
	NSString * _link;
}
@property (nonatomic, strong) NSString * filename;
@property (nonatomic, assign) long long serviceType;
@property (nonatomic, assign) long long linkType;
@property (nonatomic, strong) NSString * link;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
// - (void).cxx_destruct;
- (NSString *)filename;
- (void)setFilename:(NSString *)arg0;
- (long long)serviceType;
- (void)setServiceType:(long long)arg0;
- (long long)linkType;
- (void)setLinkType:(long long)arg0;
- (NSString *)link;
- (void)setLink:(NSString *)arg0;
@end
@interface EmojiButton : ToolbarButton <ToolbarButton>
- (id)initWithFrame:(id)arg0;
- (void)clicked:(id)arg0;
- (char)textView:(id)arg0 shouldChangeTextInRange:(id)arg1 replacementString:(id)arg2;
- (void)updateImage;
- (id)createTextView;
- (id)textViewFrame;
@end
@interface CloudAppClient : Client <Client>
{
	BOOL _isAuthenticating;
	NSMutableSet * _uploads;
	CLAPIEngine * _engine;
	@? _authenticateCompletionBlock;
}
@property (nonatomic, strong) NSMutableSet * uploads;
@property (nonatomic, strong) CLAPIEngine * engine;
@property (nonatomic, assign) @? authenticateCompletionBlock;
@property (nonatomic, strong) id user;
- (id)init;
- (void)showAuthenticateSheetOnViewController:(id)arg0 completion:(id)arg1;
- (void)authenticateWithEmail:(id)arg0 password:(id)arg1 completion:(id)arg2;
- (void)accountInformationRetrievalSucceeded:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)requestDidFailWithError:(id)arg0 connectionIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)revoke;
- (void)uploadFile:(id)arg0 forDocument:(id)arg1 onStart:(id)arg2 completion:(id)arg3 onCancel:(id)arg4;
- (char)isLinked;
- (void)addUpload:(id)arg0;
- (void)removeUpload:(id)arg0;
- (id)user;
// - (void).cxx_destruct;
- (NSMutableSet *)uploads;
- (void)setUploads:(NSMutableSet *)arg0;
- (CLAPIEngine *)engine;
- (void)setEngine:(CLAPIEngine *)arg0;
- (@?)authenticateCompletionBlock;
- (void)setAuthenticateCompletionBlock:(@?)arg0;
+ (id)sharedClient;
+ (id)linkTypes;
+ (void)registerDefaults;
+ (id)linkTypeKey;
+ (id)displayName;
+ (id)serviceImageLeft;
+ (id)serviceImageCentered;
+ (id)displayNameForLinkType:(id)arg0;
+ (id)serviceErrorForError:(id)arg0;
@end
@interface RecordScreenSelectionView : NSView
{
	uint64_t _state;
	double _elapsedRecordingPercent;
	NSDate * _recordingStartDate;
}
@property (nonatomic, assign) double elapsedRecordingPercent;
@property (nonatomic, strong) NSDate * recordingStartDate;
@property (nonatomic, assign) uint64_t state;
@property (nonatomic, strong) id selectionBounds;
@property (nonatomic, strong) id selectionFrame;
- (void)drawRect:(id)arg0;
- (void)dealloc;
- (void)setState:(uint64_t)arg0;
- (void)animateElapsedRecordingIndicator;
- (id)selectionBounds;
- (id)selectionFrame;
// - (void).cxx_destruct;
- (unsigned long long)state;
- (double)elapsedRecordingPercent;
- (void)setElapsedRecordingPercent:(double)arg0;
- (NSDate *)recordingStartDate;
- (void)setRecordingStartDate:(NSDate *)arg0;
@end
@interface AFHTTPRequestOperation : AFURLConnectionOperation <AFURLConnectionOperation>
{
	AFHTTPResponseSerializer<AFURLResponseSerialization> * _responseSerializer;
	@ _responseObject;
	NSError * _responseSerializationError;
}
@property (nonatomic, strong) id response;
@property (nonatomic, assign) @ responseObject;
@property (nonatomic, strong) NSError * responseSerializationError;
@property (nonatomic, strong) id lock;
@property (nonatomic, strong) AFHTTPResponseSerializer<AFURLResponseSerialization> * responseSerializer;
- (id)initWithRequest:(id)arg0;
- (void)setResponseSerializer:(AFHTTPResponseSerializer<AFURLResponseSerialization> *)arg0;
- (@)responseObject;
- (id)error;
- (void)setCompletionBlockWithSuccess:(id)arg0 failure:(id)arg1;
- (void)pause;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (AFHTTPResponseSerializer<AFURLResponseSerialization> *)responseSerializer;
- (void)setResponseObject:(@)arg0;
- (NSError *)responseSerializationError;
- (void)setResponseSerializationError:(NSError *)arg0;
+ (char)supportsSecureCoding;
@end
@interface AFHTTPRequestOperationManager : NSObject
{
	BOOL _shouldUseCredentialStorage;
	NSURL * _baseURL;
	AFHTTPRequestSerializer<AFURLRequestSerialization> * _requestSerializer;
	AFHTTPResponseSerializer<AFURLResponseSerialization> * _responseSerializer;
	NSOperationQueue * _operationQueue;
	NSURLCredential * _credential;
	AFSecurityPolicy * _securityPolicy;
	AFNetworkReachabilityManager * _reachabilityManager;
	NSObject<OS_dispatch_queue> * _completionQueue;
	NSObject<OS_dispatch_group> * _completionGroup;
}
@property (nonatomic, strong) NSURL * baseURL;
@property (nonatomic, strong) AFHTTPRequestSerializer<AFURLRequestSerialization> * requestSerializer;
@property (nonatomic, strong) AFHTTPResponseSerializer<AFURLResponseSerialization> * responseSerializer;
@property (nonatomic, strong) NSOperationQueue * operationQueue;
@property (nonatomic, assign) BOOL shouldUseCredentialStorage;
@property (nonatomic, strong) NSURLCredential * credential;
@property (nonatomic, strong) AFSecurityPolicy * securityPolicy;
@property (nonatomic, strong) AFNetworkReachabilityManager * reachabilityManager;
@property (nonatomic, strong) NSObject<OS_dispatch_queue> * completionQueue;
@property (nonatomic, strong) NSObject<OS_dispatch_group> * completionGroup;
- (id)rac_enqueueHTTPRequestOperation:(id)arg0;
- (id)rac_enqueueBatchOfHTTPRequestOperations:(id)arg0;
- (id)rac_GET:(id)arg0 parameters:(id)arg1;
- (id)rac_POST:(id)arg0 parameters:(id)arg1;
- (id)rac_PUT:(id)arg0 parameters:(id)arg1;
- (id)rac_DELETE:(id)arg0 parameters:(id)arg1;
- (id)rac_PATCH:(id)arg0 parameters:(id)arg1;
- (id)rac_requestPath:(id)arg0 parameters:(id)arg1 method:(id)arg2;
- (id)networkReachabilityStatusSignal;
- (id)init;
- (id)initWithBaseURL:(id)arg0;
- (void)setRequestSerializer:(AFHTTPRequestSerializer<AFURLRequestSerialization> *)arg0;
- (void)setResponseSerializer:(AFHTTPResponseSerializer<AFURLResponseSerialization> *)arg0;
- (id)HTTPRequestOperationWithHTTPMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(id)arg4;
- (id)HTTPRequestOperationWithRequest:(id)arg0 success:(id)arg1 failure:(id)arg2;
- (id)GET:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)HEAD:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)POST:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)POST:(id)arg0 parameters:(id)arg1 constructingBodyWithBlock:(id)arg2 success:(id)arg3 failure:(id)arg4;
- (id)PUT:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)PATCH:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)DELETE:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)description;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (NSURL *)baseURL;
- (void)setBaseURL:(NSURL *)arg0;
- (AFHTTPRequestSerializer<AFURLRequestSerialization> *)requestSerializer;
- (AFHTTPResponseSerializer<AFURLResponseSerialization> *)responseSerializer;
- (NSOperationQueue *)operationQueue;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (char)shouldUseCredentialStorage;
- (void)setShouldUseCredentialStorage:(BOOL)arg0;
- (NSURLCredential *)credential;
- (void)setCredential:(NSURLCredential *)arg0;
- (AFSecurityPolicy *)securityPolicy;
- (void)setSecurityPolicy:(AFSecurityPolicy *)arg0;
- (AFNetworkReachabilityManager *)reachabilityManager;
- (void)setReachabilityManager:(AFNetworkReachabilityManager *)arg0;
- (NSObject<OS_dispatch_queue> *)completionQueue;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_group> *)completionGroup;
- (void)setCompletionGroup:(NSObject<OS_dispatch_group> *)arg0;
+ (id)manager;
+ (char)supportsSecureCoding;
@end
@interface AFHTTPSessionManager : AFURLSessionManager <AFURLSessionManager>
{
	NSURL * _baseURL;
	AFHTTPRequestSerializer<AFURLRequestSerialization> * _requestSerializer;
}
@property (nonatomic, strong) NSURL * baseURL;
@property (nonatomic, strong) AFHTTPRequestSerializer<AFURLRequestSerialization> * requestSerializer;
@property (nonatomic, strong) id responseSerializer;
- (id)rac_GET:(id)arg0 parameters:(id)arg1;
- (id)rac_HEAD:(id)arg0 parameters:(id)arg1;
- (id)rac_POST:(id)arg0 parameters:(id)arg1;
- (id)rac_POST:(id)arg0 parameters:(id)arg1 constructingBodyWithBlock:(id)arg2;
- (id)rac_PUT:(id)arg0 parameters:(id)arg1;
- (id)rac_PATCH:(id)arg0 parameters:(id)arg1;
- (id)rac_DELETE:(id)arg0 parameters:(id)arg1;
- (id)rac_requestPath:(id)arg0 parameters:(id)arg1 method:(id)arg2;
- (id)init;
- (id)initWithBaseURL:(id)arg0;
- (id)initWithSessionConfiguration:(id)arg0;
- (id)initWithBaseURL:(id)arg0 sessionConfiguration:(id)arg1;
- (void)setRequestSerializer:(AFHTTPRequestSerializer<AFURLRequestSerialization> *)arg0;
- (void)setResponseSerializer:(id)arg0;
- (id)GET:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)HEAD:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)POST:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)POST:(id)arg0 parameters:(id)arg1 constructingBodyWithBlock:(id)arg2 success:(id)arg3 failure:(id)arg4;
- (id)PUT:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)PATCH:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)DELETE:(id)arg0 parameters:(id)arg1 success:(id)arg2 failure:(id)arg3;
- (id)dataTaskWithHTTPMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 success:(id)arg3 failure:(id)arg4;
- (id)description;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (NSURL *)baseURL;
- (void)setBaseURL:(NSURL *)arg0;
- (AFHTTPRequestSerializer<AFURLRequestSerialization> *)requestSerializer;
+ (id)manager;
+ (char)supportsSecureCoding;
@end
@interface AFNetworkReachabilityManager : NSObject
{
	long long _networkReachabilityStatus;
	__SCNetworkReachability= _networkReachability;
	uint64_t _networkReachabilityAssociation;
	@? _networkReachabilityStatusBlock;
}
@property (nonatomic, assign) __SCNetworkReachability= networkReachability;
@property (nonatomic, assign) uint64_t networkReachabilityAssociation;
@property (nonatomic, assign) long long networkReachabilityStatus;
@property (nonatomic, assign) @? networkReachabilityStatusBlock;
@property (nonatomic, strong) id reachable;
@property (nonatomic, strong) id reachableViaWWAN;
@property (nonatomic, strong) id reachableViaWiFi;
- (id)initWithReachability:(id)arg0;
- (void)dealloc;
- (char)isReachable;
- (char)isReachableViaWWAN;
- (char)isReachableViaWiFi;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)localizedNetworkReachabilityStatusString;
- (void)setReachabilityStatusChangeBlock:(id)arg0;
// - (void).cxx_destruct;
- (long long)networkReachabilityStatus;
- (void)setNetworkReachabilityStatus:(long long)arg0;
- (__SCNetworkReachability=)networkReachability;
- (void)setNetworkReachability:(__SCNetworkReachability=)arg0;
- (unsigned long long)networkReachabilityAssociation;
- (void)setNetworkReachabilityAssociation:(uint64_t)arg0;
- (@?)networkReachabilityStatusBlock;
- (void)setNetworkReachabilityStatusBlock:(@?)arg0;
+ (id)sharedManager;
+ (id)managerForDomain:(id)arg0;
+ (id)managerForAddress:(id)arg0;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg0;
@end
@interface AFSecurityPolicy : NSObject
{
	BOOL _validatesCertificateChain;
	BOOL _allowInvalidCertificates;
	BOOL _validatesDomainName;
	uint64_t _SSLPinningMode;
	NSArray * _pinnedCertificates;
	NSArray * _pinnedPublicKeys;
}
@property (nonatomic, assign) uint64_t SSLPinningMode;
@property (nonatomic, strong) NSArray * pinnedPublicKeys;
@property (nonatomic, assign) BOOL validatesCertificateChain;
@property (nonatomic, strong) NSArray * pinnedCertificates;
@property (nonatomic, assign) BOOL allowInvalidCertificates;
@property (nonatomic, assign) BOOL validatesDomainName;
- (id)init;
- (void)setPinnedCertificates:(NSArray *)arg0;
- (char)evaluateServerTrust:(id)arg0;
- (char)evaluateServerTrust:(id)arg0 forDomain:(id)arg1;
// - (void).cxx_destruct;
- (unsigned long long)SSLPinningMode;
- (void)setSSLPinningMode:(id)arg0;
- (char)validatesCertificateChain;
- (void)setValidatesCertificateChain:(BOOL)arg0;
- (NSArray *)pinnedCertificates;
- (char)allowInvalidCertificates;
- (void)setAllowInvalidCertificates:(BOOL)arg0;
- (char)validatesDomainName;
- (void)setValidatesDomainName:(BOOL)arg0;
- (NSArray *)pinnedPublicKeys;
- (void)setPinnedPublicKeys:(NSArray *)arg0;
+ (id)defaultPinnedCertificates;
+ (id)defaultPolicy;
+ (id)policyWithPinningMode:(id)arg0;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
@end
@interface AFURLConnectionOperation : NSOperation
{
	BOOL _shouldUseCredentialStorage;
	NSOutputStream * _outputStream;
	NSSet * _runLoopModes;
	NSURLRequest * _request;
	NSURLResponse * _response;
	NSError * _error;
	NSData * _responseData;
	NSURLCredential * _credential;
	AFSecurityPolicy * _securityPolicy;
	NSObject<OS_dispatch_queue> * _completionQueue;
	NSObject<OS_dispatch_group> * _completionGroup;
	NSDictionary * _userInfo;
	long long _state;
	NSRecursiveLock * _lock;
	NSURLConnection * _connection;
	NSString * _responseString;
	uint64_t _responseStringEncoding;
	long long _totalBytesRead;
	@ _backgroundTaskIdentifier;
	@? _uploadProgress;
	@? _downloadProgress;
	@? _authenticationChallenge;
	@? _cacheResponse;
	@? _redirectResponse;
}
@property (nonatomic, assign) long long state;
@property (nonatomic, strong) NSRecursiveLock * lock;
@property (nonatomic, strong) NSURLConnection * connection;
@property (nonatomic, strong) NSURLRequest * request;
@property (nonatomic, strong) NSURLResponse * response;
@property (nonatomic, strong) NSError * error;
@property (nonatomic, strong) NSData * responseData;
@property (nonatomic, strong) NSString * responseString;
@property (nonatomic, assign) uint64_t responseStringEncoding;
@property (nonatomic, assign) long long totalBytesRead;
@property (nonatomic, assign) @ backgroundTaskIdentifier;
@property (nonatomic, assign) @? uploadProgress;
@property (nonatomic, assign) @? downloadProgress;
@property (nonatomic, assign) @? authenticationChallenge;
@property (nonatomic, assign) @? cacheResponse;
@property (nonatomic, assign) @? redirectResponse;
@property (nonatomic, strong) NSSet * runLoopModes;
@property (nonatomic, assign) BOOL shouldUseCredentialStorage;
@property (nonatomic, strong) NSURLCredential * credential;
@property (nonatomic, strong) AFSecurityPolicy * securityPolicy;
@property (nonatomic, strong) id inputStream;
@property (nonatomic, strong) NSOutputStream * outputStream;
@property (nonatomic, strong) NSObject<OS_dispatch_queue> * completionQueue;
@property (nonatomic, strong) NSObject<OS_dispatch_group> * completionGroup;
@property (nonatomic, strong) NSDictionary * userInfo;
- (id)rac_start;
- (id)rac_overrideHTTPCompletionBlock;
- (id)initWithRequest:(id)arg0;
- (void)dealloc;
- (void)setResponseData:(NSData *)arg0;
- (NSString *)responseString;
- (unsigned long long)responseStringEncoding;
- (id)inputStream;
- (void)setInputStream:(id)arg0;
- (NSOutputStream *)outputStream;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (void)setState:(long long)arg0;
- (void)pause;
- (void)operationDidPause;
- (char)isPaused;
- (void)resume;
- (void)setUploadProgressBlock:(id)arg0;
- (void)setDownloadProgressBlock:(id)arg0;
- (void)setWillSendRequestForAuthenticationChallengeBlock:(id)arg0;
- (void)setCacheResponseBlock:(id)arg0;
- (void)setRedirectResponseBlock:(id)arg0;
- (void)setCompletionBlock:(id)arg0;
- (char)isReady;
- (char)isExecuting;
- (char)isFinished;
- (char)isConcurrent;
- (void)start;
- (void)operationDidStart;
- (void)finish;
- (void)cancel;
- (void)cancelConnection;
- (id)description;
- (void)connection:(id)arg0 willSendRequestForAuthenticationChallenge:(id)arg1;
- (char)connectionShouldUseCredentialStorage:(id)arg0;
- (id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)connection:(id)arg0 didSendBodyData:(id)arg1 totalBytesWritten:(id)arg2 totalBytesExpectedToWrite:(id)arg3;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg0;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (id)connection:(id)arg0 willCacheResponse:(id)arg1;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (NSSet *)runLoopModes;
- (void)setRunLoopModes:(NSSet *)arg0;
- (NSURLRequest *)request;
- (void)setRequest:(NSURLRequest *)arg0;
- (NSURLResponse *)response;
- (void)setResponse:(NSURLResponse *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (NSData *)responseData;
- (char)shouldUseCredentialStorage;
- (void)setShouldUseCredentialStorage:(BOOL)arg0;
- (NSURLCredential *)credential;
- (void)setCredential:(NSURLCredential *)arg0;
- (AFSecurityPolicy *)securityPolicy;
- (void)setSecurityPolicy:(AFSecurityPolicy *)arg0;
- (NSObject<OS_dispatch_queue> *)completionQueue;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_group> *)completionGroup;
- (void)setCompletionGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)arg0;
- (long long)state;
- (NSRecursiveLock *)lock;
- (void)setLock:(NSRecursiveLock *)arg0;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (void)setResponseString:(NSString *)arg0;
- (void)setResponseStringEncoding:(uint64_t)arg0;
- (long long)totalBytesRead;
- (void)setTotalBytesRead:(long long)arg0;
- (@)backgroundTaskIdentifier;
- (void)setBackgroundTaskIdentifier:(@)arg0;
- (@?)uploadProgress;
- (void)setUploadProgress:(@?)arg0;
- (@?)downloadProgress;
- (void)setDownloadProgress:(@?)arg0;
- (@?)authenticationChallenge;
- (void)setAuthenticationChallenge:(@?)arg0;
- (@?)cacheResponse;
- (void)setCacheResponse:(@?)arg0;
- (@?)redirectResponse;
- (void)setRedirectResponse:(@?)arg0;
+ (void)networkRequestThreadEntryPoint:(id)arg0;
+ (id)networkRequestThread;
+ (id)batchOfRequestOperations:(id)arg0 progressBlock:(id)arg1 completionBlock:(id)arg2;
+ (char)supportsSecureCoding;
@end
@interface AFQueryStringPair : NSObject
{
	@ _field;
	@ _value;
}
@property (nonatomic, assign) @ field;
@property (nonatomic, assign) @ value;
- (id)initWithField:(id)arg0 value:(id)arg1;
- (id)URLEncodedStringValueWithEncoding:(id)arg0;
// - (void).cxx_destruct;
- (@)field;
- (void)setField:(@)arg0;
- (@)value;
- (void)setValue:(@)arg0;
@end
@interface AFHTTPRequestSerializer : NSObject
{
	BOOL _allowsCellularAccess;
	BOOL _HTTPShouldHandleCookies;
	BOOL _HTTPShouldUsePipelining;
	uint64_t _stringEncoding;
	uint64_t _cachePolicy;
	uint64_t _networkServiceType;
	double _timeoutInterval;
	NSSet * _HTTPMethodsEncodingParametersInURI;
	NSMutableSet * _mutableObservedChangedKeyPaths;
	NSMutableDictionary * _mutableHTTPRequestHeaders;
	uint64_t _queryStringSerializationStyle;
	@? _queryStringSerialization;
}
@property (nonatomic, strong) NSMutableSet * mutableObservedChangedKeyPaths;
@property (nonatomic, strong) NSMutableDictionary * mutableHTTPRequestHeaders;
@property (nonatomic, assign) uint64_t queryStringSerializationStyle;
@property (nonatomic, assign) @? queryStringSerialization;
@property (nonatomic, assign) uint64_t stringEncoding;
@property (nonatomic, assign) BOOL allowsCellularAccess;
@property (nonatomic, assign) uint64_t cachePolicy;
@property (nonatomic, assign) BOOL HTTPShouldHandleCookies;
@property (nonatomic, assign) BOOL HTTPShouldUsePipelining;
@property (nonatomic, assign) uint64_t networkServiceType;
@property (nonatomic, assign) double timeoutInterval;
@property (nonatomic, strong) id HTTPRequestHeaders;
@property (nonatomic, strong) NSSet * HTTPMethodsEncodingParametersInURI;
- (id)init;
- (void)dealloc;
- (void)setAllowsCellularAccess:(BOOL)arg0;
- (void)setCachePolicy:(uint64_t)arg0;
- (void)setHTTPShouldHandleCookies:(id)arg0;
- (void)setHTTPShouldUsePipelining:(id)arg0;
- (void)setNetworkServiceType:(uint64_t)arg0;
- (void)setTimeoutInterval:(double)arg0;
- (id)HTTPRequestHeaders;
- (void)setValue:(id)arg0 forHTTPHeaderField:(id)arg1;
- (id)valueForHTTPHeaderField:(id)arg0;
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg0 password:(id)arg1;
- (void)setAuthorizationHeaderFieldWithToken:(id)arg0;
- (void)clearAuthorizationHeader;
- (void)setQueryStringSerializationWithStyle:(id)arg0;
- (void)setQueryStringSerializationWithBlock:(id)arg0;
- (id)requestWithMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2;
- (id)requestWithMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 error:(id)arg3;
- (id)multipartFormRequestWithMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(id)arg3;
- (id)multipartFormRequestWithMethod:(id)arg0 URLString:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(id)arg3 error:(id)arg4;
- (id)requestWithMultipartFormRequest:(id)arg0 writingStreamContentsToFile:(id)arg1 completionHandler:(id)arg2;
- (id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(id)arg2;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(uint64_t)arg0;
- (char)allowsCellularAccess;
- (unsigned long long)cachePolicy;
- (char)HTTPShouldHandleCookies;
- (char)HTTPShouldUsePipelining;
- (unsigned long long)networkServiceType;
- (double)timeoutInterval;
- (NSSet *)HTTPMethodsEncodingParametersInURI;
- (void)setHTTPMethodsEncodingParametersInURI:(id)arg0;
- (NSMutableSet *)mutableObservedChangedKeyPaths;
- (void)setMutableObservedChangedKeyPaths:(NSMutableSet *)arg0;
- (NSMutableDictionary *)mutableHTTPRequestHeaders;
- (void)setMutableHTTPRequestHeaders:(NSMutableDictionary *)arg0;
- (unsigned long long)queryStringSerializationStyle;
- (void)setQueryStringSerializationStyle:(uint64_t)arg0;
- (@?)queryStringSerialization;
- (void)setQueryStringSerialization:(@?)arg0;
+ (id)serializer;
+ (char)automaticallyNotifiesObserversForKey:(id)arg0;
+ (char)supportsSecureCoding;
@end
@interface AFStreamingMultipartFormData : NSObject
{
	NSMutableURLRequest * _request;
	uint64_t _stringEncoding;
	NSString * _boundary;
	AFMultipartBodyStream * _bodyStream;
}
@property (nonatomic, strong) NSMutableURLRequest * request;
@property (nonatomic, assign) uint64_t stringEncoding;
@property (nonatomic, strong) NSString * boundary;
@property (nonatomic, strong) AFMultipartBodyStream * bodyStream;
- (id)initWithURLRequest:(id)arg0 stringEncoding:(id)arg1;
- (char)appendPartWithFileURL:(id)arg0 name:(id)arg1 error:(id)arg2;
- (char)appendPartWithFileURL:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 error:(id)arg4;
- (void)appendPartWithInputStream:(id)arg0 name:(id)arg1 fileName:(id)arg2 length:(id)arg3 mimeType:(id)arg4;
- (void)appendPartWithFileData:(id)arg0 name:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3;
- (void)appendPartWithFormData:(id)arg0 name:(id)arg1;
- (void)appendPartWithHeaders:(id)arg0 body:(id)arg1;
- (void)throttleBandwidthWithPacketSize:(id)arg0 delay:(id)arg1;
- (id)requestByFinalizingMultipartFormData;
// - (void).cxx_destruct;
- (NSMutableURLRequest *)request;
- (void)setRequest:(NSMutableURLRequest *)arg0;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(uint64_t)arg0;
- (NSString *)boundary;
- (void)setBoundary:(NSString *)arg0;
- (AFMultipartBodyStream *)bodyStream;
- (void)setBodyStream:(AFMultipartBodyStream *)arg0;
@end
@interface AFMultipartBodyStream : NSInputStream
{
	<NSStreamDelegate> * delegate;
	uint64_t streamStatus;
	NSError * streamError;
	uint64_t _numberOfBytesInPacket;
	double _delay;
	NSInputStream * _inputStream;
	uint64_t _stringEncoding;
	NSMutableArray * _HTTPBodyParts;
	NSEnumerator * _HTTPBodyPartEnumerator;
	AFHTTPBodyPart * _currentHTTPBodyPart;
	NSOutputStream * _outputStream;
	NSMutableData * _buffer;
}
@property (nonatomic, assign) uint64_t stringEncoding;
@property (nonatomic, strong) NSMutableArray * HTTPBodyParts;
@property (nonatomic, strong) NSEnumerator * HTTPBodyPartEnumerator;
@property (nonatomic, strong) AFHTTPBodyPart * currentHTTPBodyPart;
@property (nonatomic, strong) NSOutputStream * outputStream;
@property (nonatomic, strong) NSMutableData * buffer;
@property (nonatomic, assign) uint64_t numberOfBytesInPacket;
@property (nonatomic, assign) double delay;
@property (nonatomic, strong) NSInputStream * inputStream;
@property (nonatomic, strong) id contentLength;
@property (nonatomic, strong) id empty;
- (id)initWithStringEncoding:(id)arg0;
- (void)setInitialAndFinalBoundaries;
- (void)appendHTTPBodyPart:(id)arg0;
- (char)isEmpty;
- (long long)read:(id)arg0 maxLength:(id)arg1;
- (char)getBuffer:(id)arg0 length:(id)arg1;
- (char)hasBytesAvailable;
- (void)open;
- (void)close;
- (id)propertyForKey:(id)arg0;
- (char)setProperty:(id)arg0 forKey:(id)arg1;
- (void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1;
- (void)removeFromRunLoop:(id)arg0 forMode:(id)arg1;
- (unsigned long long)contentLength;
- (void)_scheduleInCFRunLoop:(id)arg0 forMode:(id)arg1;
- (void)_unscheduleFromCFRunLoop:(id)arg0 forMode:(id)arg1;
- (char)_setCFClientFlags:(id)arg0 callback:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(<NSStreamDelegate> *)arg0;
- (unsigned long long)streamStatus;
- (void)setStreamStatus:(uint64_t)arg0;
- (id)streamError;
- (void)setStreamError:(NSError *)arg0;
- (unsigned long long)numberOfBytesInPacket;
- (void)setNumberOfBytesInPacket:(uint64_t)arg0;
- (double)delay;
- (void)setDelay:(double)arg0;
- (NSInputStream *)inputStream;
- (void)setInputStream:(NSInputStream *)arg0;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(uint64_t)arg0;
- (NSMutableArray *)HTTPBodyParts;
- (void)setHTTPBodyParts:(id)arg0;
- (NSEnumerator *)HTTPBodyPartEnumerator;
- (void)setHTTPBodyPartEnumerator:(id)arg0;
- (AFHTTPBodyPart *)currentHTTPBodyPart;
- (void)setCurrentHTTPBodyPart:(AFHTTPBodyPart *)arg0;
- (NSOutputStream *)outputStream;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (NSMutableData *)buffer;
- (void)setBuffer:(NSMutableData *)arg0;
@end
@interface AFHTTPBodyPart : NSObject
{
	int _phase;
	NSInputStream * _inputStream;
	uint64_t _phaseReadOffset;
	BOOL _hasInitialBoundary;
	BOOL _hasFinalBoundary;
	uint64_t _stringEncoding;
	NSDictionary * _headers;
	NSString * _boundary;
	@ _body;
	uint64_t _bodyContentLength;
}
@property (nonatomic, assign) uint64_t stringEncoding;
@property (nonatomic, strong) NSDictionary * headers;
@property (nonatomic, strong) NSString * boundary;
@property (nonatomic, assign) @ body;
@property (nonatomic, assign) uint64_t bodyContentLength;
@property (nonatomic, strong) NSInputStream * inputStream;
@property (nonatomic, assign) BOOL hasInitialBoundary;
@property (nonatomic, assign) BOOL hasFinalBoundary;
@property (nonatomic, strong) id bytesAvailable;
@property (nonatomic, strong) id contentLength;
- (id)init;
- (void)dealloc;
- (NSInputStream *)inputStream;
- (id)stringForHeaders;
- (unsigned long long)contentLength;
- (char)hasBytesAvailable;
- (long long)read:(id)arg0 maxLength:(id)arg1;
- (long long)readData:(id)arg0 intoBuffer:(id)arg1 maxLength:(id)arg2;
- (char)transitionToNextPhase;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(uint64_t)arg0;
- (NSDictionary *)headers;
- (void)setHeaders:(NSDictionary *)arg0;
- (NSString *)boundary;
- (void)setBoundary:(NSString *)arg0;
- (@)body;
- (void)setBody:(@)arg0;
- (unsigned long long)bodyContentLength;
- (void)setBodyContentLength:(uint64_t)arg0;
- (void)setInputStream:(NSInputStream *)arg0;
- (char)hasInitialBoundary;
- (void)setHasInitialBoundary:(BOOL)arg0;
- (char)hasFinalBoundary;
- (void)setHasFinalBoundary:(BOOL)arg0;
@end
@interface AFJSONRequestSerializer : AFHTTPRequestSerializer <AFHTTPRequestSerializer>
{
	uint64_t _writingOptions;
}
@property (nonatomic, assign) uint64_t writingOptions;
- (id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (unsigned long long)writingOptions;
- (void)setWritingOptions:(uint64_t)arg0;
+ (id)serializer;
+ (id)serializerWithWritingOptions:(id)arg0;
@end
@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer <AFHTTPRequestSerializer>
{
	uint64_t _format;
	uint64_t _writeOptions;
}
@property (nonatomic, assign) uint64_t format;
@property (nonatomic, assign) uint64_t writeOptions;
- (id)requestBySerializingRequest:(id)arg0 withParameters:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (unsigned long long)format;
- (void)setFormat:(uint64_t)arg0;
- (unsigned long long)writeOptions;
- (void)setWriteOptions:(uint64_t)arg0;
+ (id)serializer;
+ (id)serializerWithFormat:(id)arg0 writeOptions:(id)arg1;
@end
@interface AFHTTPResponseSerializer : NSObject
{
	uint64_t _stringEncoding;
	NSIndexSet * _acceptableStatusCodes;
	NSSet * _acceptableContentTypes;
}
@property (nonatomic, assign) uint64_t stringEncoding;
@property (nonatomic, strong) NSIndexSet * acceptableStatusCodes;
@property (nonatomic, strong) NSSet * acceptableContentTypes;
- (id)init;
- (char)validateResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (unsigned long long)stringEncoding;
- (void)setStringEncoding:(uint64_t)arg0;
- (NSIndexSet *)acceptableStatusCodes;
- (void)setAcceptableStatusCodes:(NSIndexSet *)arg0;
- (NSSet *)acceptableContentTypes;
- (void)setAcceptableContentTypes:(NSSet *)arg0;
+ (id)serializer;
+ (char)supportsSecureCoding;
@end
@interface AFJSONResponseSerializer : AFHTTPResponseSerializer <AFHTTPResponseSerializer>
{
	BOOL _removesKeysWithNullValues;
	uint64_t _readingOptions;
}
@property (nonatomic, assign) uint64_t readingOptions;
@property (nonatomic, assign) BOOL removesKeysWithNullValues;
- (id)init;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (unsigned long long)readingOptions;
- (void)setReadingOptions:(uint64_t)arg0;
- (char)removesKeysWithNullValues;
- (void)setRemovesKeysWithNullValues:(BOOL)arg0;
+ (id)serializer;
+ (id)serializerWithReadingOptions:(id)arg0;
@end
@interface AFXMLParserResponseSerializer : AFHTTPResponseSerializer <AFHTTPResponseSerializer>
- (id)init;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
+ (id)serializer;
@end
@interface AFXMLDocumentResponseSerializer : AFHTTPResponseSerializer <AFHTTPResponseSerializer>
{
	uint64_t _options;
}
@property (nonatomic, assign) uint64_t options;
- (id)init;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (unsigned long long)options;
- (void)setOptions:(uint64_t)arg0;
+ (id)serializer;
+ (id)serializerWithXMLDocumentOptions:(id)arg0;
@end
@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer <AFHTTPResponseSerializer>
{
	uint64_t _format;
	uint64_t _readOptions;
}
@property (nonatomic, assign) uint64_t format;
@property (nonatomic, assign) uint64_t readOptions;
- (id)init;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (unsigned long long)format;
- (void)setFormat:(uint64_t)arg0;
- (unsigned long long)readOptions;
- (void)setReadOptions:(uint64_t)arg0;
+ (id)serializer;
+ (id)serializerWithFormat:(id)arg0 readOptions:(id)arg1;
@end
@interface AFImageResponseSerializer : AFHTTPResponseSerializer <AFHTTPResponseSerializer>
- (id)init;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
@end
@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer <AFHTTPResponseSerializer>
{
	NSArray * _responseSerializers;
}
@property (nonatomic, strong) NSArray * responseSerializers;
- (id)responseObjectForResponse:(id)arg0 data:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (NSArray *)responseSerializers;
- (void)setResponseSerializers:(NSArray *)arg0;
+ (id)compoundSerializerWithResponseSerializers:(id)arg0;
@end
@interface AFURLSessionManagerTaskDelegate : NSObject
{
	AFURLSessionManager * _manager;
	NSMutableData * _mutableData;
	NSProgress * _progress;
	NSURL * _downloadFileURL;
	@? _downloadTaskDidFinishDownloading;
	@? _completionHandler;
}
@property (nonatomic, strong) AFURLSessionManager * manager;
@property (nonatomic, strong) NSMutableData * mutableData;
@property (nonatomic, strong) NSProgress * progress;
@property (nonatomic, strong) NSURL * downloadFileURL;
@property (nonatomic, assign) @? downloadTaskDidFinishDownloading;
@property (nonatomic, assign) @? completionHandler;
- (id)init;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(id)arg2 totalBytesSent:(id)arg3 totalBytesExpectedToSend:(id)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(id)arg2 totalBytesWritten:(id)arg3 totalBytesExpectedToWrite:(id)arg4;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(id)arg2 expectedTotalBytes:(id)arg3;
// - (void).cxx_destruct;
- (AFURLSessionManager *)manager;
- (void)setManager:(AFURLSessionManager *)arg0;
- (NSMutableData *)mutableData;
- (void)setMutableData:(NSMutableData *)arg0;
- (NSProgress *)progress;
- (void)setProgress:(NSProgress *)arg0;
- (NSURL *)downloadFileURL;
- (void)setDownloadFileURL:(NSURL *)arg0;
- (@?)downloadTaskDidFinishDownloading;
- (void)setDownloadTaskDidFinishDownloading:(@?)arg0;
- (@?)completionHandler;
- (void)setCompletionHandler:(@?)arg0;
@end
@interface AFURLSessionManager : NSObject
{
	BOOL _attemptsToRecreateUploadTasksForBackgroundSessions;
	NSURLSession * _session;
	NSOperationQueue * _operationQueue;
	<AFURLResponseSerialization> * _responseSerializer;
	AFSecurityPolicy * _securityPolicy;
	AFNetworkReachabilityManager * _reachabilityManager;
	NSObject<OS_dispatch_queue> * _completionQueue;
	NSObject<OS_dispatch_group> * _completionGroup;
	NSURLSessionConfiguration * _sessionConfiguration;
	NSMutableDictionary * _mutableTaskDelegatesKeyedByTaskIdentifier;
	NSLock * _lock;
	@? _sessionDidBecomeInvalid;
	@? _sessionDidReceiveAuthenticationChallenge;
	@? _didFinishEventsForBackgroundURLSession;
	@? _taskWillPerformHTTPRedirection;
	@? _taskDidReceiveAuthenticationChallenge;
	@? _taskNeedNewBodyStream;
	@? _taskDidSendBodyData;
	@? _taskDidComplete;
	@? _dataTaskDidReceiveResponse;
	@? _dataTaskDidBecomeDownloadTask;
	@? _dataTaskDidReceiveData;
	@? _dataTaskWillCacheResponse;
	@? _downloadTaskDidFinishDownloading;
	@? _downloadTaskDidWriteData;
	@? _downloadTaskDidResume;
}
@property (nonatomic, strong) NSURLSessionConfiguration * sessionConfiguration;
@property (nonatomic, strong) NSOperationQueue * operationQueue;
@property (nonatomic, strong) NSURLSession * session;
@property (nonatomic, strong) NSMutableDictionary * mutableTaskDelegatesKeyedByTaskIdentifier;
@property (nonatomic, strong) id taskDescriptionForSessionTasks;
@property (nonatomic, strong) NSLock * lock;
@property (nonatomic, assign) @? sessionDidBecomeInvalid;
@property (nonatomic, assign) @? sessionDidReceiveAuthenticationChallenge;
@property (nonatomic, assign) @? didFinishEventsForBackgroundURLSession;
@property (nonatomic, assign) @? taskWillPerformHTTPRedirection;
@property (nonatomic, assign) @? taskDidReceiveAuthenticationChallenge;
@property (nonatomic, assign) @? taskNeedNewBodyStream;
@property (nonatomic, assign) @? taskDidSendBodyData;
@property (nonatomic, assign) @? taskDidComplete;
@property (nonatomic, assign) @? dataTaskDidReceiveResponse;
@property (nonatomic, assign) @? dataTaskDidBecomeDownloadTask;
@property (nonatomic, assign) @? dataTaskDidReceiveData;
@property (nonatomic, assign) @? dataTaskWillCacheResponse;
@property (nonatomic, assign) @? downloadTaskDidFinishDownloading;
@property (nonatomic, assign) @? downloadTaskDidWriteData;
@property (nonatomic, assign) @? downloadTaskDidResume;
@property (nonatomic, strong) <AFURLResponseSerialization> * responseSerializer;
@property (nonatomic, strong) AFSecurityPolicy * securityPolicy;
@property (nonatomic, strong) AFNetworkReachabilityManager * reachabilityManager;
@property (nonatomic, strong) id tasks;
@property (nonatomic, strong) id dataTasks;
@property (nonatomic, strong) id uploadTasks;
@property (nonatomic, strong) id downloadTasks;
@property (nonatomic, strong) NSObject<OS_dispatch_queue> * completionQueue;
@property (nonatomic, strong) NSObject<OS_dispatch_group> * completionGroup;
@property (nonatomic, assign) BOOL attemptsToRecreateUploadTasksForBackgroundSessions;
- (id)init;
- (id)initWithSessionConfiguration:(id)arg0;
- (void)dealloc;
- (id)taskDescriptionForSessionTasks;
- (void)taskDidResume:(id)arg0;
- (void)taskDidSuspend:(id)arg0;
- (id)delegateForTask:(id)arg0;
- (void)setDelegate:(id)arg0 forTask:(id)arg1;
- (void)addDelegateForDataTask:(id)arg0 completionHandler:(id)arg1;
- (void)addDelegateForUploadTask:(id)arg0 progress:(id)arg1 completionHandler:(id)arg2;
- (void)addDelegateForDownloadTask:(id)arg0 progress:(id)arg1 destination:(id)arg2 completionHandler:(id)arg3;
- (void)removeDelegateForTask:(id)arg0;
- (void)removeAllDelegates;
- (id)tasksForKeyPath:(id)arg0;
- (id)tasks;
- (id)dataTasks;
- (id)uploadTasks;
- (id)downloadTasks;
- (void)invalidateSessionCancelingTasks:(id)arg0;
- (void)setResponseSerializer:(<AFURLResponseSerialization> *)arg0;
- (id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 progress:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTaskWithRequest:(id)arg0 fromData:(id)arg1 progress:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg0 progress:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithRequest:(id)arg0 progress:(id)arg1 destination:(id)arg2 completionHandler:(id)arg3;
- (id)downloadTaskWithResumeData:(id)arg0 progress:(id)arg1 destination:(id)arg2 completionHandler:(id)arg3;
- (id)uploadProgressForTask:(id)arg0;
- (id)downloadProgressForTask:(id)arg0;
- (void)setSessionDidBecomeInvalidBlock:(id)arg0;
- (void)setSessionDidReceiveAuthenticationChallengeBlock:(id)arg0;
- (void)setDidFinishEventsForBackgroundURLSessionBlock:(id)arg0;
- (void)setTaskNeedNewBodyStreamBlock:(id)arg0;
- (void)setTaskWillPerformHTTPRedirectionBlock:(id)arg0;
- (void)setTaskDidReceiveAuthenticationChallengeBlock:(id)arg0;
- (void)setTaskDidSendBodyDataBlock:(id)arg0;
- (void)setTaskDidCompleteBlock:(id)arg0;
- (void)setDataTaskDidReceiveResponseBlock:(id)arg0;
- (void)setDataTaskDidBecomeDownloadTaskBlock:(id)arg0;
- (void)setDataTaskDidReceiveDataBlock:(id)arg0;
- (void)setDataTaskWillCacheResponseBlock:(id)arg0;
- (void)setDownloadTaskDidFinishDownloadingBlock:(id)arg0;
- (void)setDownloadTaskDidWriteDataBlock:(id)arg0;
- (void)setDownloadTaskDidResumeBlock:(id)arg0;
- (id)description;
- (char)respondsToSelector:(id)arg0;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg0 task:(id)arg1 needNewBodyStream:(id)arg2;
- (void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(id)arg2 totalBytesSent:(id)arg3 totalBytesExpectedToSend:(id)arg4;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSession:(id)arg0 dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didWriteData:(id)arg2 totalBytesWritten:(id)arg3 totalBytesExpectedToWrite:(id)arg4;
- (void)URLSession:(id)arg0 downloadTask:(id)arg1 didResumeAtOffset:(id)arg2 expectedTotalBytes:(id)arg3;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
// - (void).cxx_destruct;
- (NSURLSession *)session;
- (void)setSession:(NSURLSession *)arg0;
- (NSOperationQueue *)operationQueue;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (<AFURLResponseSerialization> *)responseSerializer;
- (AFSecurityPolicy *)securityPolicy;
- (void)setSecurityPolicy:(AFSecurityPolicy *)arg0;
- (AFNetworkReachabilityManager *)reachabilityManager;
- (void)setReachabilityManager:(AFNetworkReachabilityManager *)arg0;
- (NSObject<OS_dispatch_queue> *)completionQueue;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_group> *)completionGroup;
- (void)setCompletionGroup:(NSObject<OS_dispatch_group> *)arg0;
- (char)attemptsToRecreateUploadTasksForBackgroundSessions;
- (void)setAttemptsToRecreateUploadTasksForBackgroundSessions:(BOOL)arg0;
- (NSURLSessionConfiguration *)sessionConfiguration;
- (void)setSessionConfiguration:(NSURLSessionConfiguration *)arg0;
- (NSMutableDictionary *)mutableTaskDelegatesKeyedByTaskIdentifier;
- (void)setMutableTaskDelegatesKeyedByTaskIdentifier:(NSMutableDictionary *)arg0;
- (NSLock *)lock;
- (void)setLock:(NSLock *)arg0;
- (@?)sessionDidBecomeInvalid;
- (void)setSessionDidBecomeInvalid:(@?)arg0;
- (@?)sessionDidReceiveAuthenticationChallenge;
- (void)setSessionDidReceiveAuthenticationChallenge:(@?)arg0;
- (@?)didFinishEventsForBackgroundURLSession;
- (void)setDidFinishEventsForBackgroundURLSession:(@?)arg0;
- (@?)taskWillPerformHTTPRedirection;
- (void)setTaskWillPerformHTTPRedirection:(@?)arg0;
- (@?)taskDidReceiveAuthenticationChallenge;
- (void)setTaskDidReceiveAuthenticationChallenge:(@?)arg0;
- (@?)taskNeedNewBodyStream;
- (void)setTaskNeedNewBodyStream:(@?)arg0;
- (@?)taskDidSendBodyData;
- (void)setTaskDidSendBodyData:(@?)arg0;
- (@?)taskDidComplete;
- (void)setTaskDidComplete:(@?)arg0;
- (@?)dataTaskDidReceiveResponse;
- (void)setDataTaskDidReceiveResponse:(@?)arg0;
- (@?)dataTaskDidBecomeDownloadTask;
- (void)setDataTaskDidBecomeDownloadTask:(@?)arg0;
- (@?)dataTaskDidReceiveData;
- (void)setDataTaskDidReceiveData:(@?)arg0;
- (@?)dataTaskWillCacheResponse;
- (void)setDataTaskWillCacheResponse:(@?)arg0;
- (@?)downloadTaskDidFinishDownloading;
- (void)setDownloadTaskDidFinishDownloading:(@?)arg0;
- (@?)downloadTaskDidWriteData;
- (void)setDownloadTaskDidWriteData:(@?)arg0;
- (@?)downloadTaskDidResume;
- (void)setDownloadTaskDidResume:(@?)arg0;
+ (char)supportsSecureCoding;
@end
@interface PodsDummy_Pods_Annotate_AFNetworking : NSObject
@end
@interface PodsDummy_Pods_Annotate_AFNetworking_RACExtensions : NSObject
@end
@interface DFTAbstractManager : NSObject
- (id)sessionManagerWithBaseURL:(id)arg0;
- (id)sessionManagerWithBaseURL:(id)arg0 requestSerializerClass:(id)arg1;
+ (id)defaultManager;
@end
@interface DFTAnnotation : NSObject
{
	I _userID;
	NSString * _annotationID;
	NSString * _fileName;
	NSDate * _createdAt;
	NSURL * _fileURL;
}
@property (nonatomic, strong) NSString * annotationID;
@property (nonatomic, strong) NSString * fileName;
@property (nonatomic, strong) NSDate * createdAt;
@property (nonatomic, assign) I userID;
@property (nonatomic, strong) NSURL * fileURL;
- (id)initWithJSON:(id)arg0;
// - (void).cxx_destruct;
- (NSString *)annotationID;
- (void)setAnnotationID:(NSString *)arg0;
- (NSString *)fileName;
- (void)setFileName:(NSString *)arg0;
- (NSDate *)createdAt;
- (void)setCreatedAt:(NSDate *)arg0;
- (unsigned int)userID;
- (void)setUserID:(I)arg0;
- (NSURL *)fileURL;
- (void)setFileURL:(NSURL *)arg0;
@end
@interface DFTAnnotationManager : DFTAbstractManager <DFTAbstractManager>
{
	RACSignal * _myAnnotationsSignal;
	RACSubject * _fetchMyAnnotationsSubject;
}
@property (nonatomic, strong) RACSignal * myAnnotationsSignal;
@property (nonatomic, strong) RACSubject * fetchMyAnnotationsSubject;
@property (nonatomic, strong) id uploadsRemainingCountSignal;
- (void)initializeUploadPipeline;
- (void)enqueueAnnotationUploadData:(id)arg0 fileName:(id)arg1;
- (id)uploadsRemainingCountSignal;
- (RACSignal *)myAnnotationsSignal;
- (id)annotationsFromJSON:(id)arg0;
- (void)fetchMyAnnotations;
- (id)sessionManager;
// - (void).cxx_destruct;
- (void)setMyAnnotationsSignal:(RACSignal *)arg0;
- (RACSubject *)fetchMyAnnotationsSubject;
- (void)setFetchMyAnnotationsSubject:(RACSubject *)arg0;
+ (id)defaultManager;
@end
@interface DFTAnnotationUploadManager : DFTAbstractManager <DFTAbstractManager>
{
	int _uploadsRemaining;
	RACSignal * _uploadsRemainingCountSignal;
	RACSubject * _uploadsRemainingCountSubject;
	NSURL * _queuedUploadsDirectory;
}
@property (nonatomic, strong) RACSubject * uploadsRemainingCountSubject;
@property (nonatomic, strong) NSURL * queuedUploadsDirectory;
@property (nonatomic, assign) int uploadsRemaining;
@property (nonatomic, strong) RACSignal * uploadsRemainingCountSignal;
- (void)enqueueAnnotationUploadData:(id)arg0 fileName:(id)arg1;
- (char)initializeUploadPipeline;
- (char)_initializeUploadPipeline;
- (void)initializeUploadsRemaining;
- (void)incrementUploadsRemaining;
- (void)decrementUploadsRemaining;
- (char)ensureTopDirectory;
- (char)ensureDirectory:(id)arg0;
- (id)directoryForUser:(id)arg0;
- (id)uniqueFileNameForFileName:(id)arg0;
- (id)fileNameForUniqueFileName:(id)arg0;
- (id)maybeEnqueueAnnotationData:(id)arg0 fileName:(id)arg1;
- (id)writeQueuedAnnotationData:(id)arg0 fileName:(id)arg1 user:(id)arg2;
- (id)onDiskFileURLsForCurrentUser;
- (id)removeFileAtURL:(id)arg0;
- (id)shouldUploadSignal;
- (id)uploadAnnotationAtURL:(id)arg0 withName:(id)arg1 remaining:(id)arg2;
- (id)requestUploadPermissionForAnnotationName:(id)arg0 fileURL:(id)arg1;
- (id)uploadAnnotationWithPermissionResponse:(id)arg0 fileURL:(id)arg1 fileName:(id)arg2 remaining:(id)arg3;
- (id)completeUploadForAnnotationID:(id)arg0 uploadID:(id)arg1;
- (id)sessionManager;
- (void)waitUntilTrue:(id)arg0;
// - (void).cxx_destruct;
- (RACSignal *)uploadsRemainingCountSignal;
- (RACSubject *)uploadsRemainingCountSubject;
- (void)setUploadsRemainingCountSubject:(RACSubject *)arg0;
- (NSURL *)queuedUploadsDirectory;
- (void)setQueuedUploadsDirectory:(NSURL *)arg0;
- (int)uploadsRemaining;
- (void)setUploadsRemaining:(int)arg0;
+ (id)defaultManager;
@end
@interface DFTAuthManager : DFTAbstractManager <DFTAbstractManager>
{
	RACSubject * _logInSignals;
	AFHTTPSessionManager * _sessionManagerWithJSONRequest;
	AFHTTPSessionManager * _sessionManagerWithHTTPRequest;
}
@property (nonatomic, strong) RACSubject * logInSignals;
@property (nonatomic, strong) AFHTTPSessionManager * sessionManagerWithJSONRequest;
@property (nonatomic, strong) AFHTTPSessionManager * sessionManagerWithHTTPRequest;
@property (nonatomic, strong) id accessTokenSignal;
@property (nonatomic, strong) id loggedInSignal;
- (id)init;
- (id)accessTokenSignal;
- (id)loggedInSignal;
- (void)logOut;
- (id)logInWithUsername:(id)arg0 password:(id)arg1;
- (id)logInSignalWithUsername:(id)arg0 password:(id)arg1;
- (id)fetchOAuthTokenWithUsername:(id)arg0 password:(id)arg1;
- (id)signUpAsAnonymousUser;
- (id)signUpWithUsername:(id)arg0 password:(id)arg1;
- (id)signUpWithUsername:(id)arg0 password:(id)arg1 isAnonymous:(id)arg2;
- (id)registerUserWithUsername:(id)arg0 password:(id)arg1 isAnonymous:(id)arg2;
- (id)accessTokenFromKeychain;
- (void)saveTokenToKeychain:(id)arg0;
- (void)clearAccessTokenFromKeychain;
- (id)keychainAuthTokenServiceName;
// - (void).cxx_destruct;
- (RACSubject *)logInSignals;
- (void)setLogInSignals:(RACSubject *)arg0;
- (AFHTTPSessionManager *)sessionManagerWithJSONRequest;
- (void)setSessionManagerWithJSONRequest:(AFHTTPSessionManager *)arg0;
- (AFHTTPSessionManager *)sessionManagerWithHTTPRequest;
- (void)setSessionManagerWithHTTPRequest:(AFHTTPSessionManager *)arg0;
+ (id)defaultManager;
@end
@interface DFTError : NSError
+ (id)errorWithCode:(id)arg0 message:(id)arg1;
@end
@interface DFTIllegalStateError : DFTError <DFTError>
@end
@interface DFTUnsupportedOperationError : DFTError <DFTError>
@end
@interface DFTGrowthManager : DFTAbstractManager <DFTAbstractManager>
{
	RACSignal * _questionSignal;
	RACSubject * _fetchQuestionSubject;
}
@property (nonatomic, strong) RACSignal * questionSignal;
@property (nonatomic, strong) RACSubject * fetchQuestionSubject;
- (void)maybeFetchQuestion;
- (id)postResponse:(id)arg0 forQuestionID:(id)arg1;
- (RACSignal *)questionSignal;
- (id)sessionManager;
- (char)isSufficientTimeSinceLastQuestion;
- (char)isSufficientMinLaunches;
// - (void).cxx_destruct;
- (void)setQuestionSignal:(RACSignal *)arg0;
- (RACSubject *)fetchQuestionSubject;
- (void)setFetchQuestionSubject:(RACSubject *)arg0;
+ (id)defaultManager;
@end
@interface DFTGrowthQuestion : NSObject
{
	NSNumber * _questionID;
	NSString * _label;
	NSString * _type;
}
@property (nonatomic, strong) NSNumber * questionID;
@property (nonatomic, strong) NSString * label;
@property (nonatomic, strong) NSString * type;
- (id)initWithJSON:(id)arg0;
// - (void).cxx_destruct;
- (NSNumber *)questionID;
- (void)setQuestionID:(NSNumber *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSString *)type;
- (void)setType:(NSString *)arg0;
@end
@interface DFTUser : NSObject
{
	BOOL _isAnonymous;
	NSNumber * _userID;
	NSString * _name;
	NSString * _email;
	NSString * _avatarURLPath;
	NSString * _firstName;
	NSString * _timeZone;
}
@property (nonatomic, strong) NSNumber * userID;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * email;
@property (nonatomic, strong) NSString * avatarURLPath;
@property (nonatomic, strong) NSString * firstName;
@property (nonatomic, strong) NSString * timeZone;
@property (nonatomic, assign) BOOL isAnonymous;
- (id)initWithJSON:(id)arg0;
- (id)displayName;
- (id)displayNameShort;
// - (void).cxx_destruct;
- (NSNumber *)userID;
- (void)setUserID:(NSNumber *)arg0;
- (NSString *)name;
- (void)setName:(NSString *)arg0;
- (NSString *)email;
- (void)setEmail:(NSString *)arg0;
- (NSString *)avatarURLPath;
- (void)setAvatarURLPath:(NSString *)arg0;
- (NSString *)firstName;
- (void)setFirstName:(NSString *)arg0;
- (NSString *)timeZone;
- (void)setTimeZone:(NSString *)arg0;
- (char)isAnonymous;
- (void)setIsAnonymous:(BOOL)arg0;
@end
@interface DFTUserManager : DFTAbstractManager <DFTAbstractManager>
{
	RACSignal * _meSignal;
	RACSubject * _fetchMeSubject;
	RACSubject * _fetchUsersSubject;
}
@property (nonatomic, strong) RACSubject * fetchMeSubject;
@property (nonatomic, strong) RACSubject * fetchUsersSubject;
@property (nonatomic, strong) RACSignal * meSignal;
- (id)init;
- (id)anonymousSignal;
- (void)fetchMe;
- (RACSignal *)meSignal;
- (id)updateCurrentUserWithParams:(id)arg0;
- (id)sessionManager;
// - (void).cxx_destruct;
- (void)setMeSignal:(RACSignal *)arg0;
- (RACSubject *)fetchMeSubject;
- (void)setFetchMeSubject:(RACSubject *)arg0;
- (RACSubject *)fetchUsersSubject;
- (void)setFetchUsersSubject:(RACSubject *)arg0;
+ (id)defaultManager;
@end
@interface PodsDummy_Pods_Annotate_DrifttShared : NSObject
@end
@interface DBAccountInfo : NSObject
{
	NSString * email;
	NSString * country;
	NSString * displayName;
	DBQuota * quota;
	NSString * userId;
	NSString * referralLink;
	NSDictionary * original;
}
@property (nonatomic, strong) NSString * email;
@property (nonatomic, strong) NSString * country;
@property (nonatomic, strong) NSString * displayName;
@property (nonatomic, strong) DBQuota * quota;
@property (nonatomic, strong) NSString * userId;
@property (nonatomic, strong) NSString * referralLink;
- (id)initWithDictionary:(id)arg0;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (NSString *)email;
- (NSString *)country;
- (NSString *)displayName;
- (DBQuota *)quota;
- (NSString *)userId;
- (NSString *)referralLink;
@end
@interface DBAuthHelperOSX : NSObject
{
	BOOL loading;
	DBRestClient * restClient;
}
@property (nonatomic, strong) DBRestClient * restClient;
@property (nonatomic, assign) BOOL loading;
- (id)init;
- (void)dealloc;
- (void)authenticate;
- (void)restClientLoadedRequestToken:(id)arg0;
- (void)restClient:(id)arg0 loadRequestTokenFailedWithError:(id)arg1;
- (void)restClientLoadedAccessToken:(id)arg0;
- (void)restClient:(id)arg0 loadAccessTokenFailedWithError:(id)arg1;
- (void)postStateChangedNotification:(id)arg0;
- (DBRestClient *)restClient;
- (void)applicationDidBecomeActive:(id)arg0;
- (char)isLoading;
+ (id)sharedHelper;
@end
@interface DBDeltaEntry : NSObject
{
	NSString * lowercasePath;
	DBMetadata * metadata;
}
@property (nonatomic, strong) NSString * lowercasePath;
@property (nonatomic, strong) DBMetadata * metadata;
- (id)initWithArray:(id)arg0;
- (void)dealloc;
- (char)isEqualToDeltaEntry:(id)arg0;
- (char)isEqual:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (NSString *)lowercasePath;
- (DBMetadata *)metadata;
@end
@interface DBJSON : DBJsonBase <DBJsonBase>
{
	DBJsonParser * jsonParser;
	DBJsonWriter * jsonWriter;
}
@property (nonatomic, strong) id humanReadable;
@property (nonatomic, strong) id sortKeys;
- (id)init;
- (void)dealloc;
- (id)stringWithObject:(id)arg0;
- (id)stringWithObject:(id)arg0 allowScalar:(id)arg1 error:(id)arg2;
- (id)stringWithFragment:(id)arg0 error:(id)arg1;
- (id)stringWithObject:(id)arg0 error:(id)arg1;
- (id)objectWithString:(id)arg0;
- (id)objectWithString:(id)arg0 allowScalar:(id)arg1 error:(id)arg2;
- (id)fragmentWithString:(id)arg0 error:(id)arg1;
- (id)objectWithString:(id)arg0 error:(id)arg1;
- (unsigned long long)maxDepth;
- (void)setMaxDepth:(id)arg0;
- (char)humanReadable;
- (void)setHumanReadable:(id)arg0;
- (char)sortKeys;
- (void)setSortKeys:(id)arg0;
@end
@interface DBJsonBase : NSObject
{
	NSMutableArray * errorTrace;
	uint64_t depth;
	uint64_t maxDepth;
}
@property (nonatomic, assign) uint64_t maxDepth;
@property (nonatomic, strong) NSMutableArray * errorTrace;
- (id)init;
- (void)dealloc;
- (void)addErrorWithCode:(id)arg0 description:(id)arg1;
- (void)clearErrorTrace;
- (NSMutableArray *)errorTrace;
- (unsigned long long)maxDepth;
- (void)setMaxDepth:(uint64_t)arg0;
@end
@interface DBJsonParser : DBJsonBase <DBJsonBase>
{
	r* c;
}
- (id)fragmentWithString:(id)arg0;
- (id)objectWithString:(id)arg0;
- (char)scanValue:(id)arg0;
- (char)scanRestOfTrue:(id)arg0;
- (char)scanRestOfFalse:(id)arg0;
- (char)scanRestOfNull:(id)arg0;
- (char)scanRestOfArray:(id)arg0;
- (char)scanRestOfDictionary:(id)arg0;
- (char)scanRestOfString:(id)arg0;
- (char)scanUnicodeChar:(id)arg0;
- (char)scanHexQuad:(id)arg0;
- (char)scanNumber:(id)arg0;
- (char)scanIsAtEnd;
+ (void)initialize;
@end
@interface DBJsonWriter : DBJsonBase <DBJsonBase>
{
	BOOL sortKeys;
	BOOL humanReadable;
}
@property (nonatomic, assign) BOOL humanReadable;
@property (nonatomic, assign) BOOL sortKeys;
- (id)stringWithFragment:(id)arg0;
- (id)stringWithObject:(id)arg0;
- (id)indent;
- (char)appendValue:(id)arg0 into:(id)arg1;
- (char)appendArray:(id)arg0 into:(id)arg1;
- (char)appendDictionary:(id)arg0 into:(id)arg1;
- (char)appendString:(id)arg0 into:(id)arg1;
- (char)sortKeys;
- (void)setSortKeys:(BOOL)arg0;
- (char)humanReadable;
- (void)setHumanReadable:(BOOL)arg0;
+ (void)initialize;
@end
@interface DBKeychain : NSObject
+ (void)initialize;
+ (id)itemRef;
+ (void)setItemRef:(id)arg0;
+ (id)credentials;
+ (void)setCredentials:(id)arg0;
+ (void)deleteCredentials;
@end
@interface DBMetadata : NSObject
{
	BOOL thumbnailExists;
	long long totalBytes;
	NSDate * lastModifiedDate;
	NSDate * clientMtime;
	NSString * path;
	BOOL isDirectory;
	NSArray * contents;
	NSString * hash;
	NSString * humanReadableSize;
	NSString * root;
	NSString * icon;
	NSString * rev;
	long long revision;
	BOOL isDeleted;
	NSString * filename;
}
@property (nonatomic, assign) BOOL thumbnailExists;
@property (nonatomic, assign) long long totalBytes;
@property (nonatomic, strong) NSDate * lastModifiedDate;
@property (nonatomic, strong) NSDate * clientMtime;
@property (nonatomic, strong) NSString * path;
@property (nonatomic, assign) BOOL isDirectory;
@property (nonatomic, strong) NSArray * contents;
@property (nonatomic, strong) NSString * humanReadableSize;
@property (nonatomic, strong) NSString * root;
@property (nonatomic, strong) NSString * icon;
@property (nonatomic, assign) long long revision;
@property (nonatomic, strong) NSString * rev;
@property (nonatomic, assign) BOOL isDeleted;
@property (nonatomic, strong) NSString * filename;
- (id)initWithDictionary:(id)arg0;
- (void)dealloc;
- (char)isEqual:(id)arg0;
- (NSString *)filename;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (char)thumbnailExists;
- (long long)totalBytes;
- (NSDate *)lastModifiedDate;
- (NSDate *)clientMtime;
- (NSString *)path;
- (char)isDirectory;
- (NSArray *)contents;
- (NSString *)hash;
- (NSString *)humanReadableSize;
- (NSString *)root;
- (NSString *)icon;
- (NSString *)rev;
- (long long)revision;
- (char)isDeleted;
+ (id)dateFormatter;
@end
@interface DBQuota : NSObject
{
	long long normalConsumedBytes;
	long long sharedConsumedBytes;
	long long totalBytes;
}
@property (nonatomic, assign) long long normalConsumedBytes;
@property (nonatomic, assign) long long sharedConsumedBytes;
@property (nonatomic, strong) id totalConsumedBytes;
@property (nonatomic, assign) long long totalBytes;
- (id)initWithDictionary:(id)arg0;
- (void)dealloc;
- (long long)totalConsumedBytes;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (long long)normalConsumedBytes;
- (long long)sharedConsumedBytes;
- (long long)totalBytes;
@end
@interface DBRequest : NSObject
{
	NSURLRequest * request;
	@ target;
	: selector;
	NSURLConnection * urlConnection;
	NSFileHandle * fileHandle;
	NSFileManager * fileManager;
	: failureSelector;
	: downloadProgressSelector;
	: uploadProgressSelector;
	NSString * resultFilename;
	NSString * tempFilename;
	NSDictionary * userInfo;
	NSString * sourcePath;
	NSHTTPURLResponse * response;
	NSDictionary * xDropboxMetadataJSON;
	long long bytesDownloaded;
	double downloadProgress;
	double uploadProgress;
	NSMutableData * resultData;
	NSError * error;
}
@property (nonatomic, strong) NSFileManager * fileManager;
@property (nonatomic, assign) : failureSelector;
@property (nonatomic, assign) : downloadProgressSelector;
@property (nonatomic, assign) : uploadProgressSelector;
@property (nonatomic, strong) NSString * resultFilename;
@property (nonatomic, strong) NSDictionary * userInfo;
@property (nonatomic, strong) NSString * sourcePath;
@property (nonatomic, strong) NSURLRequest * request;
@property (nonatomic, strong) NSHTTPURLResponse * response;
@property (nonatomic, strong) NSDictionary * xDropboxMetadataJSON;
@property (nonatomic, strong) id statusCode;
@property (nonatomic, assign) double downloadProgress;
@property (nonatomic, assign) double uploadProgress;
@property (nonatomic, strong) NSMutableData * resultData;
@property (nonatomic, strong) id resultString;
@property (nonatomic, strong) id resultJSON;
@property (nonatomic, strong) NSError * error;
- (id)initWithURLRequest:(id)arg0 andInformTarget:(id)arg1 selector:(id)arg2;
- (void)dealloc;
- (id)resultString;
- (id)resultJSON;
- (long long)statusCode;
- (long long)responseBodySize;
- (void)cancel;
- (id)parseResponseAsType:(id)arg0;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg0;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (void)connection:(id)arg0 didSendBodyData:(id)arg1 totalBytesWritten:(id)arg2 totalBytesExpectedToWrite:(id)arg3;
- (id)connection:(id)arg0 willCacheResponse:(id)arg1;
- (id)connection:(id)arg0 needNewBodyStream:(id)arg1;
- (void)setError:(NSError *)arg0;
- (void)connection:(id)arg0 willSendRequestForAuthenticationChallenge:(id)arg1;
- (:)failureSelector;
- (void)setFailureSelector:(:)arg0;
- (NSFileManager *)fileManager;
- (void)setFileManager:(NSFileManager *)arg0;
- (:)downloadProgressSelector;
- (void)setDownloadProgressSelector:(:)arg0;
- (:)uploadProgressSelector;
- (void)setUploadProgressSelector:(:)arg0;
- (NSDictionary *)userInfo;
- (void)setUserInfo:(NSDictionary *)arg0;
- (NSString *)sourcePath;
- (void)setSourcePath:(NSString *)arg0;
- (NSURLRequest *)request;
- (NSHTTPURLResponse *)response;
- (NSDictionary *)xDropboxMetadataJSON;
- (double)downloadProgress;
- (double)uploadProgress;
- (NSMutableData *)resultData;
- (NSString *)resultFilename;
- (void)setResultFilename:(NSString *)arg0;
- (NSError *)error;
+ (void)setNetworkRequestDelegate:(id)arg0;
+ (int)readLength:(id)arg0 fromBuffer:(id)arg1 ofLength:(id)arg2 atIndex:(id)arg3;
+ (id)copySerialFromCertificate:(id)arg0 certificateLength:(id)arg1;
+ (BOOL)isRevokedCertificate:(id)arg0;
+ (id)rootCertificates;
@end
@interface DBRestClient : NSObject
{
	DBSession * session;
	NSString * userId;
	NSString * root;
	NSMutableSet * requests;
	NSMutableDictionary * loadRequests;
	NSMutableDictionary * imageLoadRequests;
	NSMutableDictionary * uploadRequests;
	<DBRestClientDelegate> * delegate;
}
@property (nonatomic, strong) id credentialStore;
@property (nonatomic, strong) <DBRestClientDelegate> * delegate;
- (void)parse:(id)arg0 intoToken:(id)arg1 secret:(id)arg2 userId:(id)arg3;
- (void)loadRequestToken;
- (void)requestDidLoadRequestToken:(id)arg0;
- (char)requestTokenLoaded;
- (id)authorizeURL;
- (void)loadAccessToken;
- (void)requestDidLoadAccessToken:(id)arg0;
- (id)initWithSession:(id)arg0 userId:(id)arg1;
- (id)initWithSession:(id)arg0;
- (void)cancelAllRequests;
- (void)dealloc;
- (void)loadMetadata:(id)arg0 withParams:(id)arg1;
- (void)loadMetadata:(id)arg0;
- (void)loadMetadata:(id)arg0 withHash:(id)arg1;
- (void)loadMetadata:(id)arg0 atRev:(id)arg1;
- (void)requestDidLoadMetadata:(id)arg0;
- (void)parseMetadataWithRequest:(id)arg0 resultThread:(id)arg1;
- (void)didParseMetadata:(id)arg0;
- (void)parseMetadataFailedForRequest:(id)arg0;
- (void)loadDelta:(id)arg0;
- (void)requestDidLoadDelta:(id)arg0;
- (void)parseDeltaWithRequest:(id)arg0 resultThread:(id)arg1;
- (void)parseDeltaFailedForRequest:(id)arg0;
- (void)loadFile:(id)arg0 atRev:(id)arg1 intoPath:(id)arg2;
- (void)loadFile:(id)arg0 intoPath:(id)arg1;
- (void)cancelFileLoad:(id)arg0;
- (void)requestLoadProgress:(id)arg0;
- (void)restClient:(id)arg0 loadedFile:(id)arg1 contentType:(id)arg2 eTag:(id)arg3;
- (void)requestDidLoadFile:(id)arg0;
- (id)thumbnailKeyForPath:(id)arg0 size:(id)arg1;
- (void)loadThumbnail:(id)arg0 ofSize:(id)arg1 intoPath:(id)arg2;
- (void)requestDidLoadThumbnail:(id)arg0;
- (void)cancelThumbnailLoad:(id)arg0 size:(id)arg1;
- (id)signatureForParams:(id)arg0 url:(id)arg1;
- (id)requestForParams:(id)arg0 urlString:(id)arg1 signature:(id)arg2;
- (void)uploadFile:(id)arg0 toPath:(id)arg1 fromPath:(id)arg2 params:(id)arg3;
- (void)uploadFile:(id)arg0 toPath:(id)arg1 fromPath:(id)arg2;
- (void)uploadFile:(id)arg0 toPath:(id)arg1 withParentRev:(id)arg2 fromPath:(id)arg3;
- (void)requestUploadProgress:(id)arg0;
- (void)requestDidUploadFile:(id)arg0;
- (void)cancelFileUpload:(id)arg0;
- (void)uploadFileChunk:(id)arg0 offset:(id)arg1 fromPath:(id)arg2;
- (void)requestChunkedUploadProgress:(id)arg0;
- (void)requestDidUploadChunk:(id)arg0;
- (void)uploadFile:(id)arg0 toPath:(id)arg1 withParentRev:(id)arg2 fromUploadId:(id)arg3;
- (void)requestDidUploadFromUploadId:(id)arg0;
- (void)loadRevisionsForFile:(id)arg0;
- (void)loadRevisionsForFile:(id)arg0 limit:(id)arg1;
- (void)requestDidLoadRevisions:(id)arg0;
- (void)restoreFile:(id)arg0 toRev:(id)arg1;
- (void)requestDidRestoreFile:(id)arg0;
- (void)moveFrom:(id)arg0 toPath:(id)arg1;
- (void)requestDidMovePath:(id)arg0;
- (void)copyFrom:(id)arg0 toPath:(id)arg1;
- (void)requestDidCopyPath:(id)arg0;
- (void)createCopyRef:(id)arg0;
- (void)requestDidCreateCopyRef:(id)arg0;
- (void)copyFromRef:(id)arg0 toPath:(id)arg1;
- (void)requestDidCopyFromRef:(id)arg0;
- (void)deletePath:(id)arg0;
- (void)requestDidDeletePath:(id)arg0;
- (void)createFolder:(id)arg0;
- (void)requestDidCreateDirectory:(id)arg0;
- (void)loadAccountInfo;
- (void)requestDidLoadAccountInfo:(id)arg0;
- (void)searchPath:(id)arg0 forKeyword:(id)arg1;
- (void)requestDidSearchPath:(id)arg0;
- (void)loadSharableLinkForFile:(id)arg0;
- (void)loadSharableLinkForFile:(id)arg0 shortUrl:(id)arg1;
- (void)requestDidLoadSharableLink:(id)arg0;
- (void)loadStreamableURLForFile:(id)arg0;
- (void)requestDidLoadStreamableURL:(id)arg0;
- (unsigned long long)requestCount;
- (id)requestWithHost:(id)arg0 path:(id)arg1 parameters:(id)arg2;
- (id)requestWithHost:(id)arg0 path:(id)arg1 parameters:(id)arg2 method:(id)arg3;
- (void)checkForAuthenticationFailure:(id)arg0;
- (id)credentialStore;
- (<DBRestClientDelegate> *)delegate;
- (void)setDelegate:(<DBRestClientDelegate> *)arg0;
+ (id)escapePath:(id)arg0;
+ (id)bestLanguage;
+ (id)userAgent;
@end
@interface DBSession : NSObject
{
	NSDictionary * baseCredentials;
	NSMutableDictionary * credentialStores;
	MPOAuthCredentialConcreteStore * anonymousStore;
	NSString * root;
	<DBSessionDelegate> * delegate;
}
@property (nonatomic, strong) NSString * root;
@property (nonatomic, strong) id userIds;
@property (nonatomic, strong) <DBSessionDelegate> * delegate;
- (id)initWithAppKey:(id)arg0 appSecret:(id)arg1 root:(id)arg2;
- (void)dealloc;
- (void)updateAccessToken:(id)arg0 accessTokenSecret:(id)arg1 forUserId:(id)arg2;
- (void)setAccessToken:(id)arg0 accessTokenSecret:(id)arg1 forUserId:(id)arg2;
- (char)isLinked;
- (void)unlinkAll;
- (void)unlinkUserId:(id)arg0;
- (id)credentialStoreForUserId:(id)arg0;
- (id)userIds;
- (void)saveCredentials;
- (NSString *)root;
- (<DBSessionDelegate> *)delegate;
- (void)setDelegate:(<DBSessionDelegate> *)arg0;
+ (id)sharedSession;
+ (void)setSharedSession:(id)arg0;
@end
@interface MPOAuthAPI : NSObject
{
	<MPOAuthCredentialStore><MPOAuthParameterFactory> * credentials_;
	NSURL * baseURL_;
	NSURL * authenticationURL_;
	MPOAuthAuthenticationMethod * authenticationMethod_;
	int signatureScheme_;
	NSMutableArray * activeLoaders_;
	int oauthAuthenticationState_;
}
@property (nonatomic, strong) id credentials;
@property (nonatomic, strong) id authenticationURL;
@property (nonatomic, strong) id baseURL;
@property (nonatomic, strong) id activeLoaders;
@property (nonatomic, strong) id authenticationState;
@property (nonatomic, strong) id authenticationMethod;
@property (nonatomic, strong) id signatureScheme;
- (id)initWithCredentials:(id)arg0 andBaseURL:(id)arg1;
- (id)initWithCredentials:(id)arg0 authenticationURL:(id)arg1 andBaseURL:(id)arg2;
- (id)initWithCredentials:(id)arg0 authenticationURL:(id)arg1 andBaseURL:(id)arg2 autoStart:(id)arg3;
- (id)dealloc;
- (void)setSignatureScheme:(id)arg0;
- (void)authenticate;
- (char)isAuthenticated;
- (void)performMethod:(id)arg0 withTarget:(id)arg1 andAction:(id)arg2;
- (void)performMethod:(id)arg0 atURL:(id)arg1 withParameters:(id)arg2 withTarget:(id)arg3 andAction:(id)arg4;
- (void)performPOSTMethod:(id)arg0 atURL:(id)arg1 withParameters:(id)arg2 withTarget:(id)arg3 andAction:(id)arg4;
- (void)performMethod:(id)arg0 atURL:(id)arg1 withParameters:(id)arg2 withTarget:(id)arg3 andAction:(id)arg4 usingHTTPMethod:(id)arg5;
- (void)performURLRequest:(id)arg0 withTarget:(id)arg1 andAction:(id)arg2;
- (id)dataForMethod:(id)arg0;
- (id)dataForMethod:(id)arg0 withParameters:(id)arg1;
- (id)dataForURL:(id)arg0 andMethod:(id)arg1 withParameters:(id)arg2;
- (id)credentialNamed:(id)arg0;
- (void)setCredential:(id)arg0 withName:(id)arg1;
- (void)removeCredentialNamed:(id)arg0;
- (void)discardCredentials;
- (void)_performedLoad:(id)arg0 receivingData:(id)arg1;
- (id)credentials;
- (void)setCredentials:(id)arg0;
- (id)baseURL;
- (void)setBaseURL:(id)arg0;
- (id)authenticationURL;
- (void)setAuthenticationURL:(id)arg0;
- (id)authenticationMethod;
- (void)setAuthenticationMethod:(id)arg0;
- (int)signatureScheme;
- (id)activeLoaders;
- (void)setActiveLoaders:(id)arg0;
- (int)authenticationState;
- (void)setAuthenticationState:(id)arg0;
@end
@interface MPOAuthAPIRequestLoader : NSObject
{
	MPOAuthCredentialConcreteStore * _credentials;
	MPOAuthURLRequest * _oauthRequest;
	MPOAuthURLResponse * _oauthResponse;
	NSMutableData * _dataBuffer;
	NSString * _dataAsString;
	NSError * _error;
	@ _target;
	: _action;
}
@property (nonatomic, strong) id data;
@property (nonatomic, strong) id responseString;
@property (nonatomic, strong) MPOAuthCredentialConcreteStore * credentials;
@property (nonatomic, strong) MPOAuthURLRequest * oauthRequest;
@property (nonatomic, strong) MPOAuthURLResponse * oauthResponse;
@property (nonatomic, assign) @ target;
@property (nonatomic, assign) : action;
- (id)initWithURL:(id)arg0;
- (id)initWithRequest:(id)arg0;
- (id)dealloc;
- (MPOAuthURLResponse *)oauthResponse;
- (id)responseString;
- (void)loadSynchronously:(id)arg0;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (id)connection:(id)arg0 willSendRequest:(id)arg1 redirectResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg0;
- (void)_interrogateResponseForOAuthData;
- (MPOAuthCredentialConcreteStore *)credentials;
- (void)setCredentials:(MPOAuthCredentialConcreteStore *)arg0;
- (MPOAuthURLRequest *)oauthRequest;
- (void)setOauthRequest:(MPOAuthURLRequest *)arg0;
- (void)setOauthResponse:(MPOAuthURLResponse *)arg0;
- (id)data;
- (void)setData:(id)arg0;
- (void)setResponseString:(id)arg0;
- (@)target;
- (void)setTarget:(@)arg0;
- (:)action;
- (void)setAction:(:)arg0;
@end
@interface MPOAuthAuthenticationMethod : NSObject
{
	MPOAuthAPI * oauthAPI_;
	NSURL * oauthGetAccessTokenURL_;
	NSTimer * refreshTimer_;
}
@property (nonatomic, strong) id refreshTimer;
@property (nonatomic, strong) id oauthAPI;
@property (nonatomic, strong) id oauthGetAccessTokenURL;
- (id)initWithAPI:(id)arg0 forURL:(id)arg1;
- (id)initWithAPI:(id)arg0 forURL:(id)arg1 withConfiguration:(id)arg2;
- (id)dealloc;
- (void)authenticate;
- (void)setTokenRefreshInterval:(id)arg0;
- (void)refreshAccessToken;
- (void)_automaticallyRefreshAccessToken:(id)arg0;
- (id)oauthAPI;
- (void)setOauthAPI:(id)arg0;
- (id)oauthGetAccessTokenURL;
- (void)setOauthGetAccessTokenURL:(id)arg0;
- (id)refreshTimer;
- (void)setRefreshTimer:(id)arg0;
+ (Class)_authorizationMethodClassForURL:(id)arg0 withConfiguration:(id)arg1;
@end
@interface MPOAuthAuthenticationMethodOAuth : MPOAuthAuthenticationMethod <MPOAuthAuthenticationMethod>
{
	NSURL * oauthRequestTokenURL_;
	NSURL * oauthAuthorizeTokenURL_;
	BOOL oauth10aModeActive_;
	<MPOAuthAuthenticationMethodOAuthDelegate> * delegate_;
}
@property (nonatomic, strong) id oauth10aModeActive;
@property (nonatomic, strong) id delegate;
@property (nonatomic, strong) id oauthRequestTokenURL;
@property (nonatomic, strong) id oauthAuthorizeTokenURL;
- (id)initWithAPI:(id)arg0 forURL:(id)arg1 withConfiguration:(id)arg2;
- (id)dealloc;
- (void)authenticate;
- (void)_authenticationRequestForRequestToken;
- (void)_authenticationRequestForRequestTokenSuccessfulLoad:(id)arg0 withData:(id)arg1;
- (void)loader:(id)arg0 didFailWithError:(id)arg1;
- (void)_authenticationRequestForUserPermissionsConfirmationAtURL:(id)arg0;
- (void)_authenticationRequestForAccessToken;
- (void)_requestTokenReceived:(id)arg0;
- (void)_requestTokenRejected:(id)arg0;
- (void)_accessTokenReceived:(id)arg0;
- (void)_performedLoad:(id)arg0 receivingData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)oauthRequestTokenURL;
- (void)setOauthRequestTokenURL:(id)arg0;
- (id)oauthAuthorizeTokenURL;
- (void)setOauthAuthorizeTokenURL:(id)arg0;
- (char)oauth10aModeActive;
- (void)setOauth10aModeActive:(id)arg0;
@end
@interface MPOAuthConnection : NSURLConnection
{
	MPOAuthCredentialConcreteStore * _credentials;
}
@property (nonatomic, strong) MPOAuthCredentialConcreteStore * credentials;
- (id)initWithRequest:(id)arg0 delegate:(id)arg1 credentials:(id)arg2;
- (id)dealloc;
- (MPOAuthCredentialConcreteStore *)credentials;
+ (id)connectionWithRequest:(id)arg0 delegate:(id)arg1 credentials:(id)arg2;
+ (id)sendSynchronousRequest:(id)arg0 usingCredentials:(id)arg1 returningResponse:(id)arg2 error:(id)arg3;
@end
@interface MPOAuthCredentialConcreteStore : NSObject
{
	NSMutableDictionary * store_;
	NSURL * baseURL_;
	NSURL * authenticationURL_;
}
@property (nonatomic, strong) id store;
@property (nonatomic, strong) id baseURL;
@property (nonatomic, strong) id authenticationURL;
@property (nonatomic, strong) id tokenSecret;
@property (nonatomic, strong) id signingKey;
@property (nonatomic, strong) id requestToken;
@property (nonatomic, strong) id requestTokenSecret;
@property (nonatomic, strong) id accessToken;
@property (nonatomic, strong) id accessTokenSecret;
@property (nonatomic, strong) id sessionHandle;
@property (nonatomic, strong) id consumerKey;
@property (nonatomic, strong) id consumerSecret;
@property (nonatomic, strong) id username;
@property (nonatomic, strong) id password;
@property (nonatomic, strong) id signatureMethod;
@property (nonatomic, strong) id timestamp;
- (void)addToKeychainUsingName:(id)arg0 andValue:(id)arg1;
- (id)findValueFromKeychainUsingName:(id)arg0;
- (id)findValueFromKeychainUsingName:(id)arg0 returningItem:(id)arg1;
- (void)removeValueFromKeychainUsingName:(id)arg0;
- (id)initWithCredentials:(id)arg0;
- (id)initWithCredentials:(id)arg0 forBaseURL:(id)arg1;
- (id)initWithCredentials:(id)arg0 forBaseURL:(id)arg1 withAuthenticationURL:(id)arg2;
- (id)dealloc;
- (id)consumerKey;
- (id)consumerSecret;
- (id)username;
- (id)password;
- (id)requestToken;
- (void)setRequestToken:(id)arg0;
- (id)requestTokenSecret;
- (void)setRequestTokenSecret:(id)arg0;
- (id)accessToken;
- (void)setAccessToken:(id)arg0;
- (id)accessTokenSecret;
- (void)setAccessTokenSecret:(id)arg0;
- (id)sessionHandle;
- (void)setSessionHandle:(id)arg0;
- (id)credentialNamed:(id)arg0;
- (void)setCredential:(id)arg0 withName:(id)arg1;
- (void)removeCredentialNamed:(id)arg0;
- (void)discardOAuthCredentials;
- (id)tokenSecret;
- (id)signingKey;
- (id)timestamp;
- (id)signatureMethod;
- (id)oauthParameters;
- (void)setSignatureMethod:(id)arg0;
- (id)oauthConsumerKeyParameter;
- (id)oauthTokenParameter;
- (id)oauthSignatureMethodParameter;
- (id)oauthTimestampParameter;
- (id)oauthNonceParameter;
- (id)oauthVersionParameter;
- (id)store;
- (void)setStore:(id)arg0;
- (id)baseURL;
- (void)setBaseURL:(id)arg0;
- (id)authenticationURL;
- (void)setAuthenticationURL:(id)arg0;
@end
@interface MPOAuthSignatureParameter : MPURLRequestParameter <MPURLRequestParameter>
- (id)initWithText:(id)arg0 andSecret:(id)arg1 forRequest:(id)arg2 usingMethod:(id)arg3;
- (id)initUsingHMAC_SHA1WithText:(id)arg0 andSecret:(id)arg1 forRequest:(id)arg2;
- (id)dealloc;
+ (id)signatureBaseStringUsingParameterString:(id)arg0 forRequest:(id)arg1;
+ (id)HMAC_SHA1SignatureForText:(id)arg0 usingSecret:(id)arg1;
@end
@interface MPOAuthURLRequest : NSObject
{
	NSURL * _url;
	NSString * _httpMethod;
	NSURLRequest * _urlRequest;
	NSMutableArray * _parameters;
}
@property (nonatomic, strong) NSURLRequest * urlRequest;
@property (nonatomic, strong) NSURL * url;
@property (nonatomic, strong) id HTTPMethod;
@property (nonatomic, strong) NSMutableArray * parameters;
- (id)initWithURL:(id)arg0 andParameters:(id)arg1;
- (id)initWithURLRequest:(id)arg0;
- (id)dealloc;
- (id)urlRequestSignedWithSecret:(id)arg0 usingMethod:(id)arg1;
- (void)addParameters:(id)arg0;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (id)HTTPMethod;
- (void)setHTTPMethod:(id)arg0;
- (NSURLRequest *)urlRequest;
- (void)setUrlRequest:(NSURLRequest *)arg0;
- (NSMutableArray *)parameters;
- (void)setParameters:(NSMutableArray *)arg0;
@end
@interface MPOAuthURLResponse : NSObject
{
	NSURLResponse * _urlResponse;
	NSDictionary * _oauthParameters;
}
@property (nonatomic, strong) NSURLResponse * urlResponse;
@property (nonatomic, strong) NSDictionary * oauthParameters;
- (id)init;
- (id)dealloc;
- (NSURLResponse *)urlResponse;
- (void)setUrlResponse:(NSURLResponse *)arg0;
- (NSDictionary *)oauthParameters;
- (void)setOauthParameters:(NSDictionary *)arg0;
@end
@interface MPURLRequestParameter : NSObject
{
	NSString * _name;
	NSString * _value;
}
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSString * value;
- (id)init;
- (id)initWithName:(id)arg0 andValue:(id)arg1;
- (id)dealloc;
- (id)URLEncodedParameterString;
- (long long)compare:(id)arg0;
- (id)description;
- (NSString *)name;
- (void)setName:(NSString *)arg0;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
+ (id)parametersFromString:(id)arg0;
+ (id)parametersFromDictionary:(id)arg0;
+ (id)parameterDictionaryFromString:(id)arg0;
+ (id)parameterStringForParameters:(id)arg0;
+ (id)parameterStringForDictionary:(id)arg0;
@end
@interface PodsDummy_Pods_Annotate_Dropbox_OSX_SDK : NSObject
@end
@interface MASPreferencesWindowController : NSWindowController
{
	NSMutableArray * _viewControllers;
	NSMutableDictionary * _minimumViewRects;
	NSString * _title;
	NSViewController<MASPreferencesViewController> * _selectedViewController;
	NSToolbar * toolbar;
	NSToolbar * _toolbar;
}
@property (nonatomic, strong) id toolbarItemIdentifiers;
@property (nonatomic, strong) NSViewController<MASPreferencesViewController> * selectedViewController;
@property (nonatomic, strong) NSMutableArray * viewControllers;
@property (nonatomic, strong) id indexOfSelectedController;
@property (nonatomic, strong) NSString * title;
@property (nonatomic, strong) NSToolbar * toolbar;
- (id)initWithViewControllers:(id)arg0;
- (id)initWithViewControllers:(id)arg0 title:(id)arg1;
- (void)dealloc;
- (void)addViewController:(id)arg0;
- (void)windowDidLoad;
- (id)firstViewController;
- (char)windowShouldClose:(id)arg0;
- (void)windowDidMove:(id)arg0;
- (void)windowDidResize:(id)arg0;
- (id)toolbarItemIdentifiers;
- (unsigned long long)indexOfSelectedController;
- (id)toolbarAllowedItemIdentifiers:(id)arg0;
- (id)toolbarDefaultItemIdentifiers:(id)arg0;
- (id)toolbarSelectableItemIdentifiers:(id)arg0;
- (id)toolbar:(id)arg0 itemForItemIdentifier:(id)arg1 willBeInsertedIntoToolbar:(id)arg2;
- (void)clearResponderChain;
- (void)patchResponderChain;
- (id)viewControllerForIdentifier:(id)arg0;
- (void)setSelectedViewController:(NSViewController<MASPreferencesViewController> *)arg0;
- (void)toolbarItemDidClick:(id)arg0;
- (void)selectControllerAtIndex:(id)arg0;
- (void)goNextTab:(id)arg0;
- (void)goPreviousTab:(id)arg0;
- (NSMutableArray *)viewControllers;
- (NSViewController<MASPreferencesViewController> *)selectedViewController;
- (NSString *)title;
- (NSToolbar *)toolbar;
- (void)setToolbar:(NSToolbar *)arg0;
@end
@interface PodsDummy_Pods_Annotate_MASPreferences : NSObject
@end
@interface MASDictionaryTransformer : NSValueTransformer
- (id)reverseTransformedValue:(id)arg0;
- (id)transformedValue:(id)arg0;
+ (char)allowsReverseTransformation;
@end
@interface MASHotKey : NSObject
{
	I _carbonID;
	@? _action;
	OpaqueEventHotKeyRef= _hotKeyRef;
}
@property (nonatomic, assign) OpaqueEventHotKeyRef= hotKeyRef;
@property (nonatomic, assign) I carbonID;
@property (nonatomic, assign) @? action;
- (id)initWithShortcut:(id)arg0;
- (void)dealloc;
// - (void).cxx_destruct;
- (unsigned int)carbonID;
- (void)setCarbonID:(I)arg0;
- (@?)action;
- (void)setAction:(@?)arg0;
- (OpaqueEventHotKeyRef=)hotKeyRef;
- (void)setHotKeyRef:(OpaqueEventHotKeyRef=)arg0;
+ (id)registeredHotKeyWithShortcut:(id)arg0;
@end
@interface MASShortcut : NSObject
{
	uint64_t _keyCode;
	uint64_t _modifierFlags;
}
@property (nonatomic, assign) uint64_t keyCode;
@property (nonatomic, assign) uint64_t modifierFlags;
@property (nonatomic, strong) id carbonKeyCode;
@property (nonatomic, strong) id carbonFlags;
@property (nonatomic, strong) id keyCodeString;
@property (nonatomic, strong) id keyCodeStringForKeyEquivalent;
@property (nonatomic, strong) id modifierFlagsString;
- (id)initWithKeyCode:(id)arg0 modifierFlags:(id)arg1;
- (unsigned int)carbonKeyCode;
- (unsigned int)carbonFlags;
- (id)description;
- (id)keyCodeStringForKeyEquivalent;
- (id)keyCodeString;
- (id)modifierFlagsString;
- (char)isEqual:(id)arg0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (unsigned long long)keyCode;
- (unsigned long long)modifierFlags;
+ (id)shortcutWithKeyCode:(id)arg0 modifierFlags:(id)arg1;
+ (id)shortcutWithEvent:(id)arg0;
+ (char)supportsSecureCoding;
@end
@interface MASShortcutBinder : NSObject
{
	MASShortcutMonitor * _shortcutMonitor;
	NSDictionary * _bindingOptions;
	NSMutableDictionary * _actions;
	NSMutableDictionary * _shortcuts;
}
@property (nonatomic, strong) NSMutableDictionary * actions;
@property (nonatomic, strong) NSMutableDictionary * shortcuts;
@property (nonatomic, strong) MASShortcutMonitor * shortcutMonitor;
@property (nonatomic, strong) NSDictionary * bindingOptions;
- (id)init;
- (void)dealloc;
- (void)bindShortcutWithDefaultsKey:(id)arg0 toAction:(id)arg1;
- (void)breakBindingWithDefaultsKey:(id)arg0;
- (void)registerDefaultShortcuts:(id)arg0;
- (char)isRegisteredAction:(id)arg0;
- (id)valueForUndefinedKey:(id)arg0;
- (void)setValue:(id)arg0 forUndefinedKey:(id)arg1;
// - (void).cxx_destruct;
- (MASShortcutMonitor *)shortcutMonitor;
- (void)setShortcutMonitor:(MASShortcutMonitor *)arg0;
- (NSDictionary *)bindingOptions;
- (void)setBindingOptions:(NSDictionary *)arg0;
- (NSMutableDictionary *)actions;
- (void)setActions:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)shortcuts;
- (void)setShortcuts:(NSMutableDictionary *)arg0;
+ (id)sharedBinder;
@end
@interface MASShortcutMonitor : NSObject
{
	OpaqueEventHandlerRef= _eventHandlerRef;
	NSMutableDictionary * _hotKeys;
}
@property (nonatomic, assign) OpaqueEventHandlerRef= eventHandlerRef;
@property (nonatomic, strong) NSMutableDictionary * hotKeys;
- (id)init;
- (void)dealloc;
- (char)registerShortcut:(id)arg0 withAction:(id)arg1;
- (void)unregisterShortcut:(id)arg0;
- (void)unregisterAllShortcuts;
- (char)isShortcutRegistered:(id)arg0;
- (void)handleEvent:(id)arg0;
// - (void).cxx_destruct;
- (OpaqueEventHandlerRef=)eventHandlerRef;
- (void)setEventHandlerRef:(OpaqueEventHandlerRef=)arg0;
- (NSMutableDictionary *)hotKeys;
- (void)setHotKeys:(NSMutableDictionary *)arg0;
+ (id)sharedMonitor;
@end
@interface MASShortcutValidator : NSObject
{
	BOOL _allowAnyShortcutWithOptionModifier;
}
@property (nonatomic, assign) BOOL allowAnyShortcutWithOptionModifier;
- (char)isShortcutValid:(id)arg0;
- (char)isShortcut:(id)arg0 alreadyTakenInMenu:(id)arg1 explanation:(id)arg2;
- (char)isShortcutAlreadyTakenBySystem:(id)arg0 explanation:(id)arg1;
- (char)allowAnyShortcutWithOptionModifier;
- (void)setAllowAnyShortcutWithOptionModifier:(BOOL)arg0;
+ (id)sharedValidator;
@end
@interface MASShortcutView : NSView
{
	NSButtonCell * _shortcutCell;
	long long _shortcutToolTipTag;
	long long _hintToolTipTag;
	NSTrackingArea * _hintArea;
	BOOL _recording;
	BOOL _enabled;
	BOOL _hinting;
	int _style;
	MASShortcut * _shortcutValue;
	MASShortcutValidator * _shortcutValidator;
	@? _shortcutValueChange;
	NSString * _shortcutPlaceholder;
}
@property (nonatomic, strong) id associatedUserDefaultsKey;
@property (nonatomic, assign) BOOL hinting;
@property (nonatomic, strong) NSString * shortcutPlaceholder;
@property (nonatomic, strong) MASShortcut * shortcutValue;
@property (nonatomic, strong) MASShortcutValidator * shortcutValidator;
@property (nonatomic, assign) BOOL recording;
@property (nonatomic, assign) BOOL enabled;
@property (nonatomic, assign) @? shortcutValueChange;
@property (nonatomic, assign) int style;
- (id)associatedUserDefaultsKey;
- (void)setAssociatedUserDefaultsKey:(id)arg0 withTransformer:(id)arg1;
- (void)setAssociatedUserDefaultsKey:(id)arg0 withTransformerName:(id)arg1;
- (void)setAssociatedUserDefaultsKey:(id)arg0;
- (id)initWithFrame:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)commonInit;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg0;
- (void)setStyle:(int)arg0;
- (void)resetShortcutCellStyle;
- (void)setRecording:(BOOL)arg0;
- (void)setShortcutValue:(MASShortcut *)arg0;
- (void)setShortcutPlaceholder:(NSString *)arg0;
- (char)isFlipped;
- (void)drawInRect:(id)arg0 withTitle:(id)arg1 alignment:(id)arg2 state:(id)arg3;
- (void)drawRect:(id)arg0;
- (void)getShortcutRect:(id)arg0 hintRect:(id)arg1;
- (char)locationInShortcutRect:(id)arg0;
- (char)locationInHintRect:(id)arg0;
- (void)mouseDown:(id)arg0;
- (void)updateTrackingAreas;
- (void)setHinting:(BOOL)arg0;
- (void)mouseEntered:(id)arg0;
- (void)mouseExited:(id)arg0;
- (void)resetToolTips;
- (id)view:(id)arg0 stringForToolTip:(id)arg1 point:(id)arg2 userData:(id)arg3;
- (void)activateEventMonitoring:(id)arg0;
- (void)activateResignObserver:(id)arg0;
- (void)propagateValue:(id)arg0 forBinding:(id)arg1;
// - (void).cxx_destruct;
- (MASShortcut *)shortcutValue;
- (MASShortcutValidator *)shortcutValidator;
- (void)setShortcutValidator:(MASShortcutValidator *)arg0;
- (char)isRecording;
- (char)isEnabled;
- (@?)shortcutValueChange;
- (void)setShortcutValueChange:(@?)arg0;
- (int)style;
- (char)isHinting;
- (NSString *)shortcutPlaceholder;
+ (Class)shortcutCellClass;
@end
@interface PodsDummy_Pods_Annotate_MASShortcut : NSObject
@end
@interface PDKeychainBindings : NSObject
- (id)objectForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)setString:(id)arg0 forKey:(id)arg1;
- (void)removeObjectForKey:(id)arg0;
- (id)stringForKey:(id)arg0;
+ (id)sharedKeychainBindings;
@end
@interface PDKeychainBindingsController : NSObject
{
	PDKeychainBindings * _keychainBindings;
	NSMutableDictionary * _valueBuffer;
}
- (id)serviceName;
- (id)stringForKey:(id)arg0;
- (char)storeString:(id)arg0 forKey:(id)arg1;
- (id)keychainBindings;
- (id)values;
- (id)valueForKeyPath:(id)arg0;
- (void)setValue:(id)arg0 forKeyPath:(id)arg1;
// - (void).cxx_destruct;
+ (id)sharedKeychainBindingsController;
@end
@interface PodsDummy_Pods_Annotate_PDKeychainBindingsController : NSObject
@end
@interface RACChannelProxy : NSObject
{
	RACChannel * _channel;
	@ _value;
	@ _target;
	NSString * _bindingName;
	^v _observationInfo;
}
@property (nonatomic, strong) RACChannel * channel;
@property (nonatomic, assign) @ value;
@property (nonatomic, assign) @ target;
@property (nonatomic, strong) NSString * bindingName;
@property (nonatomic, assign) ^v observationInfo;
- (void)setValue:(@)arg0;
- (id)initWithTarget:(id)arg0 bindingName:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)description;
// - (void).cxx_destruct;
- (RACChannel *)channel;
- (@)value;
- (@)target;
- (void)setTarget:(@)arg0;
- (NSString *)bindingName;
- (^v)observationInfo;
- (void)setObservationInfo:(^v)arg0;
+ (char)automaticallyNotifiesObserversForKey:(id)arg0;
@end
@interface PodsDummy_Pods_Annotate_ReactiveCocoa : NSObject
@end
@interface RACArraySequence : RACSequence <RACSequence>
{
	NSArray * _backingArray;
	uint64_t _offset;
}
@property (nonatomic, strong) id array;
@property (nonatomic, strong) NSArray * backingArray;
@property (nonatomic, assign) uint64_t offset;
- (id)head;
- (id)tail;
- (unsigned long long)countByEnumeratingWithState:(id)arg0 objects:(id)arg1 count:(id)arg2;
- (id)array;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)description;
// - (void).cxx_destruct;
- (NSArray *)backingArray;
- (unsigned long long)offset;
+ (id)sequenceWithArray:(id)arg0 offset:(id)arg1;
@end
@interface RACBehaviorSubject : RACSubject <RACSubject>
{
	@ _currentValue;
}
@property (nonatomic, assign) @ currentValue;
- (id)subscribe:(id)arg0;
- (void)sendNext:(id)arg0;
// - (void).cxx_destruct;
- (@)currentValue;
- (void)setCurrentValue:(@)arg0;
+ (id)behaviorSubjectWithDefaultValue:(id)arg0;
@end
@interface RACBlockTrampoline : NSObject
{
	@ _block;
}
@property (nonatomic, assign) @ block;
- (id)initWithBlock:(id)arg0;
- (id)invokeWithArguments:(id)arg0;
- (id)selectorForArgumentCount:(id)arg0;
- (id)performWith:(id)arg0;
- (id)performWith:(id)arg0 arg:(id)arg1;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8 arg:(id)arg9;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8 arg:(id)arg9 arg:(id)arg10;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8 arg:(id)arg9 arg:(id)arg10 arg:(id)arg11;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8 arg:(id)arg9 arg:(id)arg10 arg:(id)arg11 arg:(id)arg12;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8 arg:(id)arg9 arg:(id)arg10 arg:(id)arg11 arg:(id)arg12 arg:(id)arg13;
- (id)performWith:(id)arg0 arg:(id)arg1 arg:(id)arg2 arg:(id)arg3 arg:(id)arg4 arg:(id)arg5 arg:(id)arg6 arg:(id)arg7 arg:(id)arg8 arg:(id)arg9 arg:(id)arg10 arg:(id)arg11 arg:(id)arg12 arg:(id)arg13 arg:(id)arg14;
// - (void).cxx_destruct;
- (@)block;
+ (id)invokeBlock:(id)arg0 withArguments:(id)arg1;
@end
@interface RACChannel : NSObject
{
	RACChannelTerminal * _leadingTerminal;
	RACChannelTerminal * _followingTerminal;
}
@property (nonatomic, strong) RACChannelTerminal * leadingTerminal;
@property (nonatomic, strong) RACChannelTerminal * followingTerminal;
- (id)init;
// - (void).cxx_destruct;
- (RACChannelTerminal *)leadingTerminal;
- (RACChannelTerminal *)followingTerminal;
@end
@interface RACChannelTerminal : RACSignal <RACSignal>
{
	RACSignal * _values;
	<RACSubscriber> * _otherTerminal;
}
@property (nonatomic, strong) RACSignal * values;
@property (nonatomic, strong) <RACSubscriber> * otherTerminal;
- (id)initWithValues:(id)arg0 otherTerminal:(id)arg1;
- (id)subscribe:(id)arg0;
- (void)sendNext:(id)arg0;
- (void)sendError:(id)arg0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)arg0;
// - (void).cxx_destruct;
- (RACSignal *)values;
- (<RACSubscriber> *)otherTerminal;
@end
@interface RACCommand : NSObject
{
	NSMutableArray * _activeExecutionSignals;
	I _allowsConcurrentExecution;
	RACSignal * _executionSignals;
	RACSignal * _executing;
	RACSignal * _enabled;
	RACSignal * _errors;
	RACSignal * _immediateEnabled;
	@? _signalBlock;
}
@property (nonatomic, strong) NSMutableArray * activeExecutionSignals;
@property (nonatomic, strong) RACSignal * immediateEnabled;
@property (nonatomic, assign) @? signalBlock;
@property (nonatomic, strong) RACSignal * executionSignals;
@property (nonatomic, strong) RACSignal * executing;
@property (nonatomic, strong) RACSignal * enabled;
@property (nonatomic, strong) RACSignal * errors;
@property (nonatomic, assign) I allowsConcurrentExecution;
- (char)allowsConcurrentExecution;
- (void)setAllowsConcurrentExecution:(I)arg0;
- (NSMutableArray *)activeExecutionSignals;
- (void)addActiveExecutionSignal:(id)arg0;
- (void)removeActiveExecutionSignal:(id)arg0;
- (id)init;
- (id)initWithSignalBlock:(id)arg0;
- (id)initWithEnabled:(id)arg0 signalBlock:(id)arg1;
- (id)execute:(id)arg0;
// - (void).cxx_destruct;
- (RACSignal *)executionSignals;
- (RACSignal *)executing;
- (RACSignal *)enabled;
- (RACSignal *)errors;
- (RACSignal *)immediateEnabled;
- (@?)signalBlock;
+ (char)automaticallyNotifiesObserversForKey:(id)arg0;
@end
@interface RACCompoundDisposable : RACDisposable <RACDisposable>
{
	int _spinLock;
	[2@"RACDisposable"] _inlineDisposables;
	__CFArray= _disposables;
	BOOL _disposed;
}
- (char)isDisposed;
- (id)initWithDisposables:(id)arg0;
- (id)initWithBlock:(id)arg0;
- (void)dealloc;
- (void)addDisposable:(id)arg0;
- (void)removeDisposable:(id)arg0;
- (void)dispose;
// - (void).cxx_destruct;
+ (id)compoundDisposable;
+ (id)compoundDisposableWithDisposables:(id)arg0;
@end
@interface RACDelegateProxy : NSObject
{
	Protocol * _protocol;
	@ _rac_proxiedDelegate;
}
@property (nonatomic, assign) @ rac_proxiedDelegate;
- (id)initWithProtocol:(id)arg0;
- (id)signalForSelector:(id)arg0;
- (char)isProxy;
- (void)forwardInvocation:(id)arg0;
- (id)methodSignatureForSelector:(id)arg0;
- (char)respondsToSelector:(id)arg0;
// - (void).cxx_destruct;
- (@)rac_proxiedDelegate;
- (void)setRac_proxiedDelegate:(@)arg0;
@end
@interface RACDisposable : NSObject
{
	^v _disposeBlock;
}
@property (nonatomic, strong) id disposed;
- (char)isDisposed;
- (id)init;
- (id)initWithBlock:(id)arg0;
- (void)dealloc;
- (void)dispose;
- (id)asScopedDisposable;
+ (id)disposableWithBlock:(id)arg0;
@end
@interface RACDynamicSequence : RACSequence <RACSequence>
{
	@ _head;
	RACSequence * _tail;
	@ _dependency;
	BOOL _hasDependency;
	@ _headBlock;
	@ _tailBlock;
	@? _dependencyBlock;
}
@property (nonatomic, assign) @ headBlock;
@property (nonatomic, assign) @ tailBlock;
@property (nonatomic, assign) BOOL hasDependency;
@property (nonatomic, assign) @? dependencyBlock;
- (void)dealloc;
- (id)head;
- (id)tail;
- (id)description;
// - (void).cxx_destruct;
- (@)headBlock;
- (void)setHeadBlock:(@)arg0;
- (@)tailBlock;
- (void)setTailBlock:(@)arg0;
- (char)hasDependency;
- (void)setHasDependency:(BOOL)arg0;
- (@?)dependencyBlock;
- (void)setDependencyBlock:(@?)arg0;
+ (id)sequenceWithHeadBlock:(id)arg0 tailBlock:(id)arg1;
+ (id)sequenceWithLazyDependency:(id)arg0 headBlock:(id)arg1 tailBlock:(id)arg2;
@end
@interface RACDynamicSignal : RACSignal <RACSignal>
{
	@? _didSubscribe;
}
@property (nonatomic, assign) @? didSubscribe;
- (id)subscribe:(id)arg0;
// - (void).cxx_destruct;
- (@?)didSubscribe;
+ (id)createSignal:(id)arg0;
@end
@interface RACEagerSequence : RACArraySequence <RACArraySequence>
- (id)bind:(id)arg0;
- (id)concat:(id)arg0;
- (id)eagerSequence;
- (id)lazySequence;
- (id)foldRightWithStart:(id)arg0 reduce:(id)arg1;
+ (id)return:(id)arg0;
@end
@interface RACEmptySequence : RACSequence <RACSequence>
- (id)head;
- (id)tail;
- (id)bind:(id)arg0 passingThroughValuesFromSequence:(id)arg1;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)arg0;
+ (id)empty;
@end
@interface RACEmptySignal : RACSignal <RACSignal>
- (void)setName:(id)arg0;
- (id)name;
- (id)subscribe:(id)arg0;
+ (id)empty;
@end
@interface RACErrorSignal : RACSignal <RACSignal>
{
	NSError * _error;
}
@property (nonatomic, strong) NSError * error;
- (id)subscribe:(id)arg0;
// - (void).cxx_destruct;
- (NSError *)error;
+ (id)error:(id)arg0;
@end
@interface RACEvent : NSObject
{
	uint64_t _eventType;
	@ _object;
}
@property (nonatomic, assign) @ object;
@property (nonatomic, assign) uint64_t eventType;
@property (nonatomic, strong) id finished;
@property (nonatomic, strong) id error;
@property (nonatomic, strong) id value;
- (char)isFinished;
- (id)error;
- (id)value;
- (id)initWithEventType:(id)arg0 object:(id)arg1;
- (id)copyWithZone:(id)arg0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)arg0;
// - (void).cxx_destruct;
- (unsigned long long)eventType;
- (@)object;
+ (id)completedEvent;
+ (id)eventWithError:(id)arg0;
+ (id)eventWithValue:(id)arg0;
@end
@interface RACGroupedSignal : RACSubject <RACSubject>
{
	<NSCopying> * _key;
}
@property (nonatomic, strong) <NSCopying> * key;
// - (void).cxx_destruct;
- (<NSCopying> *)key;
- (void)setKey:(<NSCopying> *)arg0;
+ (id)signalWithKey:(id)arg0;
@end
@interface RACImmediateScheduler : RACScheduler <RACScheduler>
- (id)init;
- (id)schedule:(id)arg0;
- (id)after:(id)arg0 schedule:(id)arg1;
- (id)after:(id)arg0 repeatingEvery:(id)arg1 withLeeway:(id)arg2 schedule:(id)arg3;
- (id)scheduleRecursiveBlock:(id)arg0;
@end
@interface RACIndexSetSequence : RACSequence <RACSequence>
{
	NSData * _data;
	r^Q _indexes;
	uint64_t _count;
}
@property (nonatomic, strong) NSData * data;
@property (nonatomic, assign) r^Q indexes;
@property (nonatomic, assign) uint64_t count;
- (id)head;
- (id)tail;
- (unsigned long long)countByEnumeratingWithState:(id)arg0 objects:(id)arg1 count:(id)arg2;
- (id)description;
// - (void).cxx_destruct;
- (NSData *)data;
- (r^Q)indexes;
- (unsigned long long)count;
+ (id)sequenceWithIndexSet:(id)arg0;
+ (id)sequenceWithIndexSetSequence:(id)arg0 offset:(id)arg1;
@end
@interface RACKVOChannel : RACChannel <RACChannel>
{
	NSObject * _target;
	NSString * _keyPath;
}
@property (nonatomic, strong) NSObject * target;
@property (nonatomic, strong) NSString * keyPath;
@property (nonatomic, strong) id currentThreadData;
- (id)objectForKeyedSubscript:(id)arg0;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
- (id)currentThreadData;
- (id)initWithTarget:(id)arg0 keyPath:(id)arg1 nilValue:(id)arg2;
- (void)createCurrentThreadData;
- (void)destroyCurrentThreadData;
// - (void).cxx_destruct;
- (NSObject *)target;
- (void)setTarget:(NSObject *)arg0;
- (NSString *)keyPath;
@end
@interface RACKVOChannelData : NSObject
{
	BOOL _ignoreNextUpdate;
	^v _owner;
}
@property (nonatomic, assign) BOOL ignoreNextUpdate;
@property (nonatomic, assign) ^v owner;
- (char)ignoreNextUpdate;
- (void)setIgnoreNextUpdate:(BOOL)arg0;
- (^v)owner;
- (void)setOwner:(^v)arg0;
+ (id)dataForChannel:(id)arg0;
@end
@interface RACKVOProxy : NSObject
{
	NSMapTable * _trampolines;
	NSObject<OS_dispatch_queue> * _queue;
}
@property (nonatomic, strong) NSMapTable * trampolines;
@property (nonatomic, strong) NSObject<OS_dispatch_queue> * queue;
- (id)init;
- (void)addObserver:(id)arg0 forContext:(id)arg1;
- (void)removeObserver:(id)arg0 forContext:(id)arg1;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (NSMapTable *)trampolines;
- (NSObject<OS_dispatch_queue> *)queue;
+ (id)sharedProxy;
@end
@interface RACKVOTrampoline : RACDisposable <RACDisposable>
{
	NSString * _keyPath;
	@? _block;
	NSObject * _unsafeTarget;
	NSObject * _weakTarget;
	NSObject * _observer;
}
@property (nonatomic, strong) NSString * keyPath;
@property (nonatomic, assign) @? block;
@property (nonatomic, strong) NSObject * unsafeTarget;
@property (nonatomic, strong) NSObject * weakTarget;
@property (nonatomic, strong) NSObject * observer;
- (id)initWithTarget:(id)arg0 observer:(id)arg1 keyPath:(id)arg2 options:(id)arg3 block:(id)arg4;
- (void)dealloc;
- (void)dispose;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(id)arg3;
// - (void).cxx_destruct;
- (NSString *)keyPath;
- (@?)block;
- (NSObject *)unsafeTarget;
- (NSObject *)weakTarget;
- (NSObject *)observer;
@end
@interface RACMulticastConnection : NSObject
{
	RACSubject * _signal;
	int _hasConnected;
	RACSignal * _sourceSignal;
	RACSerialDisposable * _serialDisposable;
}
@property (nonatomic, strong) RACSignal * sourceSignal;
@property (nonatomic, strong) RACSerialDisposable * serialDisposable;
@property (nonatomic, strong) RACSubject * signal;
- (id)initWithSourceSignal:(id)arg0 subject:(id)arg1;
- (id)connect;
- (id)autoconnect;
// - (void).cxx_destruct;
- (RACSubject *)signal;
- (RACSignal *)sourceSignal;
- (RACSerialDisposable *)serialDisposable;
- (void)setSerialDisposable:(RACSerialDisposable *)arg0;
@end
@interface RACObjCRuntime : NSObject
+ (Class)createClass:(id)arg0 inheritingFromClass:(id)arg1;
@end
@interface RACPassthroughSubscriber : NSObject
{
	<RACSubscriber> * _innerSubscriber;
	RACSignal * _signal;
	RACCompoundDisposable * _disposable;
}
@property (nonatomic, strong) <RACSubscriber> * innerSubscriber;
@property (nonatomic, strong) RACSignal * signal;
@property (nonatomic, strong) RACCompoundDisposable * disposable;
- (id)initWithSubscriber:(id)arg0 signal:(id)arg1 disposable:(id)arg2;
- (void)sendNext:(id)arg0;
- (void)sendError:(id)arg0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)arg0;
// - (void).cxx_destruct;
- (<RACSubscriber> *)innerSubscriber;
- (RACSignal *)signal;
- (RACCompoundDisposable *)disposable;
@end
@interface RACQueueScheduler : RACScheduler <RACScheduler>
{
	NSObject<OS_dispatch_queue> * _queue;
}
@property (nonatomic, strong) NSObject<OS_dispatch_queue> * queue;
- (id)initWithName:(id)arg0 queue:(id)arg1;
- (id)schedule:(id)arg0;
- (id)after:(id)arg0 schedule:(id)arg1;
- (id)after:(id)arg0 repeatingEvery:(id)arg1 withLeeway:(id)arg2 schedule:(id)arg3;
// - (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
+ (unsigned long long)wallTimeWithDate:(id)arg0;
@end
@interface RACReplaySubject : RACSubject <RACSubject>
{
	BOOL _hasCompleted;
	BOOL _hasError;
	uint64_t _capacity;
	NSMutableArray * _valuesReceived;
	NSError * _error;
}
@property (nonatomic, assign) uint64_t capacity;
@property (nonatomic, strong) NSMutableArray * valuesReceived;
@property (nonatomic, assign) BOOL hasCompleted;
@property (nonatomic, assign) BOOL hasError;
@property (nonatomic, strong) NSError * error;
- (id)init;
- (id)initWithCapacity:(id)arg0;
- (id)subscribe:(id)arg0;
- (void)sendNext:(id)arg0;
- (void)sendCompleted;
- (void)sendError:(id)arg0;
// - (void).cxx_destruct;
- (unsigned long long)capacity;
- (NSMutableArray *)valuesReceived;
- (char)hasCompleted;
- (void)setHasCompleted:(BOOL)arg0;
- (char)hasError;
- (void)setHasError:(BOOL)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
+ (id)replaySubjectWithCapacity:(id)arg0;
@end
@interface RACReturnSignal : RACSignal <RACSignal>
{
	@ _value;
}
@property (nonatomic, assign) @ value;
- (void)setName:(id)arg0;
- (id)name;
- (id)subscribe:(id)arg0;
// - (void).cxx_destruct;
- (@)value;
+ (id)return:(id)arg0;
@end
@interface RACScheduler : NSObject
{
	NSString * _name;
}
@property (nonatomic, strong) NSString * name;
- (id)description;
- (id)initWithName:(id)arg0;
- (id)schedule:(id)arg0;
- (id)after:(id)arg0 schedule:(id)arg1;
- (id)afterDelay:(id)arg0 schedule:(id)arg1;
- (id)after:(id)arg0 repeatingEvery:(id)arg1 withLeeway:(id)arg2 schedule:(id)arg3;
- (id)scheduleRecursiveBlock:(id)arg0;
- (void)scheduleRecursiveBlock:(id)arg0 addingToDisposable:(id)arg1;
- (void)performAsCurrentScheduler:(id)arg0;
// - (void).cxx_destruct;
- (NSString *)name;
+ (id)schedulerWithQueue:(id)arg0 name:(id)arg1;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)schedulerWithPriority:(id)arg0 name:(id)arg1;
+ (id)schedulerWithPriority:(id)arg0;
+ (id)scheduler;
+ (id)subscriptionScheduler;
+ (char)isOnMainThread;
+ (id)currentScheduler;
@end
@interface RACScopedDisposable : RACDisposable <RACDisposable>
- (void)dealloc;
- (id)asScopedDisposable;
+ (id)scopedDisposableWithDisposable:(id)arg0;
@end
@interface RACSequenceEnumerator : NSEnumerator
{
	RACSequence * _sequence;
}
@property (nonatomic, strong) RACSequence * sequence;
- (id)nextObject;
// - (void).cxx_destruct;
- (RACSequence *)sequence;
- (void)setSequence:(RACSequence *)arg0;
@end
@interface RACSequence : RACStream <RACStream>
@property (nonatomic, strong) id head;
@property (nonatomic, strong) id tail;
@property (nonatomic, strong) id array;
@property (nonatomic, strong) id objectEnumerator;
@property (nonatomic, strong) id eagerSequence;
@property (nonatomic, strong) id lazySequence;
- (id)foldLeftWithStart:(id)arg0 combine:(id)arg1;
- (id)foldRightWithStart:(id)arg0 combine:(id)arg1;
- (id)head;
- (id)tail;
- (id)bind:(id)arg0;
- (id)bind:(id)arg0 passingThroughValuesFromSequence:(id)arg1;
- (id)concat:(id)arg0;
- (id)zipWith:(id)arg0;
- (id)array;
- (id)objectEnumerator;
- (id)signal;
- (id)signalWithScheduler:(id)arg0;
- (id)foldLeftWithStart:(id)arg0 reduce:(id)arg1;
- (id)foldRightWithStart:(id)arg0 reduce:(id)arg1;
- (char)any:(id)arg0;
- (char)all:(id)arg0;
- (id)objectPassingTest:(id)arg0;
- (id)eagerSequence;
- (id)lazySequence;
- (id)copyWithZone:(id)arg0;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (unsigned long long)countByEnumeratingWithState:(id)arg0 objects:(id)arg1 count:(id)arg2;
- (unsigned long long)hash;
- (char)isEqual:(id)arg0;
+ (id)sequenceWithHeadBlock:(id)arg0 tailBlock:(id)arg1;
+ (id)empty;
+ (id)return:(id)arg0;
@end
@interface RACSerialDisposable : RACDisposable <RACDisposable>
{
	RACDisposable * _disposable;
	BOOL _disposed;
	int _spinLock;
}
@property (nonatomic, strong) RACDisposable * disposable;
- (char)isDisposed;
- (RACDisposable *)disposable;
- (void)setDisposable:(RACDisposable *)arg0;
- (id)initWithBlock:(id)arg0;
- (id)swapInDisposable:(id)arg0;
- (void)dispose;
// - (void).cxx_destruct;
+ (id)serialDisposableWithDisposable:(id)arg0;
@end
@interface RACSignal : RACStream <RACStream>
@property (nonatomic, strong) id sequence;
- (id)windowWithStart:(id)arg0 close:(id)arg1;
- (id)buffer:(id)arg0;
- (id)let:(id)arg0;
- (id)timeout:(id)arg0;
- (id)bufferWithTime:(id)arg0;
- (id)toProperty:(id)arg0 onObject:(id)arg1;
- (id)ignoreElements;
- (id)sequenceNext:(id)arg0;
- (id)aggregateWithStart:(id)arg0 combine:(id)arg1;
- (id)aggregateWithStartFactory:(id)arg0 combine:(id)arg1;
- (id)executeCommand:(id)arg0;
- (id)doNext:(id)arg0;
- (id)doError:(id)arg0;
- (id)doCompleted:(id)arg0;
- (id)throttle:(id)arg0;
- (id)throttle:(id)arg0 valuesPassingTest:(id)arg1;
- (id)delay:(id)arg0;
- (id)repeat;
- (id)catch:(id)arg0;
- (id)catchTo:(id)arg0;
- (id)try:(id)arg0;
- (id)tryMap:(id)arg0;
- (id)initially:(id)arg0;
- (id)finally:(id)arg0;
- (id)bufferWithTime:(id)arg0 onScheduler:(id)arg1;
- (id)collect;
- (id)takeLast:(id)arg0;
- (id)combineLatestWith:(id)arg0;
- (id)merge:(id)arg0;
- (id)flatten:(id)arg0;
- (id)then:(id)arg0;
- (id)concat;
- (id)aggregateWithStartFactory:(id)arg0 reduce:(id)arg1;
- (id)aggregateWithStart:(id)arg0 reduce:(id)arg1;
- (id)aggregateWithStart:(id)arg0 reduceWithIndex:(id)arg1;
- (id)setKeyPath:(id)arg0 onObject:(id)arg1;
- (id)setKeyPath:(id)arg0 onObject:(id)arg1 nilValue:(id)arg2;
- (id)takeUntil:(id)arg0;
- (id)takeUntilReplacement:(id)arg0;
- (id)switchToLatest;
- (id)first;
- (id)firstOrDefault:(id)arg0;
- (id)firstOrDefault:(id)arg0 success:(id)arg1 error:(id)arg2;
- (char)waitUntilCompleted:(id)arg0;
- (id)toArray;
- (id)sequence;
- (id)publish;
- (id)multicast:(id)arg0;
- (id)replay;
- (id)replayLast;
- (id)replayLazily;
- (id)timeout:(id)arg0 onScheduler:(id)arg1;
- (id)deliverOn:(id)arg0;
- (id)subscribeOn:(id)arg0;
- (id)deliverOnMainThread;
- (id)groupBy:(id)arg0 transform:(id)arg1;
- (id)groupBy:(id)arg0;
- (id)any;
- (id)any:(id)arg0;
- (id)all:(id)arg0;
- (id)retry:(id)arg0;
- (id)retry;
- (id)sample:(id)arg0;
- (id)ignoreValues;
- (id)materialize;
- (id)dematerialize;
- (id)not;
- (id)and;
- (id)or;
- (id)reduceApply;
- (id)asynchronousFirstOrDefault:(id)arg0 success:(id)arg1 error:(id)arg2;
- (char)asynchronouslyWaitUntilCompleted:(id)arg0;
- (id)logAll;
- (id)logNext;
- (id)logError;
- (id)logCompleted;
- (id)subscribe:(id)arg0;
- (id)subscribeNext:(id)arg0;
- (id)subscribeNext:(id)arg0 completed:(id)arg1;
- (id)subscribeNext:(id)arg0 error:(id)arg1 completed:(id)arg2;
- (id)subscribeError:(id)arg0;
- (id)subscribeCompleted:(id)arg0;
- (id)subscribeNext:(id)arg0 error:(id)arg1;
- (id)subscribeError:(id)arg0 completed:(id)arg1;
- (id)bind:(id)arg0;
- (id)concat:(id)arg0;
- (id)zipWith:(id)arg0;
- (id)refreshWhen:(id)arg0;
- (id)backoffRetryReplayLast;
- (id)backoffRetry;
- (id)backoffRetry:(id)arg0;
- (id)description;
+ (id)interval:(id)arg0;
+ (id)interval:(id)arg0 withLeeway:(id)arg1;
+ (id)combineLatest:(id)arg0;
+ (id)combineLatest:(id)arg0 reduce:(id)arg1;
+ (id)merge:(id)arg0;
+ (id)interval:(id)arg0 onScheduler:(id)arg1;
+ (id)interval:(id)arg0 onScheduler:(id)arg1 withLeeway:(id)arg2;
+ (id)switch:(id)arg0 cases:(id)arg1 default:(id)arg2;
+ (id)if:(id)arg0 then:(id)arg1 else:(id)arg2;
+ (id)defer:(id)arg0;
+ (id)startWithScheduler:(id)arg0 subjectBlock:(id)arg1;
+ (id)start:(id)arg0;
+ (id)startWithScheduler:(id)arg0 block:(id)arg1;
+ (id)empty;
+ (id)return:(id)arg0;
+ (id)createSignal:(id)arg0;
+ (id)error:(id)arg0;
+ (id)never;
+ (id)startEagerlyWithScheduler:(id)arg0 block:(id)arg1;
+ (id)startLazilyWithScheduler:(id)arg0 block:(id)arg1;
@end
@interface RACSignalSequence : RACSequence <RACSequence>
{
	RACReplaySubject * _subject;
}
@property (nonatomic, strong) RACReplaySubject * subject;
- (id)head;
- (id)tail;
- (id)array;
- (id)description;
// - (void).cxx_destruct;
- (RACReplaySubject *)subject;
+ (id)sequenceWithSignal:(id)arg0;
@end
@interface RACStream : NSObject
{
	NSString * _name;
}
@property (nonatomic, strong) NSString * name;
- (id)sequenceMany:(id)arg0;
- (id)scanWithStart:(id)arg0 combine:(id)arg1;
- (id)mapPreviousWithStart:(id)arg0 reduce:(id)arg1;
- (id)flattenMap:(id)arg0;
- (id)flatten;
- (id)map:(id)arg0;
- (id)mapReplace:(id)arg0;
- (id)combinePreviousWithStart:(id)arg0 reduce:(id)arg1;
- (id)filter:(id)arg0;
- (id)ignore:(id)arg0;
- (id)reduceEach:(id)arg0;
- (id)startWith:(id)arg0;
- (id)skip:(id)arg0;
- (id)take:(id)arg0;
- (id)scanWithStart:(id)arg0 reduce:(id)arg1;
- (id)scanWithStart:(id)arg0 reduceWithIndex:(id)arg1;
- (id)takeUntilBlock:(id)arg0;
- (id)takeWhileBlock:(id)arg0;
- (id)skipUntilBlock:(id)arg0;
- (id)skipWhileBlock:(id)arg0;
- (id)distinctUntilChanged;
- (id)init;
- (id)bind:(id)arg0;
- (id)concat:(id)arg0;
- (id)zipWith:(id)arg0;
- (id)setNameWithFormat:(id)arg0;
// - (void).cxx_destruct;
- (NSString *)name;
- (void)setName:(NSString *)arg0;
+ (id)join:(id)arg0 block:(id)arg1;
+ (id)zip:(id)arg0;
+ (id)zip:(id)arg0 reduce:(id)arg1;
+ (id)concat:(id)arg0;
+ (id)empty;
+ (id)return:(id)arg0;
@end
@interface RACStringSequence : RACSequence <RACSequence>
{
	NSString * _string;
	uint64_t _offset;
}
@property (nonatomic, strong) NSString * string;
@property (nonatomic, assign) uint64_t offset;
- (id)head;
- (id)tail;
- (id)array;
- (id)description;
// - (void).cxx_destruct;
- (NSString *)string;
- (unsigned long long)offset;
+ (id)sequenceWithString:(id)arg0 offset:(id)arg1;
@end
@interface RACSubject : RACSignal <RACSignal>
{
	NSMutableArray * _subscribers;
	RACCompoundDisposable * _disposable;
}
@property (nonatomic, strong) NSMutableArray * subscribers;
@property (nonatomic, strong) RACCompoundDisposable * disposable;
- (id)init;
- (void)dealloc;
- (id)subscribe:(id)arg0;
- (void)enumerateSubscribersUsingBlock:(id)arg0;
- (void)sendNext:(id)arg0;
- (void)sendError:(id)arg0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)arg0;
// - (void).cxx_destruct;
- (NSMutableArray *)subscribers;
- (RACCompoundDisposable *)disposable;
+ (id)subject;
@end
@interface RACSubscriber : NSObject
{
	@? _next;
	@? _error;
	@? _completed;
	RACCompoundDisposable * _disposable;
}
@property (nonatomic, assign) @? next;
@property (nonatomic, assign) @? error;
@property (nonatomic, assign) @? completed;
@property (nonatomic, strong) RACCompoundDisposable * disposable;
- (id)init;
- (void)dealloc;
- (void)sendNext:(id)arg0;
- (void)sendError:(id)arg0;
- (void)sendCompleted;
- (void)didSubscribeWithDisposable:(id)arg0;
// - (void).cxx_destruct;
- (@?)next;
- (void)setNext:(@?)arg0;
- (@?)error;
- (void)setError:(@?)arg0;
- (@?)completed;
- (void)setCompleted:(@?)arg0;
- (RACCompoundDisposable *)disposable;
+ (id)subscriberWithNext:(id)arg0 error:(id)arg1 completed:(id)arg2;
@end
@interface RACSubscriptingAssignmentTrampoline : NSObject
{
	@ _target;
	@ _nilValue;
}
@property (nonatomic, assign) @ target;
@property (nonatomic, assign) @ nilValue;
- (id)initWithTarget:(id)arg0 nilValue:(id)arg1;
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
// - (void).cxx_destruct;
- (@)target;
- (@)nilValue;
@end
@interface RACSubscriptionScheduler : RACScheduler <RACScheduler>
{
	RACScheduler * _backgroundScheduler;
}
@property (nonatomic, strong) RACScheduler * backgroundScheduler;
- (id)init;
- (id)schedule:(id)arg0;
- (id)after:(id)arg0 schedule:(id)arg1;
- (id)after:(id)arg0 repeatingEvery:(id)arg1 withLeeway:(id)arg2 schedule:(id)arg3;
// - (void).cxx_destruct;
- (RACScheduler *)backgroundScheduler;
@end
@interface RACTargetQueueScheduler : RACQueueScheduler <RACQueueScheduler>
- (id)initWithName:(id)arg0 targetQueue:(id)arg1;
@end
@interface RACTestScheduler : RACScheduler <RACScheduler>
{
	__CFBinaryHeap= _scheduledActions;
	uint64_t _numberOfDirectlyScheduledBlocks;
}
@property (nonatomic, assign) __CFBinaryHeap= scheduledActions;
@property (nonatomic, assign) uint64_t numberOfDirectlyScheduledBlocks;
- (id)init;
- (void)dealloc;
- (void)step;
- (void)step:(id)arg0;
- (void)stepAll;
- (id)schedule:(id)arg0;
- (id)after:(id)arg0 schedule:(id)arg1;
- (id)after:(id)arg0 repeatingEvery:(id)arg1 withLeeway:(id)arg2 schedule:(id)arg3;
- (__CFBinaryHeap=)scheduledActions;
- (unsigned long long)numberOfDirectlyScheduledBlocks;
- (void)setNumberOfDirectlyScheduledBlocks:(uint64_t)arg0;
@end
@interface RACTestSchedulerAction : NSObject
{
	NSDate * _date;
	@? _block;
	RACDisposable * _disposable;
}
@property (nonatomic, strong) NSDate * date;
@property (nonatomic, assign) @? block;
@property (nonatomic, strong) RACDisposable * disposable;
- (id)initWithDate:(id)arg0 block:(id)arg1;
- (id)description;
// - (void).cxx_destruct;
- (NSDate *)date;
- (@?)block;
- (RACDisposable *)disposable;
@end
@interface RACTupleNil : NSObject
- (id)copyWithZone:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
+ (id)tupleNil;
@end
@interface RACTuple : NSObject
{
	NSArray * _backingArray;
}
@property (nonatomic, strong) id rac_sequence;
@property (nonatomic, strong) NSArray * backingArray;
@property (nonatomic, strong) id count;
@property (nonatomic, strong) id first;
@property (nonatomic, strong) id second;
@property (nonatomic, strong) id third;
@property (nonatomic, strong) id fourth;
@property (nonatomic, strong) id fifth;
@property (nonatomic, strong) id last;
- (id)rac_description;
- (id)objectAtIndexedSubscript:(id)arg0;
- (id)rac_sequence;
- (id)init;
- (id)description;
- (char)isEqual:(id)arg0;
- (unsigned long long)hash;
- (unsigned long long)countByEnumeratingWithState:(id)arg0 objects:(id)arg1 count:(id)arg2;
- (id)copyWithZone:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)objectAtIndex:(id)arg0;
- (id)allObjects;
- (id)tupleByAddingObject:(id)arg0;
- (unsigned long long)count;
- (id)first;
- (id)second;
- (id)third;
- (id)fourth;
- (id)fifth;
- (id)last;
// - (void).cxx_destruct;
- (NSArray *)backingArray;
- (void)setBackingArray:(NSArray *)arg0;
+ (id)tupleWithObjectsFromArray:(id)arg0;
+ (id)tupleWithObjectsFromArray:(id)arg0 convertNullsToNils:(id)arg1;
+ (id)tupleWithObjects:(id)arg0;
@end
@interface RACTupleUnpackingTrampoline : NSObject
- (void)setObject:(id)arg0 forKeyedSubscript:(id)arg1;
+ (id)trampoline;
@end
@interface RACTupleSequence : RACSequence <RACSequence>
{
	NSArray * _tupleBackingArray;
	uint64_t _offset;
}
@property (nonatomic, strong) NSArray * tupleBackingArray;
@property (nonatomic, assign) uint64_t offset;
- (id)head;
- (id)tail;
- (id)array;
- (id)description;
// - (void).cxx_destruct;
- (NSArray *)tupleBackingArray;
- (unsigned long long)offset;
+ (id)sequenceWithTupleBackingArray:(id)arg0 offset:(id)arg1;
@end
@interface RACUnarySequence : RACSequence <RACSequence>
{
	@ _head;
}
@property (nonatomic, assign) @ head;
- (id)tail;
- (id)bind:(id)arg0;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)arg0;
// - (void).cxx_destruct;
- (@)head;
- (void)setHead:(@)arg0;
+ (id)return:(id)arg0;
@end
@interface RACUnit : NSObject
+ (id)defaultUnit;
@end
@interface RACValueTransformer : NSValueTransformer
{
	@? transformBlock;
}
@property (nonatomic, assign) @? transformBlock;
- (id)transformedValue:(id)arg0;
// - (void).cxx_destruct;
- (@?)transformBlock;
- (void)setTransformBlock:(@?)arg0;
+ (char)allowsReverseTransformation;
+ (id)transformerWithBlock:(id)arg0;
@end
@interface PodsDummy_Pods_Annotate_SSKeychain : NSObject
@end
@interface SSKeychain : NSObject
+ (id)passwordForService:(id)arg0 account:(id)arg1;
+ (id)passwordForService:(id)arg0 account:(id)arg1 error:(id)arg2;
+ (id)passwordDataForService:(id)arg0 account:(id)arg1;
+ (id)passwordDataForService:(id)arg0 account:(id)arg1 error:(id)arg2;
+ (char)deletePasswordForService:(id)arg0 account:(id)arg1;
+ (char)deletePasswordForService:(id)arg0 account:(id)arg1 error:(id)arg2;
+ (char)setPassword:(id)arg0 forService:(id)arg1 account:(id)arg2;
+ (char)setPassword:(id)arg0 forService:(id)arg1 account:(id)arg2 error:(id)arg3;
+ (char)setPasswordData:(id)arg0 forService:(id)arg1 account:(id)arg2;
+ (char)setPasswordData:(id)arg0 forService:(id)arg1 account:(id)arg2 error:(id)arg3;
+ (id)allAccounts;
+ (id)allAccounts:(id)arg0;
+ (id)accountsForService:(id)arg0;
+ (id)accountsForService:(id)arg0 error:(id)arg1;
@end
@interface SSKeychainQuery : NSObject
{
	NSString * _account;
	NSString * _service;
	NSString * _label;
	NSData * _passwordData;
	NSString * _accessGroup;
	uint64_t _synchronizationMode;
}
@property (nonatomic, strong) NSString * account;
@property (nonatomic, strong) NSString * service;
@property (nonatomic, strong) NSString * label;
@property (nonatomic, strong) NSString * accessGroup;
@property (nonatomic, assign) uint64_t synchronizationMode;
@property (nonatomic, strong) NSData * passwordData;
@property (nonatomic, strong) id passwordObject;
@property (nonatomic, strong) id password;
- (char)save:(id)arg0;
- (char)deleteItem:(id)arg0;
- (id)fetchAll:(id)arg0;
- (char)fetch:(id)arg0;
- (void)setPasswordObject:(id)arg0;
- (id)passwordObject;
- (void)setPassword:(id)arg0;
- (id)password;
- (id)query;
// - (void).cxx_destruct;
- (NSString *)account;
- (void)setAccount:(NSString *)arg0;
- (NSString *)service;
- (void)setService:(NSString *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (NSData *)passwordData;
- (void)setPasswordData:(NSData *)arg0;
- (NSString *)accessGroup;
- (void)setAccessGroup:(NSString *)arg0;
- (unsigned long long)synchronizationMode;
- (void)setSynchronizationMode:(uint64_t)arg0;
+ (char)isSynchronizationAvailable;
+ (id)errorWithCode:(id)arg0;
@end
@interface FABSettingsOnboardingManager : NSObject
{
	BOOL _hasAttemptedAppConfigure;
	FABSettings * _settingsModel;
	FABApplicationIdentiferModel * _appIdentifierModel;
	FABOnboardingOperation * _onboardingOperation;
	NSFileManager * _fileManager;
	NSDictionary * _configuration;
	NSDictionary * _defaultConfiguration;
	NSString * _APIKey;
	NSDictionary * _kitVersions;
	NSString * _advertisingToken;
}
@property (nonatomic, strong) FABSettings * settingsModel;
@property (nonatomic, strong) FABApplicationIdentiferModel * appIdentifierModel;
@property (nonatomic, strong) FABOnboardingOperation * onboardingOperation;
@property (nonatomic, strong) NSFileManager * fileManager;
@property (nonatomic, assign) BOOL hasAttemptedAppConfigure;
@property (nonatomic, strong) NSDictionary * configuration;
@property (nonatomic, strong) NSDictionary * defaultConfiguration;
@property (nonatomic, strong) NSString * APIKey;
@property (nonatomic, strong) NSDictionary * kitVersions;
@property (nonatomic, strong) NSString * advertisingToken;
- (id)initWithApplicationIdentifierModel:(id)arg0 advertisingToken:(id)arg1;
- (void)beginSettingsAndOnboardingOperationsWithAPIKey:(id)arg0 kitVersions:(id)arg1;
- (void)beginSettingsDownload;
- (void)beginOnboarding:(id)arg0 endpointString:(id)arg1;
- (FABSettings *)settingsModel;
- (NSDictionary *)configuration;
- (NSDictionary *)defaultConfiguration;
- (id)valueForConfigurationKey:(id)arg0;
- (id)appIconHash;
- (void)onboardingOperation:(id)arg0 didCompleteAppCreationWithError:(id)arg1;
- (void)onboardingOperation:(id)arg0 didCompleteAppUpdateWithError:(id)arg1;
- (void)operation:(id)arg0 didDownloadAndSaveSettingsWithError:(id)arg1;
- (id)settingsURL;
- (id)settingsPath;
- (void)postSettingsDownloadCompletedNotification;
// - (void).cxx_destruct;
- (void)setSettingsModel:(FABSettings *)arg0;
- (FABApplicationIdentiferModel *)appIdentifierModel;
- (void)setAppIdentifierModel:(FABApplicationIdentiferModel *)arg0;
- (FABOnboardingOperation *)onboardingOperation;
- (void)setOnboardingOperation:(FABOnboardingOperation *)arg0;
- (NSFileManager *)fileManager;
- (void)setFileManager:(NSFileManager *)arg0;
- (char)hasAttemptedAppConfigure;
- (void)setHasAttemptedAppConfigure:(BOOL)arg0;
- (void)setConfiguration:(NSDictionary *)arg0;
- (void)setDefaultConfiguration:(NSDictionary *)arg0;
- (NSString *)APIKey;
- (void)setAPIKey:(id)arg0;
- (NSDictionary *)kitVersions;
- (void)setKitVersions:(NSDictionary *)arg0;
- (NSString *)advertisingToken;
+ (id)settingsDirectoryPath;
@end
@interface FABObfuscator : NSObject
+ (id)obfuscatedDataFromDictionary:(id)arg0;
+ (id)dictionaryWithObfuscatedData:(id)arg0;
@end
@interface CLSURLSessionConfiguration : NSObject
{
	NSDictionary * _additionalHeaders;
	NSURLCache * _URLCache;
	uint64_t _cookiePolicy;
}
@property (nonatomic, strong) id HTTPAdditionalHeaders;
@property (nonatomic, strong) NSURLCache * URLCache;
@property (nonatomic, strong) id HTTPCookieAcceptPolicy;
@property (nonatomic, strong) id sessionSendsLaunchEvents;
- (id)copyWithZone:(id)arg0;
- (char)sessionSendsLaunchEvents;
- (void)setSessionSendsLaunchEvents:(id)arg0;
// - (void).cxx_destruct;
- (NSURLCache *)URLCache;
- (void)setURLCache:(id)arg0;
- (id)HTTPAdditionalHeaders;
- (void)setHTTPAdditionalHeaders:(id)arg0;
- (unsigned long long)HTTPCookieAcceptPolicy;
- (void)setHTTPCookieAcceptPolicy:(id)arg0;
+ (id)defaultSessionConfiguration;
+ (id)ephemeralSessionConfiguration;
+ (id)backgroundSessionConfiguration:(id)arg0;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg0;
@end
@interface FABNetworkTaskWrapper : NSObject
{
	NSURLRequest * _request;
	@? _completionHandlerBlock;
}
@property (nonatomic, strong) NSURLRequest * request;
@property (nonatomic, assign) @? completionHandlerBlock;
- (id)initWithRequest:(id)arg0 block:(id)arg1;
// - (void).cxx_destruct;
- (NSURLRequest *)request;
- (@?)completionHandlerBlock;
@end
@interface FABNetworkTaskUtility : NSObject
{
	@? _backgroundCompletionHandler;
	FABCertificatePinner * _certPinner;
	NSURLSession * _session;
}
@property (nonatomic, assign) @? backgroundCompletionHandler;
@property (nonatomic, strong) FABCertificatePinner * certPinner;
@property (nonatomic, strong) NSURLSession * session;
- (id)initWithQueue:(id)arg0;
- (void)beginDownloadTaskWithRequest:(id)arg0 maxNumberOfRetries:(id)arg1 completionHandler:(id)arg2;
- (void)beginDataTaskWithRequest:(id)arg0 maxNumberOfRetries:(id)arg1 completionHandler:(id)arg2;
- (void)runAfterRetryValueFromResponse:(id)arg0 block:(id)arg1;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2;
// - (void).cxx_destruct;
- (@?)backgroundCompletionHandler;
- (void)setBackgroundCompletionHandler:(@?)arg0;
- (FABCertificatePinner *)certPinner;
- (NSURLSession *)session;
@end
@interface FABIcon : NSObject
{
	BOOL _prerendered;
	NSData * _data;
	NSString * _dataHash;
	{CGSize="width"d"height"d} _size;
}
@property (nonatomic, strong) NSData * data;
@property (nonatomic, strong) NSString * dataHash;
@property (nonatomic, assign) {CGSize="width"d"height"d} size;
@property (nonatomic, assign) BOOL prerendered;
@property (nonatomic, strong) id surfaceArea;
@property (nonatomic, strong) id isWithinMaxSurfaceArea;
- (id)initWithData:(id)arg0 dataHash:(id)arg1 size:(id)arg2 prerendered:(id)arg3;
- (id)initWithData:(id)arg0 size:(id)arg1 prerendered:(id)arg2;
- (id)initWithData:(id)arg0 size:(id)arg1;
- (id)initWithImage:(id)arg0;
- (double)surfaceArea;
- (char)isWithinMaxSurfaceArea;
- (char)largerThanSize:(id)arg0;
// - (void).cxx_destruct;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSString *)dataHash;
- (void)setDataHash:(NSString *)arg0;
- ({CGSize="width"d"height"d})size;
- (void)setSize:({CGSize="width"d"height"d})arg0;
- (char)prerendered;
- (void)setPrerendered:(BOOL)arg0;
@end
@interface Fabric : NSObject
{
	BOOL _debug;
	BOOL _isFirstInstall;
	NSDictionary * _kitMap;
	NSDictionary * _SDKConfig;
	FABSettingsOnboardingManager * _settingsAndOnboardingManager;
	FABApplicationIdentiferModel * _applicationIdentifierModel;
	NSString * _APIKey;
	NSString * _installID;
	NSString * _executionIdentifier;
	NSString * _advertisingToken;
}
@property (nonatomic, assign) BOOL debug;
@property (nonatomic, strong) NSDictionary * kitMap;
@property (nonatomic, strong) NSDictionary * SDKConfig;
@property (nonatomic, strong) FABSettingsOnboardingManager * settingsAndOnboardingManager;
@property (nonatomic, strong) FABApplicationIdentiferModel * applicationIdentifierModel;
@property (nonatomic, strong) NSString * APIKey;
@property (nonatomic, strong) NSString * installID;
@property (nonatomic, assign) BOOL isFirstInstall;
@property (nonatomic, strong) NSString * executionIdentifier;
@property (nonatomic, strong) NSString * advertisingToken;
@property (nonatomic, strong) id settings;
@property (nonatomic, strong) id instanceIdentifier;
- (id)init;
- (void)onboardAppAndDownloadSettings;
- (id)kitForClass:(id)arg0;
- (id)SDKKitVersions;
- (id)readInstallationUUID;
- (id)generateInstallationUUID;
- (void)migrateLegacyPersistentData;
- (void)migrateNSUserDefaultsToCLSUserDefaults;
- (NSDictionary *)SDKConfig;
- (NSString *)APIKey;
- (id)validSDKConfigFromInfoPlist:(id)arg0;
- (id)configurationDictionaryForKit:(id)arg0;
- (id)settings;
- (id)instanceIdentifier;
// - (void).cxx_destruct;
- (char)debug;
- (void)setDebug:(BOOL)arg0;
- (NSDictionary *)kitMap;
- (void)setKitMap:(NSDictionary *)arg0;
- (void)setSDKConfig:(id)arg0;
- (FABSettingsOnboardingManager *)settingsAndOnboardingManager;
- (void)setSettingsAndOnboardingManager:(FABSettingsOnboardingManager *)arg0;
- (FABApplicationIdentiferModel *)applicationIdentifierModel;
- (void)setAPIKey:(id)arg0;
- (NSString *)installID;
- (char)isFirstInstall;
- (NSString *)executionIdentifier;
- (NSString *)advertisingToken;
- (void)setAdvertisingToken:(NSString *)arg0;
+ (id)sharedSDK;
+ (id)with:(id)arg0;
+ (id)kitsByAddingDigitsIfFound:(id)arg0;
+ (void)startInstance:(id)arg0;
@end
@interface CLSURLSessionTask : NSObject
{
	<CLSURLSessionTaskDelegate> * _delegate;
	NSURLRequest * _originalRequest;
	NSURLRequest * _currentRequest;
	NSURLResponse * _response;
	NSError * _error;
	dispatch_queue_s= _queue;
	BOOL _invokesDelegate;
}
@property (nonatomic, strong) NSURLRequest * originalRequest;
@property (nonatomic, strong) NSURLRequest * currentRequest;
@property (nonatomic, strong) NSURLResponse * response;
@property (nonatomic, strong) NSError * error;
@property (nonatomic, strong) <CLSURLSessionTaskDelegate> * delegate;
@property (nonatomic, assign) dispatch_queue_s= queue;
@property (nonatomic, assign) BOOL invokesDelegate;
- (id)init;
- (void)start;
- (void)cancel;
- (void)resume;
- (void)cleanup;
// - (void).cxx_destruct;
- (NSURLRequest *)currentRequest;
- (void)setCurrentRequest:(NSURLRequest *)arg0;
- (NSURLRequest *)originalRequest;
- (void)setOriginalRequest:(NSURLRequest *)arg0;
- (NSURLResponse *)response;
- (void)setResponse:(NSURLResponse *)arg0;
- (NSError *)error;
- (void)setError:(NSError *)arg0;
- (dispatch_queue_s=)queue;
- (char)invokesDelegate;
- (void)setInvokesDelegate:(BOOL)arg0;
- (<CLSURLSessionTaskDelegate> *)delegate;
- (void)setDelegate:(<CLSURLSessionTaskDelegate> *)arg0;
+ (id)task;
@end
@interface FABNetworkOperation : FABAsynchronousOperation <FABAsynchronousOperation>
{
	NSString * _APIKey;
}
@property (nonatomic, strong) NSString * APIKey;
- (id)initWithAPIKey:(id)arg0;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg0;
- (id)mutableRequestWithDefaultHTTPHeadersForURL:(id)arg0 timeout:(id)arg1;
- (id)userAgentString;
- (id)localeIdentifier;
// - (void).cxx_destruct;
- (NSString *)APIKey;
@end
@interface CLSURLSessionDataTask : CLSURLSessionTask <CLSURLSessionTask>
{
	@? _completionHandler;
	NSURLConnection * _connection;
	NSMutableData * _data;
	NSString * _taskDescription;
}
@property (nonatomic, strong) NSString * taskDescription;
@property (nonatomic, strong) NSURLConnection * connection;
@property (nonatomic, assign) @? completionHandler;
- (void)resume;
- (void)complete;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg0;
// - (void).cxx_destruct;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (@?)completionHandler;
- (void)setCompletionHandler:(@?)arg0;
- (NSString *)taskDescription;
- (void)setTaskDescription:(NSString *)arg0;
@end
@interface CLSUserDefaults : NSObject
{
	dispatch_queue_s= _access_queue;
	dispatch_queue_s= _io_queue;
	NSMutableDictionary * _dataDictionary;
	NSURL * _directoryURL;
	NSURL * _fileURL;
}
- (id)copyWithZone:(id)arg0;
- (id)retain;
- (id)release;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (id)objectForKey:(id)arg0;
- (id)stringForKey:(id)arg0;
- (char)boolForKey:(id)arg0;
- (void)setObject:(id)arg0 forKey:(id)arg1;
- (void)setString:(id)arg0 forKey:(id)arg1;
- (void)setBool:(id)arg0 forKey:(id)arg1;
- (void)removeObjectForKey:(id)arg0;
- (void)removeAllObjects;
- (id)dictionaryRepresentation;
- (void)synchronize;
- (id)loadDictionaryFromDisk;
- (void)migrateFromNSUserDefaults:(id)arg0;
+ (id)standardUserDefaults;
+ (id)allocWithZone:(id)arg0;
@end
@interface FABURLBuilder : NSObject
{
	NSMutableString * _URLString;
	uint64_t _queryParams;
}
@property (nonatomic, strong) NSMutableString * URLString;
@property (nonatomic, assign) uint64_t queryParams;
- (id)init;
- (id)escapeString:(id)arg0;
- (void)appendComponent:(id)arg0;
- (void)escapeAndAppendComponent:(id)arg0;
- (void)appendValue:(id)arg0 forQueryParam:(id)arg1;
- (id)URL;
// - (void).cxx_destruct;
- (NSMutableString *)URLString;
- (void)setURLString:(id)arg0;
- (unsigned long long)queryParams;
- (void)setQueryParams:(uint64_t)arg0;
+ (id)URLWithBase:(id)arg0;
@end
@interface CLSURLSession : NSObject
{
	<NSURLSessionDelegate> * _delegate;
	NSOperationQueue * _delegateQueue;
	NSURLSessionConfiguration * _configuration;
	NSMutableSet * _taskSet;
	dispatch_queue_s= _queue;
	NSString * _sessionDescription;
}
@property (nonatomic, strong) NSOperationQueue * delegateQueue;
@property (nonatomic, strong) <NSURLSessionDelegate> * delegate;
@property (nonatomic, strong) NSURLSessionConfiguration * configuration;
@property (nonatomic, strong) NSString * sessionDescription;
- (id)init;
- (void)getTasksWithCompletionHandler:(id)arg0;
- (void)removeTaskFromSet:(id)arg0;
- (void)configureTask:(id)arg0 withRequest:(id)arg1 block:(id)arg2;
- (char)shouldInvokeDelegateSelector:(id)arg0 forTask:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1;
- (id)downloadTaskWithRequest:(id)arg0;
- (id)downloadTaskWithURL:(id)arg0;
- (id)dataTaskWithRequest:(id)arg0 completionHandler:(id)arg1;
- (id)dataTaskWithRequest:(id)arg0;
- (id)uploadTaskWithRequest:(id)arg0 fromFile:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1;
- (id)task:(id)arg0 willPerformHTTPRedirection:(id)arg1 newRequest:(id)arg2;
- (void)task:(id)arg0 didCompleteWithError:(id)arg1;
- (void)task:(id)arg0 didReceiveResponse:(id)arg1;
- (void)task:(id)arg0 didReceiveData:(id)arg1;
- (void)downloadTask:(id)arg0 didFinishDownloadingToURL:(id)arg1;
// - (void).cxx_destruct;
- (<NSURLSessionDelegate> *)delegate;
- (void)setDelegate:(<NSURLSessionDelegate> *)arg0;
- (NSOperationQueue *)delegateQueue;
- (void)setDelegateQueue:(NSOperationQueue *)arg0;
- (NSURLSessionConfiguration *)configuration;
- (void)setConfiguration:(NSURLSessionConfiguration *)arg0;
- (NSString *)sessionDescription;
- (void)setSessionDescription:(NSString *)arg0;
+ (id)sessionWithConfiguration:(id)arg0;
+ (id)sessionWithConfiguration:(id)arg0 delegate:(id)arg1 delegateQueue:(id)arg2;
+ (id)newDefaultDelegateQueue;
@end
@interface FABCertificatePinner : NSObject
{
	NSArray * _certificates;
}
@property (nonatomic, strong) NSArray * certificates;
- (id)initWithCertificates:(id)arg0;
- (short)evaluateTrust:(id)arg0 result:(id)arg1;
- (char)handleChallenge:(id)arg0 fromURLSession:(id)arg1 completionHandler:(id)arg2;
// - (void).cxx_destruct;
- (NSArray *)certificates;
+ (id)createCertificationWithData:(id)arg0 length:(id)arg1;
@end
@interface FABAppIconUtility : NSObject
{
	FABIcon * _applicationIcon;
}
@property (nonatomic, strong) FABIcon * applicationIcon;
@property (nonatomic, strong) id appInfoDictionary;
- (id)appInfoDictionary;
- (FABIcon *)applicationIcon;
- (id)mainAppIcon;
- (id)fetchApplicationIcon;
// - (void).cxx_destruct;
- (void)setApplicationIcon:(FABIcon *)arg0;
@end
@interface FABMultipartMimeStreamEncoder : NSObject
{
	uint64_t _length;
	NSString * _boundary;
	NSOutputStream * _outputStream;
}
@property (nonatomic, strong) id contentTypeHTTPHeaderValue;
@property (nonatomic, strong) id contentLengthHTTPHeaderValue;
@property (nonatomic, assign) uint64_t length;
@property (nonatomic, strong) NSString * boundary;
@property (nonatomic, strong) id headerData;
@property (nonatomic, strong) id footerData;
@property (nonatomic, strong) NSOutputStream * outputStream;
- (id)initWithStream:(id)arg0 andBoundary:(id)arg1;
- (void)encode:(id)arg0;
- (id)contentTypeHTTPHeaderValue;
- (id)contentLengthHTTPHeaderValue;
- (void)beginEncoding;
- (void)endEncoding;
- (id)headerData;
- (id)footerData;
- (void)addFileData:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 fieldName:(id)arg3;
- (void)addValue:(id)arg0 fieldName:(id)arg1;
- (void)addFile:(id)arg0 fileName:(id)arg1 mimeType:(id)arg2 fieldName:(id)arg3;
- (char)writeBytes:(id)arg0 ofLength:(id)arg1;
- (void)writeData:(id)arg0;
// - (void).cxx_destruct;
- (unsigned long long)length;
- (void)setLength:(uint64_t)arg0;
- (NSString *)boundary;
- (void)setBoundary:(NSString *)arg0;
- (NSOutputStream *)outputStream;
- (void)setOutputStream:(NSOutputStream *)arg0;
+ (void)populateRequest:(id)arg0 withDataFromEncoder:(id)arg1;
+ (id)contentTypeHTTPHeaderValueWithBoundary:(id)arg0;
+ (id)encoderWithStream:(id)arg0 andBoundary:(id)arg1;
+ (id)generateBoundary;
@end
@interface CLSURLSessionDownloadTask : CLSURLSessionDataTask <CLSURLSessionDataTask>
{
	@? _downloadCompletionHandler;
	NSOutputStream * _outputStream;
	NSURL * _targetURL;
}
@property (nonatomic, assign) @? downloadCompletionHandler;
- (id)init;
- (void)dealloc;
- (id)temporaryFileURL;
- (void)cleanup;
- (void)complete;
- (void)writeDataToStream:(id)arg0;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (void)completeForError;
- (void)stream:(id)arg0 handleEvent:(id)arg1;
// - (void).cxx_destruct;
- (@?)downloadCompletionHandler;
- (void)setDownloadCompletionHandler:(@?)arg0;
@end
@interface FABSettings : NSObject
{
	BOOL _reportingEnabled;
	BOOL _errorReportingEnabled;
	NSDictionary * _settingsDictionary;
	NSNumber * _logBufferSize;
	NSNumber * _maxErrors;
	NSNumber * _maxCustomKeys;
	NSString * _settingsPath;
	NSFileManager * _fileManager;
}
@property (nonatomic, strong) NSDictionary * settingsDictionary;
@property (nonatomic, strong) id appNeedsOnboarding;
@property (nonatomic, strong) id appUpdateRequired;
@property (nonatomic, assign) BOOL reportingEnabled;
@property (nonatomic, assign) BOOL errorReportingEnabled;
@property (nonatomic, strong) NSNumber * logBufferSize;
@property (nonatomic, strong) NSNumber * maxErrors;
@property (nonatomic, strong) NSNumber * maxCustomKeys;
@property (nonatomic, strong) NSString * settingsPath;
@property (nonatomic, strong) NSFileManager * fileManager;
- (id)initWithSettingsPath:(id)arg0 fileManager:(id)arg1;
- (NSDictionary *)settingsDictionary;
- (char)appUpdateRequired;
- (char)appNeedsOnboarding;
- (id)appBundleIdentifier;
- (id)appPlatform;
- (id)appBuildVersion;
- (id)appDisplayVersion;
- (id)appSource;
- (id)appSettings;
- (id)appStatus;
- (void)clearSettingsDictionary;
- (id)settingsURLForEndpoint:(id)arg0 appInstanceIdentifer:(id)arg1 appIconHash:(id)arg2;
// - (void).cxx_destruct;
- (void)setSettingsDictionary:(NSDictionary *)arg0;
- (char)reportingEnabled;
- (char)errorReportingEnabled;
- (NSNumber *)logBufferSize;
- (NSNumber *)maxErrors;
- (NSNumber *)maxCustomKeys;
- (NSString *)settingsPath;
- (void)setSettingsPath:(NSString *)arg0;
- (NSFileManager *)fileManager;
- (void)setFileManager:(NSFileManager *)arg0;
@end
@interface FABApplicationIdentiferModel : NSObject
{
	NSDictionary * _architectureUUIDMap;
	NSString * _installID;
	FABIcon * _icon;
	NSString * _bundleIdentifier;
	NSString * _instanceIdentifier;
	{?="major"I"minor"I"bugfix"I} _builtSDK;
	{?="major"I"minor"I"bugfix"I} _minimumSDK;
}
@property (nonatomic, strong) NSDictionary * architectureUUIDMap;
@property (nonatomic, strong) id builtSDKString;
@property (nonatomic, strong) id minimumSDKString;
@property (nonatomic, strong) NSString * installID;
@property (nonatomic, strong) FABIcon * icon;
@property (nonatomic, strong) NSString * bundleIdentifier;
@property (nonatomic, strong) NSString * instanceIdentifier;
@property (nonatomic, assign) {?="major"I"minor"I"bugfix"I} builtSDK;
@property (nonatomic, assign) {?="major"I"minor"I"bugfix"I} minimumSDK;
- (id)initWithInstallID:(id)arg0;
- (id)builtSDKString;
- (id)minimumSDKString;
- (char)computeExecutableInfo;
- (char)computeInstanceIdentifier;
// - (void).cxx_destruct;
- (NSDictionary *)architectureUUIDMap;
- (void)setArchitectureUUIDMap:(NSDictionary *)arg0;
- (NSString *)installID;
- (FABIcon *)icon;
- (NSString *)bundleIdentifier;
- (NSString *)instanceIdentifier;
- (void)setInstanceIdentifier:(NSString *)arg0;
- ({?="major"I"minor"I"bugfix"I})builtSDK;
- ({?="major"I"minor"I"bugfix"I})minimumSDK;
@end
@interface FABDownloadAndSaveSettingsOperation : FABNetworkOperation <FABNetworkOperation>
{
	<FABDownloadAndSaveSettingsOperationDelegate> * _delegate;
	NSError * _error;
	NSURL * _settingsURL;
	NSFileManager * _fileManager;
	NSString * _settingsDirectoryPath;
	NSString * _settingsFilePath;
	NSString * _installIdentifier;
	NSString * _advertisingToken;
	FABNetworkTaskUtility * _networkClient;
}
@property (nonatomic, strong) <FABDownloadAndSaveSettingsOperationDelegate> * delegate;
@property (nonatomic, strong) NSError * error;
@property (nonatomic, strong) NSURL * settingsURL;
@property (nonatomic, strong) NSFileManager * fileManager;
@property (nonatomic, strong) NSString * settingsDirectoryPath;
@property (nonatomic, strong) NSString * settingsFilePath;
@property (nonatomic, strong) NSString * installIdentifier;
@property (nonatomic, strong) NSString * advertisingToken;
@property (nonatomic, strong) FABNetworkTaskUtility * networkClient;
- (id)initWithAPIKey:(id)arg0;
- (id)initWithAPIKey:(id)arg0 delegate:(id)arg1 settingsURL:(id)arg2 settingsDirectoryPath:(id)arg3 settingsFilePath:(id)arg4 fileManager:(id)arg5 installIdentifier:(id)arg6 advertisingToken:(id)arg7;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg0;
- (void)main;
// - (void).cxx_destruct;
- (<FABDownloadAndSaveSettingsOperationDelegate> *)delegate;
- (NSError *)error;
- (NSURL *)settingsURL;
- (NSFileManager *)fileManager;
- (NSString *)settingsDirectoryPath;
- (NSString *)settingsFilePath;
- (NSString *)installIdentifier;
- (NSString *)advertisingToken;
- (FABNetworkTaskUtility *)networkClient;
@end
@interface FABNetworkResponseHandler : NSObject
+ (id)headerForResponse:(id)arg0 withKey:(id)arg1;
+ (double)retryValueForResponse:(id)arg0;
+ (id)requestIdForResponse:(id)arg0;
+ (char)contentTypeForResponse:(id)arg0 matchesRequest:(id)arg1;
+ (id)errorForCode:(id)arg0 userInfo:(id)arg1;
+ (id)errorForResponse:(id)arg0 ofType:(id)arg1 status:(id)arg2;
+ (void)clientResponseType:(id)arg0 handler:(id)arg1;
+ (void)handleCompletedResponse:(id)arg0 forOriginalRequest:(id)arg1 error:(id)arg2 block:(id)arg3;
@end
@interface CLSURLSessionUploadTask : CLSURLSessionDataTask <CLSURLSessionDataTask>
@end
@interface FABOnboardingOperation : FABNetworkOperation <FABNetworkOperation>
{
	BOOL _shouldCreate;
	NSError * _error;
	FABApplicationIdentiferModel * _appIdentifierModel;
	NSString * _appEndpoint;
	<FABOnboardingOperationDelegate> * _delegate;
	FABNetworkTaskUtility * _networkClient;
	NSDictionary * _kitVersions;
}
@property (nonatomic, strong) NSError * error;
@property (nonatomic, assign) BOOL shouldCreate;
@property (nonatomic, strong) FABApplicationIdentiferModel * appIdentifierModel;
@property (nonatomic, strong) NSString * appEndpoint;
@property (nonatomic, strong) <FABOnboardingOperationDelegate> * delegate;
@property (nonatomic, strong) FABNetworkTaskUtility * networkClient;
@property (nonatomic, strong) NSDictionary * kitVersions;
- (id)initWithAPIKey:(id)arg0;
- (id)initWithDelegate:(id)arg0 shouldCreate:(id)arg1 APIKey:(id)arg2 kitVersions:(id)arg3 appIdentifierModel:(id)arg4 endpointString:(id)arg5;
- (void)main;
- (void)beginAppConfigure;
- (id)appBundleIdentifier;
- (id)appPlatform;
- (id)appName;
- (id)appBuildVersion;
- (id)appDisplayVersion;
- (id)appInstallSource;
- (id)errorForCode:(id)arg0 userInfo:(id)arg1;
- (id)appCreateURL;
- (id)appUpdateURL;
- (id)onboardingRequestForAppCreate:(id)arg0;
// - (void).cxx_destruct;
- (NSError *)error;
- (char)shouldCreate;
- (void)setShouldCreate:(BOOL)arg0;
- (FABApplicationIdentiferModel *)appIdentifierModel;
- (NSString *)appEndpoint;
- (<FABOnboardingOperationDelegate> *)delegate;
- (FABNetworkTaskUtility *)networkClient;
- (NSDictionary *)kitVersions;
@end
@interface FABNetworkClient : NSObject
{
	FABCertificatePinner * _certPinner;
	NSURLSession * _session;
}
@property (nonatomic, strong) FABCertificatePinner * certPinner;
@property (nonatomic, strong) NSURLSession * session;
- (id)init;
- (id)initWithQueue:(id)arg0;
- (id)initWithQueue:(id)arg0 pinnedCertificates:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg0 queue:(id)arg1 pinnedCertificates:(id)arg2;
- (void)startDataTaskWithRequest:(id)arg0 completionHandler:(id)arg1;
- (void)startDownloadTaskWithRequest:(id)arg0 completionHandler:(id)arg1;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2;
// - (void).cxx_destruct;
- (FABCertificatePinner *)certPinner;
- (NSURLSession *)session;
+ (double)randomDoubleWithMin:(id)arg0 max:(id)arg1;
+ (double)generateRandomJitter;
+ (double)computeDelayForResponse:(id)arg0 withRetryCount:(id)arg1;
+ (void)runAfterRetryValueFromResponse:(id)arg0 attempts:(id)arg1 onQueue:(id)arg2 block:(id)arg3;
+ (void)runAfterRetryValueFromResponse:(id)arg0 attempts:(id)arg1 block:(id)arg2;
+ (void)startDataTaskForSession:(id)arg0 withRequest:(id)arg1 retryCount:(id)arg2 completionHandler:(id)arg3;
+ (void)startDataTaskForSession:(id)arg0 withRequest:(id)arg1 completionHandler:(id)arg2;
+ (void)startDownloadTaskForSession:(id)arg0 withRequest:(id)arg1 retryCount:(id)arg2 completionHandler:(id)arg3;
+ (void)startDownloadTaskForSession:(id)arg0 withRequest:(id)arg1 completionHandler:(id)arg2;
@end
@interface FABAsynchronousOperation : NSOperation
{
	BOOL _isExecuting;
	BOOL _isFinished;
}
- (char)isConcurrent;
- (void)start;
- (void)main;
- (void)finish;
- (char)isFinished;
- (char)isExecuting;
@end
@interface CLAPIDeserializer : NSObject
+ (id)accountWithJSONDictionaryData:(id)arg0;
+ (id)accountWithAPIDictionary:(id)arg0;
+ (id)socketWithJSONDictionaryData:(id)arg0;
+ (id)socketWithJSONDictionary:(id)arg0;
+ (id)webItemArrayWithJSONArrayData:(id)arg0;
+ (id)webItemArrayWithAPIArray:(id)arg0;
+ (id)webItemWithJSONDictionaryData:(id)arg0;
+ (id)webItemWithAPIDictionary:(id)arg0;
+ (long long)webItemTypeForTypeString:(id)arg0;
+ (id)URLRequestWithS3ParametersDictionaryData:(id)arg0 fileName:(id)arg1 fileData:(id)arg2;
+ (id)URLRequestWithS3ParametersDictionary:(id)arg0 fileName:(id)arg1 fileData:(id)arg2;
+ (id)productsWithJSONArrayData:(id)arg0;
+ (id)dictionaryFromJSONData:(id)arg0;
+ (id)arrayFromJSONData:(id)arg0;
+ (id)_normalizedObjectFromDictionary:(id)arg0 forKey:(id)arg1;
+ (id)_dateAndTimeFromDictionary:(id)arg0 forKey:(id)arg1;
+ (id)_dateFromDictionary:(id)arg0 forKey:(id)arg1;
+ (id)_URLFromDictionary:(id)arg0 forKey:(id)arg1;
+ (id)_unicodeURLFromDictionary:(id)arg0 forKey:(id)arg1;
@end
@interface CLAPISerializer : NSObject
+ (id)webItemTypeStringForType:(id)arg0;
+ (id)accountWithEmail:(id)arg0 password:(id)arg1 acceptTerms:(id)arg2;
+ (id)itemWithName:(id)arg0;
+ (id)itemWithPrivate:(id)arg0;
+ (id)itemForRestore;
+ (id)bookmarkWithURL:(id)arg0 name:(id)arg1;
+ (id)bookmarkWithURL:(id)arg0 name:(id)arg1 private:(id)arg2;
+ (id)receiptWithBase64String:(id)arg0;
+ (id)JSONDataFromDictionary:(id)arg0;
+ (id)JSONDataFromArray:(id)arg0;
@end
@interface CLAPIEngine : NSObject
{
	NSString * _email;
	NSString * _password;
	NSURL * _baseURL;
	<CLAPIEngineDelegate> * _delegate;
	NSMutableSet * _transactions;
	BOOL _clearsCookies;
}
@property (nonatomic, strong) NSString * email;
@property (nonatomic, strong) NSString * password;
@property (nonatomic, strong) <CLAPIEngineDelegate> * delegate;
@property (nonatomic, strong) NSURL * baseURL;
@property (nonatomic, strong) NSMutableSet * transactions;
@property (nonatomic, assign) BOOL clearsCookies;
- (id)init;
- (id)initWithDelegate:(id)arg0;
- (char)isReady;
- (id)createAccountWithEmail:(id)arg0 password:(id)arg1 acceptTerms:(id)arg2 userInfo:(id)arg3;
- (id)changeNameOfItem:(id)arg0 toName:(id)arg1 userInfo:(id)arg2;
- (id)changeNameOfItemAtHref:(id)arg0 toName:(id)arg1 userInfo:(id)arg2;
- (id)changePrivacyOfItem:(id)arg0 toPrivate:(id)arg1 userInfo:(id)arg2;
- (id)changePrivacyOfItemAtHref:(id)arg0 toPrivate:(id)arg1 userInfo:(id)arg2;
- (id)getAccountInformationWithUserInfo:(id)arg0;
- (id)bookmarkLinkWithURL:(id)arg0 name:(id)arg1 userInfo:(id)arg2;
- (id)bookmarkLinkWithURL:(id)arg0 name:(id)arg1 options:(id)arg2 userInfo:(id)arg3;
- (id)restoreItem:(id)arg0 userInfo:(id)arg1;
- (id)restoreItemAtHref:(id)arg0 userInfo:(id)arg1;
- (id)deleteItem:(id)arg0 userInfo:(id)arg1;
- (id)getItemInformationAtURL:(id)arg0 userInfo:(id)arg1;
- (id)getItemInformation:(id)arg0 userInfo:(id)arg1;
- (id)deleteItemAtHref:(id)arg0 userInfo:(id)arg1;
- (id)getItemListStartingAtPage:(id)arg0 itemsPerPage:(id)arg1 userInfo:(id)arg2;
- (id)getItemListStartingAtPage:(id)arg0 ofType:(id)arg1 itemsPerPage:(id)arg2 userInfo:(id)arg3;
- (id)getItemListStartingAtPage:(id)arg0 ofType:(id)arg1 itemsPerPage:(id)arg2 showOnlyItemsInTrash:(id)arg3 userInfo:(id)arg4;
- (id)uploadFileWithName:(id)arg0 fileData:(id)arg1 userInfo:(id)arg2;
- (id)uploadFileWithName:(id)arg0 fileData:(id)arg1 options:(id)arg2 userInfo:(id)arg3;
- (id)getStoreProductsWithUserInfo:(id)arg0;
- (id)redeemStoreReceipt:(id)arg0 userInfo:(id)arg1;
- (void)cancelConnection:(id)arg0;
- (void)cancelAllConnections;
- (id)userInfoForConnectionIdentifier:(id)arg0;
- (long long)requestTypeForConnectionIdentifier:(id)arg0;
- (void)connection:(id)arg0 didReceiveData:(id)arg1;
- (void)connection:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1;
- (void)connection:(id)arg0 didSendBodyData:(id)arg1 totalBytesWritten:(id)arg2 totalBytesExpectedToWrite:(id)arg3;
- (void)connection:(id)arg0 didReceiveResponse:(id)arg1;
- (void)connection:(id)arg0 didFailWithError:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg0;
- (id)_createAndStartConnectionForTransaction:(id)arg0;
- (id)_transactionForConnection:(id)arg0;
- (id)_transactionForConnectionIdentifier:(id)arg0;
- (id)_URLWithPath:(id)arg0;
- (void)dealloc;
- (NSString *)email;
- (void)setEmail:(NSString *)arg0;
- (NSString *)password;
- (void)setPassword:(NSString *)arg0;
- (<CLAPIEngineDelegate> *)delegate;
- (void)setDelegate:(<CLAPIEngineDelegate> *)arg0;
- (NSURL *)baseURL;
- (void)setBaseURL:(NSURL *)arg0;
- (char)clearsCookies;
- (void)setClearsCookies:(BOOL)arg0;
- (NSMutableSet *)transactions;
- (void)setTransactions:(NSMutableSet *)arg0;
+ (void)initialize;
+ (id)engine;
+ (id)engineWithDelegate:(id)arg0;
+ (id)defaultBaseURL;
@end
@interface CLAPITransaction : NSObject
{
	NSURLRequest * _request;
	NSURLConnection * _connection;
	NSMutableData * _receivedData;
	NSHTTPURLResponse * _response;
	long long _requestType;
	NSString * _identifier;
	@ _userInfo;
	@ _internalContext;
}
@property (nonatomic, strong) NSURLRequest * request;
@property (nonatomic, strong) NSHTTPURLResponse * response;
@property (nonatomic, strong) NSURLConnection * connection;
@property (nonatomic, strong) NSMutableData * receivedData;
@property (nonatomic, assign) long long requestType;
@property (nonatomic, strong) NSString * identifier;
@property (nonatomic, assign) @ userInfo;
@property (nonatomic, assign) @ internalContext;
- (id)init;
- (void)dealloc;
- (NSURLRequest *)request;
- (void)setRequest:(NSURLRequest *)arg0;
- (NSURLConnection *)connection;
- (void)setConnection:(NSURLConnection *)arg0;
- (NSMutableData *)receivedData;
- (void)setReceivedData:(NSMutableData *)arg0;
- (long long)requestType;
- (void)setRequestType:(long long)arg0;
- (@)userInfo;
- (void)setUserInfo:(@)arg0;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSHTTPURLResponse *)response;
- (void)setResponse:(NSHTTPURLResponse *)arg0;
- (@)internalContext;
- (void)setInternalContext:(@)arg0;
+ (id)transaction;
@end
@interface CLAccount : NSObject
{
	NSURL * _domain;
	NSURL * _domainHomePage;
	BOOL _alphaUser;
	BOOL _uploadsArePrivate;
	NSString * _email;
	NSDate * _subscriptionExpiresAt;
	long long _type;
	CLSocket * _socket;
}
@property (nonatomic, strong) NSURL * domain;
@property (nonatomic, strong) NSURL * domainHomePage;
@property (nonatomic, assign) BOOL alphaUser;
@property (nonatomic, assign) BOOL uploadsArePrivate;
@property (nonatomic, strong) NSString * email;
@property (nonatomic, strong) NSDate * subscriptionExpiresAt;
@property (nonatomic, assign) long long type;
@property (nonatomic, strong) CLSocket * socket;
- (id)init;
- (id)initWithEmail:(id)arg0;
- (id)copyWithZone:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)dealloc;
- (char)uploadsArePrivate;
- (void)setUploadsArePrivate:(BOOL)arg0;
- (NSString *)email;
- (void)setEmail:(NSString *)arg0;
- (NSDate *)subscriptionExpiresAt;
- (void)setSubscriptionExpiresAt:(NSDate *)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (NSURL *)domain;
- (void)setDomain:(NSURL *)arg0;
- (NSURL *)domainHomePage;
- (void)setDomainHomePage:(NSURL *)arg0;
- (char)isAlphaUser;
- (void)setAlphaUser:(BOOL)arg0;
- (CLSocket *)socket;
- (void)setSocket:(CLSocket *)arg0;
+ (id)accountWithEmail:(id)arg0;
@end
@interface CLWebItem : NSObject
{
	NSString * _name;
	long long _type;
	NSURL * _contentURL;
	NSString * _mimeType;
	long long _viewCount;
	NSURL * _remoteURL;
	NSURL * _href;
	NSURL * _URL;
	NSURL * _iconURL;
	NSImage * _icon;
	BOOL _trashed;
	BOOL _private;
	NSDate * _createdAt;
	NSDate * _updatedAt;
	NSDate * _deletedAt;
}
@property (nonatomic, strong) NSString * name;
@property (nonatomic, assign) long long type;
@property (nonatomic, strong) NSURL * contentURL;
@property (nonatomic, strong) NSURL * URL;
@property (nonatomic, strong) NSString * mimeType;
@property (nonatomic, assign) long long viewCount;
@property (nonatomic, strong) NSURL * remoteURL;
@property (nonatomic, strong) NSURL * href;
@property (nonatomic, strong) NSURL * iconURL;
@property (nonatomic, strong) NSImage * icon;
@property (nonatomic, assign) BOOL trashed;
@property (nonatomic, assign) BOOL private;
@property (nonatomic, strong) NSDate * createdAt;
@property (nonatomic, strong) NSDate * updatedAt;
@property (nonatomic, strong) NSDate * deletedAt;
- (id)init;
- (id)initWithName:(id)arg0;
- (id)initWithName:(id)arg0 type:(id)arg1 viewCount:(id)arg2;
- (id)description;
- (id)copyWithZone:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)dealloc;
- (NSString *)name;
- (void)setName:(NSString *)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (NSURL *)contentURL;
- (void)setContentURL:(NSURL *)arg0;
- (NSString *)mimeType;
- (void)setMimeType:(NSString *)arg0;
- (long long)viewCount;
- (void)setViewCount:(long long)arg0;
- (NSURL *)remoteURL;
- (void)setRemoteURL:(NSURL *)arg0;
- (NSURL *)href;
- (void)setHref:(NSURL *)arg0;
- (NSURL *)URL;
- (void)setURL:(id)arg0;
- (NSURL *)iconURL;
- (void)setIconURL:(NSURL *)arg0;
- (NSImage *)icon;
- (void)setIcon:(NSImage *)arg0;
- (char)isTrashed;
- (void)setTrashed:(BOOL)arg0;
- (char)isPrivate;
- (void)setPrivate:(BOOL)arg0;
- (NSDate *)createdAt;
- (void)setCreatedAt:(NSDate *)arg0;
- (NSDate *)updatedAt;
- (void)setUpdatedAt:(NSDate *)arg0;
- (NSDate *)deletedAt;
- (void)setDeletedAt:(NSDate *)arg0;
+ (id)webItem;
+ (id)webItemWithName:(id)arg0;
+ (id)webItemWithName:(id)arg0 type:(id)arg1 viewCount:(id)arg2;
@end
@interface CLSocket : NSObject
{
	NSString * _APIKey;
	long long _appID;
	NSURL * _authURL;
	NSDictionary * _channels;
}
@property (nonatomic, strong) NSString * APIKey;
@property (nonatomic, assign) long long appID;
@property (nonatomic, strong) NSURL * authURL;
@property (nonatomic, strong) NSDictionary * channels;
- (id)init;
- (id)copyWithZone:(id)arg0;
- (id)initWithCoder:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (void)dealloc;
- (NSString *)APIKey;
- (void)setAPIKey:(id)arg0;
- (long long)appID;
- (void)setAppID:(long long)arg0;
- (NSURL *)authURL;
- (void)setAuthURL:(NSURL *)arg0;
- (NSDictionary *)channels;
- (void)setChannels:(NSDictionary *)arg0;
@end
@interface CLSInternalReport : NSObject
{
	NSString * _identifier;
	NSString * _path;
	NSArray * _metadataSections;
}
@property (nonatomic, strong) id directoryName;
@property (nonatomic, strong) NSString * path;
@property (nonatomic, strong) id needsToBeSubmitted;
@property (nonatomic, strong) id binaryImagePath;
@property (nonatomic, strong) id metadataPath;
@property (nonatomic, strong) id APIKey;
@property (nonatomic, strong) NSString * identifier;
@property (nonatomic, strong) id customKeys;
@property (nonatomic, strong) id bundleVersion;
@property (nonatomic, strong) id bundleShortVersionString;
@property (nonatomic, strong) id dateCreated;
@property (nonatomic, strong) id OSVersion;
@property (nonatomic, strong) id OSBuildVersion;
- (id)initWithPath:(id)arg0 executionIdentifier:(id)arg1;
- (id)initWithPath:(id)arg0;
- (id)directoryName;
- (id)pathForContentFile:(id)arg0;
- (id)metadataPath;
- (id)binaryImagePath;
- (char)needsToBeSubmitted;
- (void)enumerateSymbolicatableFilesInContent:(id)arg0;
- (id)metadataSections;
- (id)APIKey;
- (id)customKeys;
- (id)bundleVersion;
- (id)bundleShortVersionString;
- (id)dateCreated;
- (id)OSVersion;
- (id)OSBuildVersion;
// - (void).cxx_destruct;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (NSString *)identifier;
+ (id)reportWithPath:(id)arg0;
+ (id)readMetadataAtPath:(id)arg0;
@end
@interface Crashlytics : NSObject
{
	<CrashlyticsDelegate> * _delegate;
	CLSCrashReportingController * _crashReportingController;
	CLSAnalyticsController * _analyticsController;
	NSString * _apiKey;
	CLSBetaController * _betaController;
}
@property (nonatomic, strong) NSString * apiKey;
@property (nonatomic, strong) id version;
@property (nonatomic, strong) id debugMode;
@property (nonatomic, strong) <CrashlyticsDelegate> * delegate;
@property (nonatomic, strong) CLSBetaController * betaController;
@property (nonatomic, strong) id kitInfo;
@property (nonatomic, strong) id bundleIdentifier;
- (id)init;
- (id)initWithSuper;
- (void)start;
- (id)version;
- (id)bundleIdentifier;
- (id)kitInfo;
- (void)setKitInfo:(id)arg0;
- (id)APIKey;
- (id)installID;
- (char)isFirstInstall;
- (id)settingsDictionary;
- (char)isCrashlyticsStarted;
- (void)setDebugMode:(id)arg0;
- (char)debugMode;
- (void)setDelegate:(<CrashlyticsDelegate> *)arg0;
- (<CrashlyticsDelegate> *)delegate;
- (void)crash;
- (void)throwException;
- (void)setUserIdentifier:(id)arg0;
- (void)setUserName:(id)arg0;
- (void)setUserEmail:(id)arg0;
- (void)setObjectValue:(id)arg0 forKey:(id)arg1;
- (void)setIntValue:(id)arg0 forKey:(id)arg1;
- (void)setBoolValue:(id)arg0 forKey:(id)arg1;
- (void)setFloatValue:(id)arg0 forKey:(id)arg1;
- (id)developmentPlatformName;
- (void)setDevelopmentPlatformName:(id)arg0;
- (id)developmentPlatformVersion;
- (void)setDevelopmentPlatformVersion:(id)arg0;
- (void)recordError:(id)arg0;
- (void)recordError:(id)arg0 withAdditionalUserInfo:(id)arg1;
- (void)recordCustomExceptionName:(id)arg0 reason:(id)arg1 frameArray:(id)arg2;
- (void)monitorErrorsForWKWebViewConfiguration:(id)arg0;
- (char)delegateRespondsToLegacyMethods;
- (void)warnDelegateAboutMethods;
- (char)shouldInstallCrashCallback;
- (void)detectedCrash;
- (char)reportingControllerCanUseBackgroundSessions:(id)arg0;
- (char)reportingControllerMustInformDelegateOfReports:(id)arg0;
- (void)reportingController:(id)arg0 didDetectReportForLastExecution:(id)arg1 completionHandler:(id)arg2;
- (void)reportingController:(id)arg0 internalDidDetectReportForLastExecution:(id)arg1;
- (char)reportingController:(id)arg0 ensureDeliveryOfUnixSignal:(id)arg1;
- (id)APIKeyForCrashReportingController:(id)arg0;
- (id)installIDForCrashReportingController:(id)arg0;
- (char)isFirstInstallForCrashReportingController:(id)arg0;
- (id)settingsForCrashReportingController:(id)arg0;
- (id)APIKeyForBetaController:(id)arg0;
- (id)settingsForBetaController:(id)arg0;
- (void)logEvent:(id)arg0;
- (void)logEvent:(id)arg0 attributes:(id)arg1;
- (void)userContentController:(id)arg0 didReceiveScriptMessage:(id)arg1;
// - (void).cxx_destruct;
- (NSString *)apiKey;
- (CLSBetaController *)betaController;
+ (id)sharedInstance;
+ (id)startWithAPIKey:(id)arg0;
+ (id)startWithAPIKey:(id)arg0 delegate:(id)arg1;
+ (id)startWithAPIKey:(id)arg0 afterDelay:(id)arg1;
+ (id)startWithAPIKey:(id)arg0 delegate:(id)arg1 afterDelay:(id)arg2;
+ (void)setUserIdentifier:(id)arg0;
+ (void)setUserName:(id)arg0;
+ (void)setUserEmail:(id)arg0;
+ (void)setObjectValue:(id)arg0 forKey:(id)arg1;
+ (void)setIntValue:(id)arg0 forKey:(id)arg1;
+ (void)setBoolValue:(id)arg0 forKey:(id)arg1;
+ (void)setFloatValue:(id)arg0 forKey:(id)arg1;
+ (void)setDevelopmentPlatformName:(id)arg0;
+ (void)setDevelopmentPlatformVersion:(id)arg0;
+ (void)logEvent:(id)arg0;
+ (void)logEvent:(id)arg0 attributes:(id)arg1;
@end
@interface CLSAnalyticsMetadataEvent : CLSEventLogEvent <CLSEventLogEvent>
@property (nonatomic, strong) id metadataJSONData;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 metadataJSONData:(id)arg2;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 key:(id)arg2 payload:(id)arg3;
- (id)metadataJSONData;
@end
@interface CLSFileManager : NSObject
{
	NSString * _rootPath;
	NSFileManager * _underlyingFileManager;
}
@property (nonatomic, strong) NSFileManager * underlyingFileManager;
@property (nonatomic, strong) NSString * rootPath;
@property (nonatomic, strong) id structurePath;
@property (nonatomic, strong) id activePath;
@property (nonatomic, strong) id processingPath;
@property (nonatomic, strong) id pendingPath;
@property (nonatomic, strong) id preparedPath;
@property (nonatomic, strong) id activePathContents;
@property (nonatomic, strong) id preparedPathContents;
@property (nonatomic, strong) id processingPathContents;
- (id)init;
- (char)createDirectoryAtPath:(id)arg0;
- (char)removeItemAtPath:(id)arg0;
- (char)removeContentsOfDirectoryAtPath:(id)arg0;
- (char)moveItemAtPath:(id)arg0 toDirectory:(id)arg1;
- (void)enumerateFilesInDirectory:(id)arg0 usingBlock:(id)arg1;
- (char)moveItemsFromDirectory:(id)arg0 toDirectory:(id)arg1;
- (id)fileSizeAtPath:(id)arg0;
- (id)contentsOfDirectory:(id)arg0;
- (id)pathNamespace;
- (NSString *)rootPath;
- (id)structurePath;
- (id)activePath;
- (id)pendingPath;
- (id)processingPath;
- (id)preparedPath;
- (id)activePathContents;
- (id)preparedPathContents;
- (id)processingPathContents;
- (char)prepareForNewLaunch;
- (id)setupNewPathForExecutionIdentifier:(id)arg0;
- (void)removeLegacyDirectories;
- (void)enumerateReportsInProcessingDirectoryUsingBlock:(id)arg0;
- (void)enumerateFilesInActiveDirectoryUsingBlock:(id)arg0;
- (void)enumerateFilesInPreparedDirectoryUsingBlock:(id)arg0;
- (char)moveProcessingContentsToPrepared;
- (char)movePendingToProcessing;
- (char)removeContentsOfProcessingPath;
- (char)removeContentsOfPendingPath;
- (char)removeContentsOfAllPaths;
// - (void).cxx_destruct;
- (NSFileManager *)underlyingFileManager;
@end
@interface CLSAnalyticsMetadataController : NSObject
{
	NSDictionary * _metadata;
	NSData * _metadataJSONData;
}
@property (nonatomic, strong) NSDictionary * metadata;
@property (nonatomic, strong) NSData * metadataJSONData;
- (void)dealloc;
- (id)initWithTimeStamp:(id)arg0 betaToken:(id)arg1;
- (NSData *)metadataJSONData;
- (NSDictionary *)metadata;
+ (id)ASManager;
+ (char)advertisingSupportFrameworkLinked;
+ (char)trackingForAdvertisingEnabled;
+ (id)identifierForAdvertising;
+ (id)hostModel;
+ (id)hostMachine;
+ (id)hostLocale;
+ (id)hostOSVersion;
+ (id)hostOSVersionName;
+ (BOOL)hostJailbroken;
+ (unsigned int)hostNumCores;
+ (id)hostPlatform;
+ (unsigned int)hostPlatformCode;
+ (id)hostVendorId;
+ (id)APIKey;
+ (id)instanceIdentifier;
+ (id)installationId;
+ (id)sessionIdentifier;
+ (id)bundleIdentifier;
+ (id)bundleVersion;
+ (id)bundleShortVersion;
+ (id)unwrapBetaToken:(id)arg0;
+ (void)setValueInDictionary:(id)arg0 withKey:(id)arg1 toObject:(id)arg2;
+ (void)setValueInDictionary:(id)arg0 withKey:(id)arg1 toCString:(id)arg2;
+ (void)setValueInDictionary:(id)arg0 withKey:(id)arg1 toBOOL:(id)arg2;
+ (void)setValueInDictionary:(id)arg0 withKey:(id)arg1 toLong:(id)arg2;
+ (void)setValueInDictionary:(id)arg0 withKey:(id)arg1 toInteger:(id)arg2;
+ (void)setValueInDictionary:(id)arg0 withKey:(id)arg1 toLongLong:(id)arg2;
+ (id)metadataWithTimeStamp:(id)arg0 betaToken:(id)arg1 adToken:(id)arg2;
@end
@interface CLSAnalyticsTimestampGenerator : NSObject
- (unsigned long long)generateAnalyticsTimestamp;
@end
@interface CLSAnalyticsNetworkingClient : NSObject
{
	FABNetworkClient * _networkClient;
}
@property (nonatomic, strong) FABNetworkClient * networkClient;
- (id)init;
- (void)transmitLogFilesAtURLs:(id)arg0 toURL:(id)arg1 withAPIKey:(id)arg2 completionHandler:(id)arg3;
- (id)requestForLogFilesAtURLs:(id)arg0 toURL:(id)arg1 withAPIKey:(id)arg2;
- (FABNetworkClient *)networkClient;
@end
@interface CLSDemangleOperation : CLSThreadArrayOperation <CLSThreadArrayOperation>
- (id)demangleSymbol:(id)arg0;
- (void)main;
+ (id)demangleSymbol:(id)arg0;
+ (id)demangleBlockInvokeCppSymbol:(id)arg0;
+ (id)demangleCppSymbol:(id)arg0;
+ (id)demangleSwiftSymbol:(id)arg0;
@end
@interface CLSPackageReportOperation : NSOperation
{
	CLSInternalReport * _report;
	CLSFileManager * _fileManager;
	NSString * _finalPath;
}
@property (nonatomic, strong) CLSInternalReport * report;
@property (nonatomic, strong) CLSFileManager * fileManager;
@property (nonatomic, strong) NSString * finalPath;
- (id)initWithReport:(id)arg0 fileManager:(id)arg1;
- (id)compressFile:(id)arg0;
- (id)reportPath;
- (id)destinationDirectory;
- (id)packagedPathWithName:(id)arg0;
- (void)main;
// - (void).cxx_destruct;
- (CLSInternalReport *)report;
- (CLSFileManager *)fileManager;
- (NSString *)finalPath;
- (void)setFinalPath:(NSString *)arg0;
@end
@interface CLSSerializeSymbolicatedFramesOperation : CLSThreadArrayOperation <CLSThreadArrayOperation>
{
	NSString * _outputPath;
}
@property (nonatomic, strong) NSString * outputPath;
- (void)main;
// - (void).cxx_destruct;
- (NSString *)outputPath;
- (void)setOutputPath:(NSString *)arg0;
@end
@interface CLSProcessReportOperation : NSOperation
{
	CLSSymbolResolver * _symbolResolver;
	CLSInternalReport * _report;
}
@property (nonatomic, strong) CLSSymbolResolver * symbolResolver;
@property (nonatomic, strong) CLSInternalReport * report;
- (id)initWithReport:(id)arg0 resolver:(id)arg1;
- (id)binaryImagePath;
- (id)threadArrayFromFile:(id)arg0;
- (char)symbolicateFile:(id)arg0 withResolver:(id)arg1;
- (void)main;
// - (void).cxx_destruct;
- (CLSSymbolResolver *)symbolResolver;
- (CLSInternalReport *)report;
@end
@interface CLSEventLogSessionRepository : NSObject
{
	NSURL * _rootDirectoryURL;
	NSFileManager * _fileManager;
}
- (void)dealloc;
- (id)initWithRootDirectoryURL:(id)arg0;
- (id)initWithRootDirectoryPath:(id)arg0;
- (id)init;
- (id)versionDirectoryName;
- (char)deleteItemAtPath:(id)arg0 ifNotOfType:(id)arg1 error:(id)arg2;
- (char)createFileWithURL:(id)arg0 error:(id)arg1;
- (char)createDirectoryWithURL:(id)arg0 error:(id)arg1;
- (id)statesDirectoryURL:(id)arg0;
- (id)stateDirectoryURLForStateName:(id)arg0 error:(id)arg1;
- (id)arrayByFilteringNonDirectoriesFromURLs:(id)arg0;
- (id)sessionDirectoryURLsForStateName:(id)arg0 error:(id)arg1;
- (id)sessionDirectoryURLForStateName:(id)arg0 sessionIdentifier:(id)arg1 sessionTimestamp:(id)arg2 error:(id)arg3;
- (id)prepSessionFragmentDirectoryURLForStateName:(id)arg0 sessionFragmentDirectoryURL:(id)arg1 error:(id)arg2;
- (id)removePrepStatusFromSessionFragmentDirectoryURL:(id)arg0 error:(id)arg1;
- (char)purgePrepSessionFragmentDirectoriesForStateName:(id)arg0 error:(id)arg1;
- (id)sessionFragmentDirectoryURLsForSessionDirectory:(id)arg0 error:(id)arg1;
- (id)sessionFragmentDirectoryURLForStateName:(id)arg0 sessionIdentifier:(id)arg1 sessionTimestamp:(id)arg2 sessionFragmentIdentifier:(id)arg3 sessionFragmentTimestamp:(id)arg4 error:(id)arg5;
- (char)removeSessionFragmentDirectory:(id)arg0 error:(id)arg1;
- (id)eventLogFileURLForStateName:(id)arg0 sessionIdentifier:(id)arg1 sessionTimestamp:(id)arg2 sessionFragmentIdentifier:(id)arg3 sessionFragmentTimestamp:(id)arg4 eventPriority:(id)arg5 error:(id)arg6;
- (id)logFileURLsForSessionFragmentDirectory:(id)arg0 error:(id)arg1;
- (id)logFileURLsForAllStates:(id)arg0;
- (char)removeLogFile:(id)arg0 error:(id)arg1;
- (char)deleteItemAtURL:(id)arg0 error:(id)arg1;
- (char)isDirectoryURL:(id)arg0;
- (char)itemURL:(id)arg0 hasNameMatching:(id)arg1;
- (char)itemURL:(id)arg0 hasPathExtensionMatching:(id)arg1;
- (id)contentsOfDirectoryURL:(id)arg0 error:(id)arg1;
- (char)cleanUpLogFileURL:(id)arg0 shouldDelete:(id)arg1 error:(id)arg2;
- (char)cleanUpDirectoryURL:(id)arg0 shouldDelete:(id)arg1 error:(id)arg2 withCleanUpBlock:(id)arg3;
- (char)cleanUpSessionFragmentDirectoryURL:(id)arg0 shouldDelete:(id)arg1 error:(id)arg2;
- (char)cleanUpSessionDirectoryURL:(id)arg0 ignoringSessionFragmentDirectoryURL:(id)arg1 shouldDelete:(id)arg2 error:(id)arg3;
- (char)cleanUpStateDirectoryURL:(id)arg0 ignoringSessionFragmentDirectoryURL:(id)arg1 shouldDelete:(id)arg2 error:(id)arg3;
- (char)cleanUpEventLogRepositoryIgnorningSessionFragmentDirectoryURL:(id)arg0 error:(id)arg1;
+ (id)activeEventLogFileNameForPriority:(id)arg0;
+ (unsigned long long)priorityForEventLogFileWithName:(id)arg0;
+ (id)sessionDirectoryNameWithIdentifier:(id)arg0 timestamp:(id)arg1;
+ (id)sessionFragmentDirectoryNameWithIdentifier:(id)arg0 timestamp:(id)arg1;
+ (id)prepDirectoryForDirectoryURL:(id)arg0;
+ (char)isPrepDirectoryURL:(id)arg0;
+ (id)stateDirectoryURLForSessionDirectoryURL:(id)arg0;
+ (id)sessionDirectoryURLForSessionFragmentDirectoryURL:(id)arg0;
+ (id)sessionFragmentDirectoryURLForLogFileURL:(id)arg0;
@end
@interface CLSEventLogEventFile : CLSEventLogFile <CLSEventLogFile>
- (char)appendEvent:(id)arg0 error:(id)arg1;
@end
@interface CLSSettings : NSObject
{
	NSDictionary * _settingsDictionary;
}
@property (nonatomic, strong) id reportsEndpoint;
@property (nonatomic, strong) id betaEndpoint;
@property (nonatomic, strong) id betaSuspendDuration;
@property (nonatomic, strong) id shouldPackageReports;
@property (nonatomic, strong) id shouldSubmitReports;
@property (nonatomic, strong) id canProcessUrgentReports;
@property (nonatomic, strong) id errorReportingEnabled;
@property (nonatomic, strong) id customExceptionsEnabled;
@property (nonatomic, strong) id crashReportingEnabled;
@property (nonatomic, strong) id userPromptEnabled;
@property (nonatomic, strong) id errorLogBufferSize;
@property (nonatomic, strong) id logBufferSize;
@property (nonatomic, strong) id maxCustomExceptions;
@property (nonatomic, strong) id maxCustomKeys;
@property (nonatomic, strong) id interactivePromptTitle;
@property (nonatomic, strong) id interactivePromptMessage;
@property (nonatomic, strong) id interactivePromptCancelTitle;
@property (nonatomic, strong) id interactivePromptSendTitle;
@property (nonatomic, strong) id interactivePromptAlwaysSendTitle;
@property (nonatomic, strong) NSDictionary * settingsDictionary;
- (id)initWithDictionary:(id)arg0;
- (id)configuration;
- (id)defaultConfiguration;
- (id)valueForConfigurationKey:(id)arg0;
- (id)betaEndpoint;
- (id)betaSuspendDuration;
- (id)reportsEndpoint;
- (char)shouldPackageReports;
- (char)shouldSubmitReports;
- (char)canProcessUrgentReports;
- (char)errorReportingEnabled;
- (char)customExceptionsEnabled;
- (char)crashReportingEnabled;
- (char)userPromptEnabled;
- (unsigned int)errorLogBufferSize;
- (unsigned int)logBufferSize;
- (unsigned int)maxCustomExceptions;
- (unsigned int)maxCustomKeys;
- (id)promptValueForSettingsKey:(id)arg0 withLocalizedKey:(id)arg1 defaultValue:(id)arg2;
- (id)interactivePromptTitle;
- (id)interactivePromptMessage;
- (id)interactivePromptCancelTitle;
- (id)interactivePromptSendTitle;
- (id)interactivePromptAlwaysSendTitle;
// - (void).cxx_destruct;
- (NSDictionary *)settingsDictionary;
@end
@interface CLSAnalyticsController : NSObject
{
	NSURL * _analyticsRootDirectoryURL;
	BOOL _haveSettings;
	BOOL _settingsShouldCollectAnalytics;
	NSURL * _settingsAnalyticsURL;
	BOOL _settingsShouldFlushOnBackground;
	uint64_t _settingsMaxByteSizePerFile;
	I _settingsFlushIntervalSecs;
	I _settingsMaxPendingSendFileCount;
	I _settingsMaxCustomEventAttributeCount;
	I _settingsMaxCustomEventAttributeSize;
	BOOL _settingsTrackCustomEvents;
	NSString * _betaToken;
	NSString * _sessionIdentifier;
	uint64_t _sessionTimestamp;
	CLSAnalyticsNetworkingClient * _networkingClient;
	NSFileManager * _fileManager;
	NSString * _currentSessionFragmentIdentifier;
	uint64_t _currentSessionFragmentTimestamp;
	NSURL * _currentSessionFragmentDirectoryURL;
	BOOL _performSessionMaintenanceAfterSettingsArrive;
	CLSEventLogSessionRepository * _logSessionRepository;
	CLSAnalyticsMetadataController * _metadataController;
	CLSAnalyticsIdentifierGenerator * _identifierGenerator;
	CLSAnalyticsTimestampGenerator * _timestampGenerator;
	NSMutableArray * _sessionFragmentsToTransmit;
	NSURLSession * _session;
	dispatch_queue_s= _sessionMaintenanceQueue;
	dispatch_source_s= _sessionFragmentMaintenanceTimerSource;
	[3^{dispatch_queue_s}] _priorityEventLoggingQueues;
	[3@"NSURL"] _priorityCurrentFragmentEventFileURLs;
	[3@"CLSEventLogEventFile"] _priorityCurrentFragmentEventFiles;
	BOOL _loggedAnalyticsEnabled;
	NSString * _lastSessionIdentifier;
	uint64_t _lastSessionTimestamp;
	NSData * _lastSessionMetadata;
}
@property (nonatomic, assign) dispatch_queue_s= sessionMaintenanceQueue;
@property (nonatomic, strong) id customEventsFeatureSwitchEnabled;
- (void)dealloc;
- (id)initWithSessionIdentifier:(id)arg0 analyticsRootDirectoryWithURL:(id)arg1 betaToken:(id)arg2;
- (id)initWithSessionIdentifier:(id)arg0 sessionTimestamp:(id)arg1 analyticsRootDirectoryWithURL:(id)arg2 betaToken:(id)arg3 identifierGenerator:(id)arg4 timestampGenerator:(id)arg5 metadataController:(id)arg6 networkingClient:(id)arg7;
- (void)fabricSettingsDownloaded:(id)arg0;
- (void)setSettings:(id)arg0;
- (id)fabricSettings;
- (char)fabricIsFirstInstall;
- (id)fabricAPIKey;
- (char)analyticsFeatureSwitchEnabled;
- (id)metadataController;
- (id)metadataJSONData;
- (char)customEventsFeatureSwitchEnabled;
- (void)readLastSessionInformation;
- (void)saveCurrentSessionInformation;
- (void)handleDisabledFeatureSwitch;
- (void)dispatchToQueue:(id)arg0 asynchronous:(id)arg1 block:(id)arg2;
- (void)applicationLifecycleEvent:(id)arg0;
- (char)validCustomEventAttributeString:(id)arg0;
- (char)validCustomEventAttributeValue:(id)arg0;
- (id)truncateCustomEventAttribute:(id)arg0;
- (id)filterCustomAttributes:(id)arg0;
- (void)logCustomEventWithName:(id)arg0 attributes:(id)arg1;
- (char)handleSizeTriggeredMaintainSessionFragmentForLogFile:(id)arg0;
- (char)handlePriorityTriggeredMaintainSessionFragmentForEvent:(id)arg0;
- (char)ensureLogFileExistsForPriority:(id)arg0 error:(id)arg1;
- (void)logEvent:(id)arg0;
- (id)createEventFileURLForPriority:(id)arg0 error:(id)arg1;
- (char)prepareNewSessionFragmentWithIdentifier:(id)arg0 timestamp:(id)arg1 error:(id)arg2;
- (void)logAppInstalled;
- (void)logAppLaunched;
- (void)logPreviousSessionCrashedOnDate:(id)arg0;
- (char)runOpenNewSessionFragment:(id)arg0;
- (void)openNewSessionFragment:(id)arg0;
- (id)sessionFragmentDirectoryURLsForStateName:(id)arg0 error:(id)arg1;
- (char)purgePackagedPrepSessionFragmentDirectories;
- (char)isOpenSessionFragmentDirectoryURL:(id)arg0;
- (char)packageLogsFromActiveSessionFragmentDirectoryURL:(id)arg0 intoPackagedSessionFragmentDirectoryURL:(id)arg1 error:(id)arg2;
- (char)runPackageClosedSessionFragments:(id)arg0;
- (void)packageClosedSessionFragments:(id)arg0;
- (void)transmitLogsForSessionFragmentDirectory:(id)arg0 completion:(id)arg1;
- (void)transmitNextPackagedSessionFragment:(id)arg0;
- (void)transmitPackagedSessionFragments:(id)arg0;
- (id)lastMaintenanceDate;
- (void)saveLastMaintenanceDate:(id)arg0;
- (void)cancelSessionMaintenance;
- (unsigned long long)initialMaintenanceTimeWithFlushInterval:(id)arg0;
- (void)scheduleSessionMaintenance;
- (id)nonCurrentLogFileURLsForAllStates:(id)arg0;
- (void)pruneSessionFragmentLogFiles:(id)arg0;
- (void)cleanUpRepository:(id)arg0;
- (void)maintainSessionFragmentsIgnoringError;
- (void)maintainSessionFragments:(id)arg0;
- (void)handleSubmissionRequestCompletion:(id)arg0 withRestart:(id)arg1 forSessionFragmentDirectory:(id)arg2 error:(id)arg3 completionHandler:(id)arg4;
- (dispatch_queue_s=)sessionMaintenanceQueue;
+ (char)supported;
+ (char)deviceMeetsMinimumRequirements;
+ (id)mutableSortedFileURLsGroupedByPrioritiesFromLogFileURLs:(id)arg0;
@end
@interface CLSBetaController : NSObject
{
	NSString * _betaToken;
	BOOL _checksSuspended;
	BOOL _retrying;
	<CLSBetaControllerDelegate> * _delegate;
	FABNetworkClient * _networkClient;
	CLSBetaUpdate * _activeUpdate;
	NSTimer * _checkSuspensionTimer;
	dispatch_queue_s= _queue;
}
@property (nonatomic, strong) <CLSBetaControllerDelegate> * delegate;
@property (nonatomic, strong) NSString * betaToken;
@property (nonatomic, strong) FABNetworkClient * networkClient;
@property (nonatomic, strong) CLSBetaUpdate * activeUpdate;
@property (nonatomic, strong) NSTimer * checkSuspensionTimer;
@property (nonatomic, assign) BOOL checksSuspended;
@property (nonatomic, assign) BOOL retrying;
@property (nonatomic, assign) dispatch_queue_s= queue;
- (id)initWithDelegate:(id)arg0;
- (char)start;
- (void)dealloc;
- (NSString *)betaToken;
- (id)settings;
- (id)betaUpdateSuspendDurationSecs;
- (id)betaEndpoint;
- (id)appBundleIdentifier;
- (id)appBuildVersion;
- (id)appDisplayVersion;
- (id)appInstanceIdentifier;
- (id)appInstallationSource;
- (id)APIKey;
- (id)betaUpdateURL;
- (void)checkForUpdate;
- (void)maybeGetUpdate:(id)arg0;
- (void)loadUpdateWithCompletionBlock:(id)arg0;
- (void)handledCompletedBetaRequestWithData:(id)arg0 error:(id)arg1 completionBlock:(id)arg2;
- (id)updateWithData:(id)arg0 error:(id)arg1;
- (void)temporarilySuspendChecks;
- (void)allowChecks;
- (void)applicationWillEnterForeground;
- (char)shouldGetUpdates;
- (void)didGetUpdate:(id)arg0;
- (void)showBetaAlertForUpdate:(id)arg0;
- (void)fabricSettingsDownloaded:(id)arg0;
- (void)applicationWillEnterForeground:(id)arg0;
// - (void).cxx_destruct;
- (<CLSBetaControllerDelegate> *)delegate;
- (void)setDelegate:(<CLSBetaControllerDelegate> *)arg0;
- (FABNetworkClient *)networkClient;
- (CLSBetaUpdate *)activeUpdate;
- (void)setActiveUpdate:(CLSBetaUpdate *)arg0;
- (NSTimer *)checkSuspensionTimer;
- (void)setCheckSuspensionTimer:(NSTimer *)arg0;
- (char)checksSuspended;
- (void)setChecksSuspended:(BOOL)arg0;
- (char)retrying;
- (void)setRetrying:(BOOL)arg0;
- (dispatch_queue_s=)queue;
+ (char)isBetaSupported;
+ (id)pinnnedCertificates;
@end
@interface CLSSymbolResolver : NSObject
{
	NSMutableArray * _binaryImages;
}
- (id)init;
- (char)loadBinaryImagesFromFile:(id)arg0;
- (id)loadedBinaryImageForPC:(id)arg0;
- (char)fillInImageDetails:(id)arg0 forUUID:(id)arg1;
- (id)frameForAddress:(id)arg0;
- (char)updateStackFrame:(id)arg0;
// - (void).cxx_destruct;
@end
@interface CLSEventLogEvent : NSObject
{
	uint64_t _priority;
	uint64_t _timestamp;
	NSString * _key;
	NSData * _payload;
}
@property (nonatomic, assign) uint64_t priority;
@property (nonatomic, assign) uint64_t timestamp;
@property (nonatomic, strong) NSString * key;
@property (nonatomic, strong) NSData * payload;
- (void)dealloc;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 key:(id)arg2 payload:(id)arg3;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 key:(id)arg2;
- (char)isEqual:(id)arg0;
- (unsigned long long)hash;
- (id)eventData;
- (unsigned long long)priority;
- (unsigned long long)timestamp;
- (NSString *)key;
- (NSData *)payload;
@end
@interface CLSCrashReportingController : NSObject
{
	CLSFileManager * _fileMananger;
	CLSNetworkClient * _networkClient;
	CLSReportsController * _reportsController;
	NSOperationQueue * _operationQueue;
	CLSSettings * _settings;
	long long _promptChoice;
	<CLSCrashReportingControllerDelegate> * _delegate;
	CLSFileManager * _fileManager;
}
@property (nonatomic, strong) <CLSCrashReportingControllerDelegate> * delegate;
@property (nonatomic, strong) NSOperationQueue * operationQueue;
@property (nonatomic, strong) CLSNetworkClient * networkClient;
@property (nonatomic, strong) CLSReportsController * reportsController;
@property (nonatomic, strong) CLSFileManager * fileManager;
- (id)initWithFileManager:(id)arg0 delegate:(id)arg1;
- (id)clientWithOperationQueue:(id)arg0;
- (char)startWithProfilingMark:(id)arg0 betaToken:(id)arg1;
- (char)startCrashReporterWithAPIKey:(id)arg0 betaToken:(id)arg1 report:(id)arg2;
- (void)crashReportingSetupCompleted;
- (char)checkPreconditions;
- (CLSReportsController *)reportsController;
- (char)firstInstall;
- (id)installIdentifier;
- (id)APIKey;
- (id)settings;
- (unsigned int)machExceptionMask;
- (void)deliverCrashDelegateCallback;
- (char)attemptCurrentReportSubmission;
- (char)potentiallySubmittableCrashOccurred;
- (void)checkForUserPromptSetting;
- (char)packagingEnabled;
- (char)delegateNeedsToBeInformedOfReports;
- (char)canProcessUrgentReports;
- (char)needsToPrompt;
- (id)bundleIdentifier;
- (char)prepareForNewLaunch;
- (void)installCrashReportingHandlers:(id)arg0;
- (id)setupCurrentReport;
- (void)processExistingReportPaths:(id)arg0 asUrgent:(id)arg1;
- (void)processExistingActiveReportPath:(id)arg0 asUrgent:(id)arg1;
- (void)handleDelegateCompletionForReport:(id)arg0 submit:(id)arg1;
- (void)removeReport:(id)arg0;
- (void)handleContentsInOtherReportingDirectories;
- (void)handleExistingFilesInProcessing;
- (void)handleExistingFilesInPrepared;
- (void)uploadPreexistingFiles:(id)arg0;
- (void)retryUploadForReportAtPath:(id)arg0;
- (void)displayPermissionAlertForReport:(id)arg0;
- (void)setupAndDisplayAlertWithTitle:(id)arg0 message:(id)arg1 cancel:(id)arg2 send:(id)arg3 alwaysSend:(id)arg4 report:(id)arg5;
- (void)handlePromptCompleteForReport:(id)arg0 shouldSubmit:(id)arg1 shouldMarkAlwaysSubmit:(id)arg2;
- (id)launchFailureMarkerPath;
- (char)createLaunchFailureMarker;
- (char)launchFailureMarkerPresent;
- (char)removeLaunchFailureMarker;
- (char)checkForAndCreateLaunchMarker;
- (void)setupStateNotifications;
- (void)captureInitialNotificationStates;
- (void)willBecomeActive:(id)arg0;
- (void)didBecomeInactive:(id)arg0;
- (char)networkClientCanUseBackgroundSessions:(id)arg0;
- (void)networkClient:(id)arg0 didFinishUploadWithPath:(id)arg1 error:(id)arg2;
- (id)settingsForReportsController:(id)arg0;
- (id)APIKeyForReportsController:(id)arg0;
- (id)bundleIdentifierForReportsController:(id)arg0;
- (void)reportsController:(id)arg0 didCompletePackageSubmission:(id)arg1 error:(id)arg2;
- (void)reportsControllerDidCompleteAllSubmissions:(id)arg0;
// - (void).cxx_destruct;
- (<CLSCrashReportingControllerDelegate> *)delegate;
- (void)setDelegate:(<CLSCrashReportingControllerDelegate> *)arg0;
- (NSOperationQueue *)operationQueue;
- (void)setOperationQueue:(NSOperationQueue *)arg0;
- (CLSNetworkClient *)networkClient;
- (void)setNetworkClient:(CLSNetworkClient *)arg0;
- (CLSFileManager *)fileManager;
- (void)setFileManager:(CLSFileManager *)arg0;
@end
@interface CLSStackFrame : NSObject
{
	I _lineNumber;
	NSString * _symbol;
	NSString * _library;
	NSString * _fileName;
	uint64_t _offset;
	uint64_t _address;
}
@property (nonatomic, strong) NSString * symbol;
@property (nonatomic, strong) NSString * library;
@property (nonatomic, strong) NSString * fileName;
@property (nonatomic, assign) I lineNumber;
@property (nonatomic, assign) uint64_t offset;
@property (nonatomic, assign) uint64_t address;
- (id)description;
// - (void).cxx_destruct;
- (NSString *)symbol;
- (void)setSymbol:(NSString *)arg0;
- (NSString *)library;
- (void)setLibrary:(NSString *)arg0;
- (NSString *)fileName;
- (void)setFileName:(NSString *)arg0;
- (unsigned int)lineNumber;
- (void)setLineNumber:(I)arg0;
- (unsigned long long)offset;
- (void)setOffset:(uint64_t)arg0;
- (unsigned long long)address;
- (void)setAddress:(uint64_t)arg0;
+ (id)stackFrame;
+ (id)stackFrameWithAddress:(id)arg0;
+ (id)stackFrameWithSymbol:(id)arg0;
@end
@interface CLSAsyncOperation : NSOperation
{
	BOOL _internalExecuting;
	BOOL _internalFinished;
	@? _asyncCompletion;
	NSRecursiveLock * _lock;
}
@property (nonatomic, assign) @? asyncCompletion;
@property (nonatomic, strong) NSRecursiveLock * lock;
- (id)init;
- (char)isConcurrent;
- (char)isAsynchronous;
- (char)isExecuting;
- (char)isFinished;
- (void)start;
- (void)changeValueForKey:(id)arg0 inBlock:(id)arg1;
- (void)lock:(id)arg0;
- (char)checkForCancellation;
- (void)unlockedMarkFinished;
- (void)unlockedMarkStarted;
- (void)unlockedMarkComplete;
- (void)markStarted;
- (void)markDone;
// - (void).cxx_destruct;
- (@?)asyncCompletion;
- (void)setAsyncCompletion:(@?)arg0;
- (NSRecursiveLock *)lock;
- (void)setLock:(NSRecursiveLock *)arg0;
@end
@interface CLSSymbolicationOperation : CLSThreadArrayOperation <CLSThreadArrayOperation>
{
	CLSSymbolResolver * _symbolResolver;
}
@property (nonatomic, strong) CLSSymbolResolver * symbolResolver;
- (void)main;
// - (void).cxx_destruct;
- (CLSSymbolResolver *)symbolResolver;
- (void)setSymbolResolver:(CLSSymbolResolver *)arg0;
@end
@interface CLSAnalyticsIdentifierGenerator : NSObject
- (id)generateSessionFragmentIdentifier;
- (id)generateEventIdentifier;
@end
@interface CLSReportsController : NSObject
{
	<CLSReportsControllerDelegate> * _delegate;
	NSOperationQueue * _operationQueue;
	CLSNetworkClient * _networkClient;
	CLSFileManager * _fileManager;
}
@property (nonatomic, strong) <CLSReportsControllerDelegate> * delegate;
@property (nonatomic, strong) NSOperationQueue * operationQueue;
@property (nonatomic, strong) CLSNetworkClient * networkClient;
@property (nonatomic, strong) CLSFileManager * fileManager;
- (id)initWithQueue:(id)arg0 delegate:(id)arg1 client:(id)arg2 fileManager:(id)arg3;
- (id)settings;
- (id)appBundleIdentifier;
- (id)reportEndpoint;
- (id)reportURL;
- (char)submissionEnabled;
- (char)packagingEnabled;
- (id)localeIdentifier;
- (id)APIKey;
- (id)mutableRequestWithURL:(id)arg0 timeout:(id)arg1;
- (char)fillInRequest:(id)arg0 forMultipartMimeDataAtPath:(id)arg1;
- (char)prepareAndSubmitReport:(id)arg0 asUrgent:(id)arg1 withProcessing:(id)arg2;
- (char)submitPackageMultipartMimeAtPath:(id)arg0 synchronously:(id)arg1;
- (char)uploadPackagedReportAtPath:(id)arg0 asUrgent:(id)arg1;
- (char)cleanUpSubmittedReportAtPath:(id)arg0;
- (void)reportUploadAtPath:(id)arg0 completedWithError:(id)arg1;
// - (void).cxx_destruct;
- (<CLSReportsControllerDelegate> *)delegate;
- (void)setDelegate:(<CLSReportsControllerDelegate> *)arg0;
- (NSOperationQueue *)operationQueue;
- (CLSNetworkClient *)networkClient;
- (CLSFileManager *)fileManager;
@end
@interface CLSReport : NSObject
{
	CLSInternalReport * _internalReport;
	I _internalKVCounter;
	BOOL _isCrash;
}
@property (nonatomic, strong) id identifier;
@property (nonatomic, strong) id customKeys;
@property (nonatomic, strong) id bundleVersion;
@property (nonatomic, strong) id bundleShortVersionString;
@property (nonatomic, strong) id dateCreated;
@property (nonatomic, strong) id OSVersion;
@property (nonatomic, strong) id OSBuildVersion;
@property (nonatomic, assign) BOOL isCrash;
@property (nonatomic, strong) id userIdentifier;
@property (nonatomic, strong) id userName;
@property (nonatomic, strong) id userEmail;
@property (nonatomic, strong) CLSInternalReport * internalReport;
@property (nonatomic, strong) id crashedOnDate;
- (id)initWithInternalReport:(id)arg0;
- (id)internalKVStorage;
- (void)recordValue:(id)arg0 forInternalKey:(id)arg1;
- (id)identifier;
- (id)customKeys;
- (id)bundleVersion;
- (id)bundleShortVersionString;
- (id)dateCreated;
- (id)crashedOnDate;
- (id)OSVersion;
- (id)OSBuildVersion;
- (void)setObjectValue:(id)arg0 forKey:(id)arg1;
- (id)userIdentifier;
- (void)setUserIdentifier:(id)arg0;
- (id)userName;
- (void)setUserName:(id)arg0;
- (id)userEmail;
- (void)setUserEmail:(id)arg0;
// - (void).cxx_destruct;
- (char)isCrash;
- (CLSInternalReport *)internalReport;
@end
@interface CLSThreadArrayOperation : NSOperation
{
	NSArray * _threadArray;
}
@property (nonatomic, strong) NSArray * threadArray;
- (void)enumerateFramesWithBlock:(id)arg0;
// - (void).cxx_destruct;
- (NSArray *)threadArray;
- (void)setThreadArray:(NSArray *)arg0;
@end
@interface CLSEventLogFile : NSObject
{
	NSURL * _fileURL;
	uint64_t _fileSize;
	NSFileHandle * _fileHandle;
}
@property (nonatomic, strong) NSURL * fileURL;
@property (nonatomic, assign) uint64_t fileSize;
- (void)dealloc;
- (id)initWithURL:(id)arg0;
- (id)initWithName:(id)arg0 inDirectoryWithURL:(id)arg1;
- (id)init;
- (char)openFileHandleForWriting:(id)arg0;
- (char)openFileHandleForReading:(id)arg0;
- (void)closeFileHandle;
- (char)appendData:(id)arg0 error:(id)arg1;
- (char)resetFile:(id)arg0;
- (id)readFromFile:(id)arg0;
- (NSURL *)fileURL;
- (unsigned long long)fileSize;
@end
@interface CLSBetaUpdate : NSObject
{
	NSURL * _url;
	NSString * _version;
}
@property (nonatomic, strong) NSURL * url;
@property (nonatomic, strong) NSString * version;
@property (nonatomic, strong) id promptTitle;
@property (nonatomic, strong) id promptMessage;
@property (nonatomic, strong) id cancelLabel;
@property (nonatomic, strong) id installLabel;
- (id)initWithDictionary:(id)arg0;
- (id)promptTitle;
- (id)promptMessage;
- (id)cancelLabel;
- (id)installLabel;
// - (void).cxx_destruct;
- (NSURL *)url;
- (NSString *)version;
+ (id)betaUpdateWithDictionary:(id)arg0 error:(id)arg1;
@end
@interface CLSNetworkClient : NSObject
{
	NSURLSession * _session;
	BOOL _canUseBackgroundSession;
	<CLSNetworkClientDelegate> * _delegate;
	NSOperationQueue * _operationQueue;
	FABCertificatePinner * _certPinner;
	@? _backgroundCompletionHandler;
	CLSFileManager * _fileManager;
}
@property (nonatomic, strong) <CLSNetworkClientDelegate> * delegate;
@property (nonatomic, strong) NSOperationQueue * operationQueue;
@property (nonatomic, strong) id supportsBackgroundRequests;
@property (nonatomic, strong) FABCertificatePinner * certPinner;
@property (nonatomic, assign) @? backgroundCompletionHandler;
@property (nonatomic, strong) NSURLSession * session;
@property (nonatomic, assign) BOOL canUseBackgroundSession;
@property (nonatomic, strong) CLSFileManager * fileManager;
- (id)initWithQueue:(id)arg0 fileManager:(id)arg1 delegate:(id)arg2;
- (NSURLSession *)session;
- (char)supportsBackgroundRequests;
- (void)attemptToReconnectBackgroundSessionWithCompletionBlock:(id)arg0;
- (void)startUploadRequest:(id)arg0 filePath:(id)arg1 immediately:(id)arg2;
- (void)startImmediateUploadRequest:(id)arg0 filePath:(id)arg1;
- (void)startNewUploadRequest:(id)arg0 filePath:(id)arg1;
- (id)rootPath;
- (id)absolutePathForRelativeTaskPath:(id)arg0;
- (id)relativeTaskPathForAbsolutePath:(id)arg0;
- (char)taskArray:(id)arg0 hasTaskMatchingDescription:(id)arg1;
- (void)checkSession:(id)arg0 forTasksMatchingDescription:(id)arg1 completionBlock:(id)arg2;
- (void)checkForExistingTaskMatchingDescription:(id)arg0 completionBlock:(id)arg1;
- (void)runAfterRetryValueFromResponse:(id)arg0 block:(id)arg1;
- (void)restartTask:(id)arg0;
- (void)handleTask:(id)arg0 completedWithError:(id)arg1;
- (void)handleTaskDescription:(id)arg0 completedWithError:(id)arg1;
- (void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1;
- (void)URLSession:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg0;
- (void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2;
// - (void).cxx_destruct;
- (<CLSNetworkClientDelegate> *)delegate;
- (void)setDelegate:(<CLSNetworkClientDelegate> *)arg0;
- (NSOperationQueue *)operationQueue;
- (FABCertificatePinner *)certPinner;
- (@?)backgroundCompletionHandler;
- (void)setBackgroundCompletionHandler:(@?)arg0;
- (char)canUseBackgroundSession;
- (void)setCanUseBackgroundSession:(BOOL)arg0;
- (CLSFileManager *)fileManager;
- (void)setFileManager:(CLSFileManager *)arg0;
+ (id)pinner;
@end
@interface CLSAnalyticsEvent : CLSEventLogEvent <CLSEventLogEvent>
{
	NSString * _eventIdentifier;
	NSDictionary * _stringPayloadValueDict;
}
@property (nonatomic, strong) NSString * eventIdentifier;
@property (nonatomic, strong) NSDictionary * stringPayloadValueDict;
- (void)dealloc;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 key:(id)arg2 payload:(id)arg3;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 key:(id)arg2 eventIdentifier:(id)arg3 payloadValues:(id)arg4;
- (id)initWithPriority:(id)arg0 timestamp:(id)arg1 key:(id)arg2 eventIdentifier:(id)arg3;
- (id)initApplicationInstalledEventWithTimestamp:(id)arg0 eventIdentifier:(id)arg1;
- (id)initApplicationLaunchedEventWithTimestamp:(id)arg0 eventIdentifier:(id)arg1;
- (id)initApplicationCrashedEventWithTimestamp:(id)arg0 eventIdentifier:(id)arg1;
- (id)initWithApplicationNotificationName:(id)arg0 timestamp:(id)arg1 eventIdentifier:(id)arg2 highPriorityEventOnBackground:(id)arg3;
- (id)initCustomEventWithName:(id)arg0 attributes:(id)arg1 timestamp:(id)arg2 eventIdentifier:(id)arg3;
- (id)description;
- (NSString *)eventIdentifier;
- (NSDictionary *)stringPayloadValueDict;
@end
@interface PodsDummy_Pods_Annotate : NSObject
@end
@interface std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >
@end
@interface std::__1::__basic_string_common<true>
@end
