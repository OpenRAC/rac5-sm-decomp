/* LEVEL_24.REL:0x0A0C20, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001C7DE8;
extern void *D_001C7DEC;
extern int D_001C7DF0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0A0C20(int value)
{
    if (value == 0) {
        D_001C7DE8 = D_FFFFFFFF;
        D_001C7DEC = D_FFFFFFFF;
    }
    D_001C7DF0 = 0;
}
