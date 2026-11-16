/* USA SCUS_976.15 boot: GLOBALWAD_SplitWadToIOP__FP10WAD_HEADERPvUiRUi,
 * 0x01E90400. Observed body: 360 bytes; it fills its interval.
 * Measured 14 November 2026: all 360 body bytes are exact after independent
 * SN linking at the retail address under the rebuilt default GNU route, with
 * -O2 -G0 and the default GNU assembler (also under gnu-ee-trial-divpad and
 * its blockmove variant; gnu-ee-trial alone gives 281 of 360, loop padding).
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Sizes and allocates a copy of a loaded
 * WAD (the 0x10C0-byte header block plus one 0xC0-byte slot per chained file
 * header), copies the header block, then passes every file entry and every
 * asset table entry through GLOBALWAD_CopyAndFix and returns the copy.
 * The address of the entry table is taken once at entry, and the sizing loop
 * names wad->entries[i] again: that repeated access is what leaves retail's
 * register copy before the loop (270 of 360 without it). The asset table
 * pointer is set before the first copy loop.
 * memcpy is declared as returning void so that the 0x10C0-byte copy stays a
 * call, as in retail; with the standard prototype the compiler expands it.
 * The fourth parameter's reference type and the layouts are provisional.
 */
typedef struct WAD_FILE_HEADER {
    unsigned char unknown00[0x70];
    struct WAD_FILE_HEADER *link70;
    unsigned char unknown74[0x4C];
} WAD_FILE_HEADER;

typedef struct WAD_HEADER {
    unsigned int unknown00;
    WAD_FILE_HEADER *entries[12];
    unsigned char unknown34[0x8C];
    WAD_FILE_HEADER *assets[0x400];
} WAD_HEADER;

extern char D_01F1FE80[];
extern void *MEM_memalign__FUiUi12MEMAssetTypePcUi(unsigned int alignment, unsigned int size,
                                                   int type, char *name, unsigned int line);
extern void memcpy(void *dest, const void *src, unsigned int n);
extern WAD_FILE_HEADER *GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi(
    WAD_FILE_HEADER *source, WAD_FILE_HEADER **cursor, void *base, unsigned int parameter,
    unsigned int *offset);

WAD_HEADER *GLOBALWAD_SplitWadToIOP__FP10WAD_HEADERPvUiRUi(
    WAD_HEADER *wad, void *buffer, unsigned int size, unsigned int *used) {
    WAD_FILE_HEADER **entries = wad->entries;
    WAD_HEADER *copy;
    WAD_FILE_HEADER *cursor;
    WAD_FILE_HEADER *node;
    WAD_FILE_HEADER **src;
    WAD_FILE_HEADER **dst;
    WAD_FILE_HEADER **assets;
    unsigned int total;
    unsigned int i;
    unsigned int j;
    unsigned int k;

    total = 0x10C0;
    for (i = 0; i < 12; i++) {
        node = wad->entries[i];
        if (node) {
            do {
                node = node->link70;
                total += 0xC0;
            } while (node);
        }
    }
    copy = (WAD_HEADER *)MEM_memalign__FUiUi12MEMAssetTypePcUi(0x10, total, 0x10, D_01F1FE80, 0x1A4);
    memcpy(copy, wad, 0x10C0);
    assets = copy->assets;
    cursor = (WAD_FILE_HEADER *)((unsigned char *)copy + 0x10C0);
    *used = 0;
    src = entries;
    dst = copy->entries;
    for (j = 0; j < 12; j++) {
        if (*src)
            *dst = GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi(
                *src, &cursor, buffer, size, used);
        dst++;
        src++;
    }
    for (k = 0; k < 0x400; k++) {
        if (*assets)
            *assets = GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi(
                *assets, &cursor, buffer, size, used);
        assets++;
    }
    return copy;
}