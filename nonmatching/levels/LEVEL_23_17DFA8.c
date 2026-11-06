/* LEVEL_23.REL:0x17DFA8, bounded 60-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +40.
 * The pinned compiler links 60 bytes but first differs at byte +40 in mask and epilogue scheduling. Reopen with the original shift-value lifetime or a qualified compiler route.
 */
extern int D_001DBE30;
extern int func_11FB10(void);
unsigned int func_17DFA8(unsigned int value)
{
    int masked = value & 0xff;
    int shift = D_001DBE30;
    if (shift < 0)
        shift = func_11FB10();
    return (masked >> shift) & 1;
}
