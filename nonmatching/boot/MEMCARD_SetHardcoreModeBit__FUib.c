/* USA SCUS_976.15 boot: MEMCARD_SetHardcoreModeBit__FUib, 0x01E62848.
 * Observed body: 48 bytes; it fills its interval.
 * Measured 14 November 2026 with the rebuilt default GNU route, gnu-ee-trial
 * and sdk991111, -O2 -G0, default GNU assembler and independent SN link at
 * the retail address: 48 compiled bytes, 30 equal byte positions, first
 * differing byte +0x10. The three routes agree on the linked text.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Bit 0 of the flags byte of header record `slot` is cleared, then set when
 * the argument is true, as two separate statements on the stored byte (see
 * MEMCARD_SetDanSkinUnlocked__FUi). The address computation, both masks and
 * the store are then exact. The remaining difference is the selection: retail
 * keeps "value, or value with bit 0" as a conditional move on the raw
 * argument, while a C integer argument makes `enabled ? 1 : 0` a comparison
 * result that is simply ORed in.
 * The mangled name gives the second parameter the C++ type bool. With that
 * parameter type and these same two statements, the C++ front ends of the
 * owner's SN packages (2.9-ee-991111, 2.95.2 and ProDG 2.95.3) each produce
 * all 48 retail bytes after the same independent link. The boot gate has no
 * C++ route, so this file stays a C trial; int follows the existing callers.
 * Reopen when a C++ front end can be qualified for boot sources, or with a
 * C representation of the boolean parameter that is not a steering device.
 */typedef struct {
    unsigned int word0;
    unsigned char byte4;
    unsigned int word8;
    unsigned int wordC;
    unsigned char date[3];
    unsigned char flags;
} tMEMCARD_SLOT_HEADER;

typedef struct {
    unsigned char unknown[0x68];
    tMEMCARD_SLOT_HEADER headers[1];
} tMEMCARD_REGION;

extern tMEMCARD_REGION memcard_region;

void MEMCARD_SetHardcoreModeBit__FUib(unsigned int slot, int enabled) {
    memcard_region.headers[slot].flags &= ~1;
    memcard_region.headers[slot].flags |= (enabled ? 1 : 0);
}