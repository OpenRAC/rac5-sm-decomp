/* LEVEL_20.REL:0x080378, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_00107818;
extern void *D_0010781C;
extern int D_00107820;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_080378(int value)
{
    if (value == 0) {
        D_00107818 = D_FFFFFFFF;
        D_0010781C = D_FFFFFFFF;
    }
    D_00107820 = 0;
}
