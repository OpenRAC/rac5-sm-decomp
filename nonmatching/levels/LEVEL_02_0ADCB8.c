/* LEVEL_02.REL:0x0ADCB8, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_0020C128;
extern void *D_0020C12C;
extern int D_0020C130;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0ADCB8(int value)
{
    if (value == 0) {
        D_0020C128 = D_FFFFFFFF;
        D_0020C12C = D_FFFFFFFF;
    }
    D_0020C130 = 0;
}
