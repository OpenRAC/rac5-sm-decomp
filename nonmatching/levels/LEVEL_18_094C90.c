/* LEVEL_18.REL:0x094C90, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001A65B8;
extern void *D_001A65BC;
extern int D_001A65C0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_094C90(int value)
{
    if (value == 0) {
        D_001A65B8 = D_FFFFFFFF;
        D_001A65BC = D_FFFFFFFF;
    }
    D_001A65C0 = 0;
}
