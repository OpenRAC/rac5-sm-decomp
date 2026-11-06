/* LEVEL_06.REL:0x1BC890, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_00385314;
extern unsigned int D_001F7EDC;
extern unsigned int D_00284E64;
extern unsigned int D_0038530C;
extern unsigned int D_00385318;

void func_1BC890(void)
{
    D_00385314 = 0;
    D_001F7EDC = (D_001F7EDC & 0xf800ffffu) | (D_00284E64 << 16);
    D_0038530C = 0;
    D_00385318 = 0;
}
