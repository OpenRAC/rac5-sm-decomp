/* USA SCUS_976.15 boot: HIT_fread__FPvUiUiPi at 0x01E8C858.
 * Observed returning body: 212 bytes; the next four bytes are zero alignment.
 * Adapted from the accepted LEVEL_01 implementation in this repository,
 * independently checked against the boot and the accepted higIoRead callee.
 * Both unit-size/count parameters are unsigned; the encoded handle follows
 * the int convention of existing boot callers and the other HIT wrappers.
 * Handle reduction and multiplication wrap as unsigned 32-bit operations.
 * The comparison against the requested byte size is signed, as in retail.
 * Unsigned rounding addition avoids introducing signed-overflow assumptions.
 * Isolated independent SN links reproduce all 212 bytes with the rebuilt
 * default GNU route or gnu-ee-trial, -O2 -G0 -mno-check-zero-division,
 * and the default GNU assembler. Without that final option: 220 bytes,
 * 184 equal positions in the 212-byte compared prefix, first difference +52.
 * This existing project option suppresses the guard absent from retail.
 * All seven direct boot callers pass a nonzero unit size (1 or 0x800).
 * Indirect/exported callers still require coverage of the divisor domain;
 * no complete-program gate, promotion or qualified matching credit is claimed.
 */
extern unsigned char D_01F7E618[];
extern unsigned char g_hitBinMode[];
extern int higIoRead__FiPvUi(int slot, void *dst, unsigned int size);

int HIT_fread__FPvUiUiPi(void *dst, unsigned int n, unsigned int m,
                       int handle) {
    unsigned int slot = (unsigned int)handle - 1u;
    int size;
    int r;

    if (slot >= 0x20)
        return 0;
    size = n * m;
    D_01F7E618[slot] = 0;
    g_hitBinMode[slot] = 0;
    r = higIoRead__FiPvUi(slot, dst, size);
    if (r < 0) {
        D_01F7E618[slot] = 1;
        return 0;
    }
    if (((int)((unsigned int)r + 0x7FFu) & -0x800) < size) {
        g_hitBinMode[slot] = 1;
        return (unsigned int)r / n;
    }
    return m;
}
