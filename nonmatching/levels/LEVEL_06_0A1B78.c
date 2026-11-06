/* LEVEL_06.REL:0x0A1B78, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001E6068;
extern void *D_001E606C;
extern int D_001E6070;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0A1B78(int value)
{
    if (value == 0) {
        D_001E6068 = D_FFFFFFFF;
        D_001E606C = D_FFFFFFFF;
    }
    D_001E6070 = 0;
}
