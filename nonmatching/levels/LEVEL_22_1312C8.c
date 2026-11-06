/* LEVEL_22.REL:0x1312C8, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +40.
 * The pinned compiler links 60 bytes but first differs at byte +40 in mask and epilogue scheduling. Reopen with the original shift-value lifetime or a qualified compiler route.
 */
extern int D_001668B0;
extern int func_105888(void);
unsigned int func_1312C8(unsigned int value)
{
    int masked = value & 0xff;
    int shift = D_001668B0;
    if (shift < 0)
        shift = func_105888();
    return (masked >> shift) & 1;
}
