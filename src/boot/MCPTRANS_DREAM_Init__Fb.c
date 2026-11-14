/* MCPTRANS_DREAM_Init__Fb -- loads the dream transition skin and registers its particle system. */
extern void *GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int, int);
extern void LOAD_CHARACTER_SkinGdeFile__FP15WAD_FILE_HEADERPP14GDE_Header_PS2(void *, void *);
extern int GCSPAR_StreckRegisterParticleSystem__FUi(unsigned int);
extern void *D_01F67DA0;
extern unsigned int D_01F69E14;
extern int D_01EF084C;
extern unsigned char D_01EF07F0;

void MCPTRANS_DREAM_Init__Fb(int create) {
    void *asset = GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(0x3A30E1A1, 5);

    if (asset != 0)
        LOAD_CHARACTER_SkinGdeFile__FP15WAD_FILE_HEADERPP14GDE_Header_PS2(asset, &D_01F67DA0);
    if (create != 0) {
        int *slot = &D_01EF084C;

        *slot = GCSPAR_StreckRegisterParticleSystem__FUi((D_01F69E14 << 16) | 0x800030C1);
    }
    D_01EF07F0 = 0;
}
