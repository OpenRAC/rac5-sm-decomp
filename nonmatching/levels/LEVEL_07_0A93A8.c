/* LEVEL_07.REL:0x0A93A8, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_0020B468;
extern void *D_0020B46C;
extern int D_0020B470;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0A93A8(int value)
{
    if (value == 0) {
        D_0020B468 = D_FFFFFFFF;
        D_0020B46C = D_FFFFFFFF;
    }
    D_0020B470 = 0;
}
