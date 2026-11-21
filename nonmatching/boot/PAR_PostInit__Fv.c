/* USA SCUS_976.15 boot: PAR_PostInit__Fv, 0x01E7A498..0x01E7A590.
 * Reconstructed from the owner's retail body, direct caller and callees.
 * Observed body 248 bytes, no padding. Measured 16 November 2026:
 * rebuilt default GNU, -O2 -G0 and GNU assembler emit real 248-byte object
 * text/FUNC symbols; an independent SN link reproduces all 248 body bytes.
 * gnu-ee-trial emits 252 bytes, 200 equal positions, first difference +0x2C.
 * These local results do not qualify a match, promote C or confer credit.
 * The count guard is signed; positive counts allocate 16-byte descriptors,
 * two opaque pools and a contiguous 4096-byte region for every descriptor.
 * The count is reloaded after the first allocation, retained across the two
 * pool calls and reloaded again for the descriptor loop, as in retail.
 * The filename argument remains a reference to the original data address;
 * no source-path string or implementation source is imported.
 * MEM_malloc's interface matches the accepted definition. The anonymous
 * setup helpers use the observed pointer/count interfaces; their pool views
 * are opaque 20-byte regions, not complete shared structures.
 * The pool2 count multiplication explicitly preserves the observed low-32-bit
 * wrap before conversion to the target int parameter.
 * The setup call and final lock store occur even when the count is nonpositive.
 * No allocation-failure, extreme-count, storage/capacity or indirect-caller
 * guard is added; these original preconditions and semantic bounds need review.
 * Complete-program integration and qualification remain separate obligations.
 */
typedef struct PAR_PostInitBlock {
    void *field0;
    struct PAR_PostInitBlock *next;
    unsigned char *data;
    void *fieldC;
} PAR_PostInitBlock;
typedef struct {
    PAR_PostInitBlock *free;
    PAR_PostInitBlock *storage;
    int count;
    unsigned char pool1[0x14];
    unsigned char pool2[0x14];
    unsigned char *data;
    unsigned int bytes;
    unsigned char unknown_3C[0x5C8 - 0x3C];
    unsigned char locked;
} PAR_PostInitState;
typedef char PAR_PostInitBlock_size[sizeof(PAR_PostInitBlock) == 0x10 ? 1 : -1];
extern PAR_PostInitState D_01F695A8;
extern char D_01F1E928[];
extern void func_1E7A3E0(void);
extern void func_1E7B818(void *, int);
extern void func_1E7B860(void *, int);
extern void PAR_Reset__Fv(void);
extern void *MEM_malloc__FUi12MEMAssetTypePcUi(unsigned int, int, char *, unsigned int);
void PAR_PostInit__Fv(void) {
    func_1E7A3E0();
    if (D_01F695A8.count > 0) {
        int count;
        PAR_PostInitBlock *block;
        PAR_PostInitBlock *end;
        unsigned char *data;
        D_01F695A8.bytes = (unsigned int)D_01F695A8.count * 0x1000u;
        D_01F695A8.storage = MEM_malloc__FUi12MEMAssetTypePcUi(
            D_01F695A8.count * sizeof(PAR_PostInitBlock), 0, D_01F1E928, 701);
        count = D_01F695A8.count;
        func_1E7B818(D_01F695A8.pool1, count);
        func_1E7B860(D_01F695A8.pool2, (int)((unsigned int)count * 8u));
        D_01F695A8.data = MEM_malloc__FUi12MEMAssetTypePcUi(
            D_01F695A8.bytes, 0, D_01F1E928, 708);
        block = D_01F695A8.storage;
        end = block + D_01F695A8.count;
        data = D_01F695A8.data;
        for (; block != end; ++block) {
            block->data = data;
            data += 0x1000;
        }
        PAR_Reset__Fv();
    }
    D_01F695A8.locked = 1;
}
