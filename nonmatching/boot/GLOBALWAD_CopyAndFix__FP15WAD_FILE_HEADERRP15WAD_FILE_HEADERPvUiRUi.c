/* USA SCUS_976.15 boot:
 * GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi,
 * 0x01E90240. Observed body: 448 bytes; it fills its interval.
 * Measured 14 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad-blockmove: 448 of 448 bytes. That profile is a
 *   level profile; this body has no boot-gate route today.
 * - rebuilt default route and gnu-ee-trial-divpad: 456 compiled bytes, 230
 *   equal positions, first differing byte +0x3C; the only difference is one
 *   padding nop in each of the two record-copy loops.
 * Profile-dependent trial: no complete-program gate, promotion or credit.
 * Returns the existing copy when the header already has one; otherwise
 * takes the next 0xC0-byte slot, copies the header, sends the payload
 * (rounded up to 16 bytes) to the IOP at base + *offset, waits for the
 * transfer, records the copy in the source and recurses on its two links.
 * Prototype to reconcile before integration: SND_DMAtoIOP__FPvT0Ui is
 * declared here as returning the transfer identifier that this body passes
 * to sceSifDmaStat. The accepted src/boot source defines it void; the same
 * accepted body written with a returned value keeps its 52 bytes.
 * Layout and field names are provisional and derived from this body.
 */
typedef struct WAD_FILE_HEADER {
    unsigned char unknown00[0x68];
    unsigned int payload_size;
    struct WAD_FILE_HEADER *link6c;
    struct WAD_FILE_HEADER *link70;
    unsigned char unknown74[8];
    void *mapped;
    unsigned char unknown80[0x40];
} WAD_FILE_HEADER;

extern int SND_DMAtoIOP__FPvT0Ui(void *source, void *destination,
                                unsigned int bytes);
extern int sceSifDmaStat(int dma);
extern void DelayThread(unsigned int microseconds);

WAD_FILE_HEADER *GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi(
    WAD_FILE_HEADER *source, WAD_FILE_HEADER **cursor, void *base,
    unsigned int parameter, unsigned int *offset)
{
    WAD_FILE_HEADER *copy;
    unsigned int bytes;
    int dma;
    int status;
    if (source->mapped != 0)
        return (WAD_FILE_HEADER *)source->mapped;

    copy = *cursor;
    *cursor = copy + 1;
    *copy = *source;
    bytes = (source->payload_size + 15) & ~15u;
    copy->mapped = (unsigned char *)base + *offset;
    dma = SND_DMAtoIOP__FPvT0Ui(source + 1, copy->mapped, bytes);
    *offset += bytes;
    do {
        status = sceSifDmaStat(dma);
        DelayThread(800);
    } while (status > 0);
    source->mapped = copy;
    if (copy->link70 != 0)
        copy->link70 = GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi(
            copy->link70, cursor, base, parameter, offset);
    if (copy->link6c != 0)
        copy->link6c = GLOBALWAD_CopyAndFix__FP15WAD_FILE_HEADERRP15WAD_FILE_HEADERPvUiRUi(
            copy->link6c, cursor, base, parameter, offset);
    return copy;
}
