/* USA SCUS_976.15 boot: VRAM_Alloc__FUi12MEMAssetType, 0x01E93330.
 * Observed body: 180 bytes, followed by one zero alignment word inside its
 * 184-byte interval.
 * Measured 28 November 2026: all 180 body bytes are exact under the rebuilt
 * default GNU route (pinned) and gnu-ee-trial, -O2 -G0, default GNU assembler,
 * with relocations resolved at the retail addresses. The default tools are
 * rebuilt, not hash-qualified; this is an unaccepted witness and no promotion
 * or matching credit is claimed.
 * Reconstructed from the retail boot. Allocates VRAM linearly: the size is
 * rounded up to 16 bytes; when fewer than 64 allocations exist and the end
 * stays within 0x3FFFFF, the per-type total (19 types, the 0x4C-byte block
 * cleared by VRAM_Initialize) grows, an entry records the size with the type
 * in its top byte and the offset, the offset advances by the size plus an
 * 0x2000-byte gap and the count grows. Returns the old offset, or 0.
 * The count is read once into a local (the entry index uses that copy while
 * the count itself is reloaded); the rounding had to be written as two
 * statements on one variable (one expression gives 173/180, byte 6).
 * The entry table at 0x01FD3108 has no retail symbol yet; D_01FD3108 encodes it.
 */
typedef struct {
    unsigned int info;
    unsigned int offset;
} tVramEntry;

extern int g_vram_field18;
extern unsigned int g_vram_field1C;
extern unsigned int g_vram_state[];
extern tVramEntry D_01FD3108[];

unsigned int VRAM_Alloc__FUi12MEMAssetType(unsigned int size, int type) {
    int n = g_vram_field18;
    unsigned int offset;
    unsigned int sz = size + 15;

    sz &= ~15;
    if (n < 64) {
        if (g_vram_field1C + sz <= 0x3FFFFF) {
            if (type < 19) {
                g_vram_state[type] += sz;
            }
            offset = g_vram_field1C;
            D_01FD3108[n].info = sz | (type << 24);
            D_01FD3108[n].offset = offset;
            g_vram_field1C += 0x2000 + sz;
            g_vram_field18++;
            return offset;
        }
    }
    return 0;
}
