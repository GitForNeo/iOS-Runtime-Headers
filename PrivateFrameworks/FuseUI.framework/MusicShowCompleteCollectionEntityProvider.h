/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicShowCompleteCollectionEntityProvider : NSObject <MusicEntityProviding> {
    MusicCompleteOfferEntityProvider * _completeOfferEntityProvider;
    NSString * _localizedTitle;
    BOOL  _shouldIncludeShowCompleteButton;
    MusicShowCompleteCollectionEntityValueProvider * _showCompleteCollectionEntityValueProvider;
}

@property (nonatomic, readonly) MusicCompleteOfferEntityProvider *completeOfferEntityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) BOOL shouldIncludeStoreCompleteOffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeOfferEntityProviderStoreCompleteOfferAvailableDidChangeNotification:(id)arg1;
- (id)_showCompleteCollectionEntityValueProvider;
- (void)_updateShouldIncludeShowCompleteButton;
- (id)completeOfferEntityProvider;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned int)arg2;
- (void)dealloc;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (BOOL)hasEntities;
- (BOOL)hasEntitiesNotInLibrary;
- (id)indexBarEntryAtIndex:(unsigned int)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)initWithCompleteOfferEntityProvider:(id)arg1;
- (id)localizedTitle;
- (unsigned int)numberOfEntitiesInSection:(unsigned int)arg1;
- (unsigned int)numberOfIndexBarEntries;
- (unsigned int)numberOfSections;
- (unsigned int)sectionForSectionIndexBarEntryAtIndex:(unsigned int)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setShouldIncludeStoreCompleteOffer:(BOOL)arg1;
- (BOOL)shouldIncludeStoreCompleteOffer;

@end
