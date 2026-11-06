/* LEVEL_03.REL:0x0A7128, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_0020F7E8;
extern void *D_0020F7EC;
extern int D_0020F7F0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0A7128(int value)
{
    if (value == 0) {
        D_0020F7E8 = D_FFFFFFFF;
        D_0020F7EC = D_FFFFFFFF;
    }
    D_0020F7F0 = 0;
}
