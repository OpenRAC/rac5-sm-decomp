/* LEVEL_08.REL:0x0B1CA0, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_00240028;
extern void *D_0024002C;
extern int D_00240030;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0B1CA0(int value)
{
    if (value == 0) {
        D_00240028 = D_FFFFFFFF;
        D_0024002C = D_FFFFFFFF;
    }
    D_00240030 = 0;
}
