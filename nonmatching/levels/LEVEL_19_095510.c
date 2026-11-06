/* LEVEL_19.REL:0x095510, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001A62B8;
extern void *D_001A62BC;
extern int D_001A62C0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_095510(int value)
{
    if (value == 0) {
        D_001A62B8 = D_FFFFFFFF;
        D_001A62BC = D_FFFFFFFF;
    }
    D_001A62C0 = 0;
}
