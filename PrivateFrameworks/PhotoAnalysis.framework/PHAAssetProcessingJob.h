/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAssetProcessingJob : PHAWorkerJob {
    NSArray * _assetLocalIdentifiers;
    NSMutableDictionary * _resultsByAssetLocalIdentifier;
    NSRecursiveLock * _resultsLock;
}

@property (nonatomic, readonly) NSArray *assetLocalIdentifiers;
@property (nonatomic, readonly, copy) NSArray *incompleteAssetLocalIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *resultsByAssetLocalIdentifier;
@property (readonly) NSRecursiveLock *resultsLock;

- (void).cxx_destruct;
- (id)_resultsCopy;
- (id)assetLocalIdentifiers;
- (float)completionScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)finished;
- (id)incompleteAssetLocalIdentifiers;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned int)arg2 assetLocalIdentifiers:(id)arg3 library:(id)arg4;
- (void)reportResult:(unsigned int)arg1 forAssetLocalIdentifier:(id)arg2;
- (unsigned int)resultCount;
- (unsigned int)resultForAssetLocalIdentifier:(id)arg1;
- (id)resultsByAssetLocalIdentifier;
- (id)resultsLock;
- (id)statusAsDictionary;
- (unsigned int)successfulResultCount;

@end
