/* LEVEL_24.REL:0x1A0DB0, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_00362654;
extern unsigned int D_001D9E8C;
extern unsigned int D_00263FA4;
extern unsigned int D_0036264C;
extern unsigned int D_00362658;

void func_1A0DB0(void)
{
    D_00362654 = 0;
    D_001D9E8C = (D_001D9E8C & 0xf800ffffu) | (D_00263FA4 << 16);
    D_0036264C = 0;
    D_00362658 = 0;
}
