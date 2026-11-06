/* LEVEL_23.REL:0x09E118, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001CA568;
extern void *D_001CA56C;
extern int D_001CA570;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_09E118(int value)
{
    if (value == 0) {
        D_001CA568 = D_FFFFFFFF;
        D_001CA56C = D_FFFFFFFF;
    }
    D_001CA570 = 0;
}
