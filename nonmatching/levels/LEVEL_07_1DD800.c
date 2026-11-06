/* LEVEL_07.REL:0x1DD800, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003AE2F4;
extern unsigned int D_0021DCFC;
extern unsigned int D_002AD9E4;
extern unsigned int D_003AE2EC;
extern unsigned int D_003AE2F8;

void func_1DD800(void)
{
    D_003AE2F4 = 0;
    D_0021DCFC = (D_0021DCFC & 0xf800ffffu) | (D_002AD9E4 << 16);
    D_003AE2EC = 0;
    D_003AE2F8 = 0;
}
