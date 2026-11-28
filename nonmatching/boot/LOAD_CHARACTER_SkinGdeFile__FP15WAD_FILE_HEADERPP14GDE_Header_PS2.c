/*
 * Symbol:  LOAD_CHARACTER_SkinGdeFile__FP15WAD_FILE_HEADERPP14GDE_Header_PS2
 * Address: 0x01E8E648
 * Body:    440 bytes (the 504-byte next-label interval ends with retail
 *          words that are not part of this body)
 *
 * Prepares a character skin GDE embedded at offset 0xC0 of a WAD file
 * header. On first use it runs the unnamed loader.cpp fixup at 0x01E8E4B0
 * (fails -> returns 0) and marks the file initialised; it then always adds
 * the file size to MEM asset type 6, clears a word of every mesh and, for
 * each texture group of each mesh, resolves every texture reference by
 * signature (WAD asset type 8) and stores the loaded texture index. The GDE
 * pointer is written through the second argument and 1 is returned.
 * Field names and the opaque layouts are local to this file and proven
 * only by the offsets this body uses.
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as); gnu-ee-trial and
 * both divpad trial builds give the same bytes.
 * Measured 28 November 2026: 440/440 compiled size, 30 differing words,
 * first difference at byte 130 (pre-screen, relocations resolved at the
 * retail addresses). Control flow, stack frame, call sequence and loop
 * structure agree. The remaining difference is register allocation in the
 * three nested loops: retail allocates the mesh and group offset products
 * to the same argument register and recomputes the group offset product
 * in the innermost loop preheader, where this source reuses it through a
 * copy; the innermost loop also schedules one load earlier in retail.
 * Declaration order, block-scoped counters, int/unsigned counters, a
 * temporary for the asset or the signature, a do/while inner loop and a
 * signed count did not change (or worsened) that difference.
 * Reopen when a different expression of the group addressing (for example
 * a proven GDE skin mesh layout from a sibling SKIN_ or GDEMESH_ body) or a
 * qualified compiler route changes the register allocation of the inner
 * loop preheader.
 */
typedef struct {
    unsigned short count;
    unsigned short pad;
    unsigned short index[8];
    unsigned short texture[20];
} GdeSkinTexGroup;

typedef struct {
    unsigned char pad0[0x60];
    unsigned int f60;
    unsigned char pad64[0x8];
    unsigned int groupCount;
    GdeSkinTexGroup groups[2];
    unsigned char padE8[0x10];
} GdeSkinMesh;

typedef struct {
    unsigned int signature;
    unsigned char pad[0x10];
} GdeTexRef;

typedef struct {
    unsigned char pad0[0x8];
    unsigned int meshCount;
    GdeSkinMesh *meshes;
    unsigned char pad10[0x4];
    GdeTexRef *textures;
} GDE_Header_PS2;

typedef struct {
    unsigned char pad0[0x4];
    unsigned char name[0x64];
    unsigned int size;
    unsigned char pad6C[0xC];
    unsigned int initialised;
    unsigned char pad7C[0x44];
    GDE_Header_PS2 gde;
} WAD_FILE_HEADER;

extern int func_1E8E4B0(GDE_Header_PS2 *gde, void *name);
extern void MEM_AddAssetUsage__F12MEMAssetTypeUi(int type, unsigned int amount);
extern void *LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(unsigned int signature, int type);
extern unsigned int TEXMGR_LoadTexture__FP15WAD_FILE_HEADER(void *header);

int LOAD_CHARACTER_SkinGdeFile__FP15WAD_FILE_HEADERPP14GDE_Header_PS2(WAD_FILE_HEADER *file, GDE_Header_PS2 **out) {
    GDE_Header_PS2 *gde;
    unsigned int i;
    unsigned int j;
    int k;

    if (file == 0) {
        return 0;
    }
    gde = &file->gde;
    if (file->initialised == 0) {
        if (func_1E8E4B0(gde, file->name) == 0) {
            return 0;
        }
        file->initialised = 1;
    }
    MEM_AddAssetUsage__F12MEMAssetTypeUi(6, file->size);
    for (i = 0; i < gde->meshCount; i++) {
        gde->meshes[i].f60 = 0;
        for (j = 0; j < gde->meshes[i].groupCount; j++) {
            for (k = 0; k < gde->meshes[i].groups[j].count; k++) {
                gde->meshes[i].groups[j].texture[k] = TEXMGR_LoadTexture__FP15WAD_FILE_HEADER(
                    LOADER_FindAssetsBySignature__FUi14WAD_ASSET_TYPE(
                        gde->textures[gde->meshes[i].groups[j].index[k]].signature, 8));
            }
        }
    }
    *out = gde;
    return 1;
}
