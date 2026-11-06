/* LEVEL_17.REL:0x018248, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +2.
 * The pinned compiler links 56 bytes but uses another register for the global state before the call. Reopen with a qualified source-value lifetime or compiler route.
 */
extern int D_001CFBE8;
extern void func_112C60(void);

void func_018248(void)
{
    if (D_001CFBE8 == 4 || D_001CFBE8 == 6)
        func_112C60();
}
