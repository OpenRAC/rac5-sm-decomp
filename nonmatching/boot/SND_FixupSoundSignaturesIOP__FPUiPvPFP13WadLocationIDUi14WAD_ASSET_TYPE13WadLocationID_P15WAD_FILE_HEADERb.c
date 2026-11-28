/* USA SCUS_976.15 boot:
 * SND_FixupSoundSignaturesIOP__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADERb,
 * 0x01E91EB8. Observed body: 348 bytes, followed by one zero alignment word.
 * Measured 15 November 2026 with the rebuilt default GNU route and
 * gnu-ee-trial-divpad-blockmove, -O2 -G0, default GNU assembler and
 * independent SN link at the retail address: 348 compiled bytes, 334 equal
 * positions, first differing byte +0x44. gnu-ee-trial gives 356 bytes.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Checks the 0xAABBCCDD mark of a sound-signature block, optionally loads
 * the sound banks through the IOP and resolves their cross references,
 * then rewrites each entry through the caller's lookup callback (or only
 * stamps the load result on entries an earlier pass rewrote) and marks the
 * block done. Returns the load result.
 * One difference: retail stores the zero result before testing the boolean
 * argument and takes the address of the result in that branch's delay slot;
 * the compiler puts the store there. A local pointer to the result is
 * folded away. snd_BankLoadFromIOP_CB is declared with the (data, callback,
 * result pointer) shape this caller uses, which differs from the accepted
 * definition of that callee and needs reconciling.
 * Reopen with a form that computes the result's address before the test.
 * 28 November 2026: the callback at 0x01E91EA8 takes the name the accepted
 * sibling SND_FixupSoundSignatures uses (snd_LoadBankCallback). Default and
 * both divpad routes: 334 of 348 bytes, first difference +0x44; gnu-ee-trial
 * emits 356 bytes. Retail stores the zero result ahead of the load_banks test
 * and forms the result's stack address before the callback address; this
 * route puts the store in the delay slot and folds every pointer form of the
 * result address back into a direct stack reference. Moving or initialising
 * the store, writing it in both branches, volatile, helpers (static or inline)
 * and other bool widths were measured without improvement (80 to 334).
 */
extern void snd_BankLoadFromIOP_CB(void *wad, void *callback, int *result);
extern int snd_FlushSoundCommands(void);
extern void DelayThread(int usec);
extern void snd_GetLastLoadError(void);
extern void snd_ResolveBankXREFS(void);
extern unsigned int
SND_Fixup__FUiPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    unsigned int id, void *callback);
extern void snd_LoadBankCallback(void); /* 0x01E91EA8 */

unsigned int
SND_FixupSoundSignaturesIOP__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADERb(
    unsigned int *data, void *wad, void *callback, int load_banks) {
    int result;
    unsigned int count;
    unsigned int masked;
    unsigned int i;
    unsigned int k;
    unsigned int fixed;
    unsigned int *entry;

    if (data[0] != 0xAABBCCDDu)
        return 0;
    data++;
    result = 0;
    if (load_banks) {
        snd_BankLoadFromIOP_CB(wad, (void *)snd_LoadBankCallback, &result);
        while (snd_FlushSoundCommands())
            DelayThread(5000);
        if (!result)
            snd_GetLastLoadError();
        else
            snd_ResolveBankXREFS();
    }
    count = data[0];
    if ((int)count < 0) {
        masked = count & 0x7FFFFFFFu;
        for (k = 0; k < masked; k++) {
            entry = (unsigned int *)data[k + 1];
            if (entry)
                entry[3] = result;
        }
    } else {
        for (i = 0; i < count; i++) {
            fixed = SND_Fixup__FUiPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                data[i + 1], callback);
            if (fixed)
                *(unsigned int *)(fixed + 0xC) = result;
            data[i + 1] = fixed;
        }
        data[0] |= 0x80000000u;
    }
    return result;
}
