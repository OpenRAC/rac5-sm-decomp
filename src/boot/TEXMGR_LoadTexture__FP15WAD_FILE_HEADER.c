/* TEXMGR_LoadTexture__FP15WAD_FILE_HEADER -- loads a texture from a WAD asset (or a default one) and records its name hash. */
typedef struct {
    unsigned char pad[4];
    char name[0x64];
    unsigned int size;
    unsigned char pad2[0x54];
    unsigned char data[1];
} tWadHeader;

extern int g_TEXMGR_NextTexture;
extern unsigned int D_01F702B8[];
extern unsigned int TEXMGR_LoadTextureFromMemory__FPCUcUibPbT2N22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(
    const unsigned char *data, unsigned int size, int a, unsigned char *flag, int b, int c, int d, int e);
extern unsigned int UTIL_32bitStringHash__FPCc(const char *s);

unsigned int TEXMGR_LoadTexture__FP15WAD_FILE_HEADER(tWadHeader *header) {
    unsigned char flag[2];
    unsigned int index;

    if (header == 0) {
        return TEXMGR_LoadTextureFromMemory__FPCUcUibPbT2N22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(0, 0, 0, flag, 1, 0, 0, 0);
    }
    if (g_TEXMGR_NextTexture < 0x100) {
        flag[1] = 0;
        index = TEXMGR_LoadTextureFromMemory__FPCUcUibPbT2N22P29tTEXMGR_ALPHA_COLOR_TOLERANCE(header->data, header->size, 1, flag + 1, 1, 0, 0, 0);
        D_01F702B8[index] = UTIL_32bitStringHash__FPCc(header->name);
        return index;
    }
    return 0xFFFFFFFF;
}
