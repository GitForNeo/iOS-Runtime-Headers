/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTeslaConfiguration : NSObject {
    id /* block */  _callback;
    NSXPCConnection * _connection;
    BOOL  _fetching;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (getter=isFetching, nonatomic) BOOL fetching;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)connection;
- (id)connectionError;
- (void)dealloc;
- (void)fetchConfigurationWithCompletionBlock:(id /* block */)arg1;
- (void)fetchDidFailWithError:(id)arg1;
- (id)init;
- (BOOL)isFetching;
- (void)setCallback:(id /* block */)arg1;
- (void)setConnection:(id)arg1;
- (void)setFetching:(BOOL)arg1;

@end
