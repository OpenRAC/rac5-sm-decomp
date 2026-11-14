/* MCPTRANS_FALL_Init__Fb -- loads the fall transition skin, registers its particle system and copies the start vector. */
typedef struct {
    float x;
    float y;
    float z;
} tVec3;

extern void *GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int, int);
extern void LOAD_CHARACTER_SkinGdeFile__FP15WAD_FILE_HEADERPP14GDE_Header_PS2(void *, void *);
extern int GCSPAR_StreckRegisterParticleSystem__FUi(unsigned int);
extern void *D_01F67D08;
extern tVec3 D_01F67D10;
extern tVec3 D_01EF0720;
extern unsigned int D_01F69E14;
extern int D_01EF07A4;

void MCPTRANS_FALL_Init__Fb(int create) {
    void *asset = GLOBALWAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(0x3A30E1A1, 5);

    if (asset != 0)
        LOAD_CHARACTER_SkinGdeFile__FP15WAD_FILE_HEADERPP14GDE_Header_PS2(asset, &D_01F67D08);
    if (create != 0) {
        int *slot = &D_01EF07A4;

        *slot = GCSPAR_StreckRegisterParticleSystem__FUi((D_01F69E14 << 16) | 0x800030C1);
    }
    D_01F67D10 = D_01EF0720;
}
