/* LEVEL_22.REL:0x0959B8, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001564E8;
extern void *D_001564EC;
extern int D_001564F0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0959B8(int value)
{
    if (value == 0) {
        D_001564E8 = D_FFFFFFFF;
        D_001564EC = D_FFFFFFFF;
    }
    D_001564F0 = 0;
}
