/* LEVEL_04.REL:0x0AC5B8, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_00210628;
extern void *D_0021062C;
extern int D_00210630;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0AC5B8(int value)
{
    if (value == 0) {
        D_00210628 = D_FFFFFFFF;
        D_0021062C = D_FFFFFFFF;
    }
    D_00210630 = 0;
}
