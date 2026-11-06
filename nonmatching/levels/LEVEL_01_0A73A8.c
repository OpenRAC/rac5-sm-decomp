/* LEVEL_01.REL:0x0A73A8, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001F7168;
extern void *D_001F716C;
extern int D_001F7170;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_0A73A8(int value)
{
    if (value == 0) {
        D_001F7168 = D_FFFFFFFF;
        D_001F716C = D_FFFFFFFF;
    }
    D_001F7170 = 0;
}
