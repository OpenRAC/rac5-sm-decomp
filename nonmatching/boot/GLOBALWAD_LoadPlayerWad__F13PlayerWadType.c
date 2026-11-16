/* USA SCUS_976.15 boot: GLOBALWAD_LoadPlayerWad__F13PlayerWadType, 0x01E90698.
 * Observed body: 512 bytes; it fills its interval.
 * Measured 14 November 2026: all 512 body bytes are exact after independent
 * SN linking at the retail address under both the rebuilt default GNU route
 * and gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Returns 1 at once when the requested
 * player WAD is already loaded; otherwise releases the current one, reads
 * the first sector of the main file to size an aligned allocation, loads the
 * main and secondary WADs, then finds and fixes up their sound assets.
 * Prototype to reconcile before integration: HIT_fclose__FPi is declared
 * here as returning int. The accepted src/boot source defines it void, as a
 * call of higIoClose__Fi whose value is left in the result register. With
 * the void declaration this body is 509 of 512 bytes: the compiler then
 * reuses the result register for the value computed after the call, where
 * retail takes the next one. The size is read and written through a pointer
 * to the local, as retail does. The D_ names are unnamed read-only strings.
 */
typedef struct {
    unsigned char pad00[0x38];
    unsigned int field38;
    unsigned char pad3C[0x24];
    unsigned int field60;
    unsigned int field64;
    unsigned int field68;
} tMcpGlobals;

typedef struct {
    unsigned int size;
    void *header;
    void *buffer;
} tLoadState;

extern tMcpGlobals g_McpGlobals;
extern const char D_01F1FE80[];
extern const char D_01F1FED0[];
extern const char D_01F1FEE0[];
extern const char D_01F1FF00[];
extern const char D_01F1FF10[];
extern const char D_01F1FF20[];
extern unsigned int g_PlayerSoundBank;

extern void GLOBALWAD_ReleasePlayerWad__Fv(void);
extern int HIT_fopen_internal__FPCcT0(const char *filename, const char *mode);
extern int HIT_fread__FPvUiUiPi(void *buf, unsigned int size, unsigned int count, int handle);
extern int HIT_fclose__FPi(int handle);
extern void *MEM_memalign__FUiUi12MEMAssetTypePcUi(unsigned int size, unsigned int align,
                                                   int type, const char *name,
                                                   unsigned int line);
extern int WAD_Load__FPCcPP10WAD_HEADERPPUc(const char *name, void *header, void *data);
extern int WAD_Load__FPCcP10WAD_HEADER(const char *name, void *buf);
extern void *GetBufferCachePtr__Fv(void);
extern unsigned char *WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
    unsigned int signature, int type, void *header);
extern unsigned int SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
    unsigned int *data, void *buffer, void *callback);
extern void GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID(void);

int GLOBALWAD_LoadPlayerWad__F13PlayerWadType(int type) {
    unsigned int hdr[0x200];
    tLoadState s;
    const char *name1;
    const char *name2;
    int fd;
    unsigned int *sizep;
    unsigned char *asset;
    unsigned char *second;

    if (g_McpGlobals.field38 == type) {
        return 1;
    }
    GLOBALWAD_ReleasePlayerWad__Fv();
    sizep = &s.size;
    *sizep = 0;
    if (type == 1) {
        name1 = D_01F1FED0;
        name2 = D_01F1FEE0;
    } else {
        name1 = D_01F1FF00;
        name2 = D_01F1FF10;
    }
    if (*sizep == 0) {
        fd = HIT_fopen_internal__FPCcT0(name1, D_01F1FF20);
        if (fd == 0) {
            return 0;
        }
        if (HIT_fread__FPvUiUiPi(hdr, 0x800, 1, fd) != 1) {
            HIT_fclose__FPi(fd);
            return 0;
        }
        HIT_fclose__FPi(fd);
        *sizep = hdr[15] + 0xC0;
    }
    g_McpGlobals.field60 = (unsigned int)MEM_memalign__FUiUi12MEMAssetTypePcUi(0x40, *sizep, 0x10, D_01F1FE80, 0x27A);
    if (g_McpGlobals.field60 == 0) {
        return 0;
    }
    if (!WAD_Load__FPCcP10WAD_HEADER(name1, (void *)g_McpGlobals.field60)) {
        return 0;
    }
    s.buffer = GetBufferCachePtr__Fv();
    if (s.buffer == 0) {
        return 0;
    }
    WAD_Load__FPCcPP10WAD_HEADERPPUc(name2, &s.header, &s.buffer);
    g_McpGlobals.field38 = type;
    asset = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
        0xAABBCC9F, 4, (void *)g_McpGlobals.field60);
    if (s.header != 0) {
        second = WAD_FindAssetsBySignature__FUi14WAD_ASSET_TYPEP10WAD_HEADER(
            0xAABBCCA0, 4, s.header);
    } else {
        second = 0;
    }
    if (asset != 0 && second != 0) {
        asset += 0xC0;
        g_PlayerSoundBank =
            SND_FixupSoundSignatures__FPUiPvPFP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID_P15WAD_FILE_HEADER(
                (unsigned int *)asset, second + 0xC0,
                (void *)GLOBALWAD_FindAssetsInWadBySignature__FP13WadLocationIDUi14WAD_ASSET_TYPE13WadLocationID);

        g_McpGlobals.field68 = *(unsigned int *)asset & 0xFFFFFF;
        g_McpGlobals.field64 = (unsigned int)(asset + 4);
    } else {
        g_McpGlobals.field68 = 0;
        g_McpGlobals.field64 = 0;
    }
    return 1;
}
