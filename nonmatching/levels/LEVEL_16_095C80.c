/* LEVEL_16.REL:0x095C80, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_001A5138;
extern void *D_001A513C;
extern int D_001A5140;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_095C80(int value)
{
    if (value == 0) {
        D_001A5138 = D_FFFFFFFF;
        D_001A513C = D_FFFFFFFF;
    }
    D_001A5140 = 0;
}
