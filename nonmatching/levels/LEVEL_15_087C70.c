/* LEVEL_15.REL:0x087C70, bounded 64-byte retail body.
 * Pinned C links 44 bytes; first difference at body byte +0.
 * The global initialization emits a shorter store sequence with different address registers. Reopen with global types and source-order evidence.
 */
extern void *D_0014BDE8;
extern void *D_0014BDEC;
extern int D_0014BDF0;
extern char D_FFFFFFFF[];
extern char D_FFFFFFFF[];

void func_087C70(int value)
{
    if (value == 0) {
        D_0014BDE8 = D_FFFFFFFF;
        D_0014BDEC = D_FFFFFFFF;
    }
    D_0014BDF0 = 0;
}
