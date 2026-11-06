/* LEVEL_16.REL:0x0188C8, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but uses another register for the global state before the call. Reopen with a qualified source-value lifetime or compiler route.
 */
extern int D_001DE8E8;
extern void func_1134D0(void);
void func_0188C8(void)
{
    int state = D_001DE8E8;
    if (state == 4 || state == 6)
        func_1134D0();
}