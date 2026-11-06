/* LEVEL_01.REL:0x1D08B0, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_00398904;
extern unsigned int D_00209024;
extern unsigned int D_002980E4;
extern unsigned int D_003988FC;
extern unsigned int D_00398908;

void func_1D08B0(void)
{
    D_00398904 = 0;
    D_00209024 = (D_00209024 & 0xf800ffffu) | (D_002980E4 << 16);
    D_003988FC = 0;
    D_00398908 = 0;
}
