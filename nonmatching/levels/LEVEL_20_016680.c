/* LEVEL_20.REL:0x016680, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but uses another register for the global state before the call. Reopen with a qualified source-value lifetime or compiler route.
 */
extern int D_00136268;
extern void func_0E6040(void);

void func_016680(void)
{
    if (D_00136268 == 4 || D_00136268 == 6)
        func_0E6040();
}
