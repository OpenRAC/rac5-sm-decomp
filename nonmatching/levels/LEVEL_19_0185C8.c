/* LEVEL_19.REL:0x0185C8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but uses another register for the global state before the call. Reopen with a qualified source-value lifetime or compiler route.
 */
extern int D_001DEA68;
extern void func_113C78(void);

void func_0185C8(void)
{
    if (D_001DEA68 == 4 || D_001DEA68 == 6)
        func_113C78();
}
