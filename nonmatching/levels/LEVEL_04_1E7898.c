/* LEVEL_04.REL:0x1E7898, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003B3F1C;
extern unsigned int D_0022290C;
extern unsigned int D_002B28E4;
extern unsigned int D_003B3F14;
extern unsigned int D_003B3F20;

void func_1E7898(void)
{
    D_003B3F1C = 0;
    D_0022290C = (D_0022290C & 0xf800ffffu) | (D_002B28E4 << 16);
    D_003B3F14 = 0;
    D_003B3F20 = 0;
}
