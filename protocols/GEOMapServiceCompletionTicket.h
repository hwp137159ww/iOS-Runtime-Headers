/* Generated by RuntimeBrowser.
 */

@protocol GEOMapServiceCompletionTicket <NSObject>

@required

- (void)cancel;
- (BOOL)matchesFragment:(NSString *)arg1;
- (void)submitWithAutoCompletionHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <GEOCompletion> *, NSError *, void*, id /* block */, void*, void, id /* block */, BOOL, void*
- (GEOMapServiceTraits *)traits;

@end