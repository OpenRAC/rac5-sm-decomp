/* LEVEL_05.REL:0x0A5968, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001E64E8;
extern void *D_001E64EC;
extern int D_001E64F0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0A5968(int value)
{
    if (value == 0) {
        D_001E64E8 = D_FFFFFFFF;
        D_001E64EC = D_FFFFFFFF;
    }
    D_001E64F0 = 0;
}
