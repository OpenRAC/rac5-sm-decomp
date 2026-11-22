/* 0x01E86F88 -- allocates the shadow blob texture handle, resets the light state and clears the packed fields of the light counter tag. Ported from OpenRAC/rac5-sm-decomp src/levels/01_pokitaru/LIGHT_Init__Fv_LEVEL_01.c (LIGHT_Init__Fv_LEVEL_01). */
extern int LOADER_LoadTexture__FUi14WAD_ASSET_TYPE(unsigned int kind, int count);
extern void LIGHT_Reset__Fv(void);

extern int G_ShadowBlobHandle;
extern char g_LIGHTcntTag[];

void LIGHT_Init__Fv(void)
{
    unsigned long long v;

    G_ShadowBlobHandle = LOADER_LoadTexture__FUi14WAD_ASSET_TYPE(0x3A, 8);
    LIGHT_Reset__Fv();
    *(unsigned short *)(g_LIGHTcntTag + 0) = 8;
    v = *(unsigned long long *)(g_LIGHTcntTag);
    v &= ~(0x3FFULL << 16);
    v &= ~(0x3ULL << 26);
    v &= ~(0x7ULL << 28);
    v |= 0x1ULL << 28;
    v &= ~(0x1ULL << 31);
    v &= ~(0x7FFFFFFFULL << 32);
    v &= ~(0x1ULL << 63);
    *(unsigned long long *)(g_LIGHTcntTag) = v;
    *(unsigned short *)(g_LIGHTcntTag + 8) = 0;
    *(char *)(g_LIGHTcntTag + 0xA) = 0;
    *(char *)(g_LIGHTcntTag + 0xB) = 0;
    *(unsigned short *)(g_LIGHTcntTag + 0xC) = 0;
    *(char *)(g_LIGHTcntTag + 0xE) = 0;
    *(char *)(g_LIGHTcntTag + 0xF) = 0;
}
