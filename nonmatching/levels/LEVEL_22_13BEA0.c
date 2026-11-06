/* LEVEL_22.REL:0x13BEA0, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_002E831C;
extern unsigned int D_00166944;
extern unsigned int D_001EDCA4;
extern unsigned int D_002E8314;
extern unsigned int D_002E8320;

void func_13BEA0(void)
{
    D_002E831C = 0;
    D_00166944 = (D_00166944 & 0xf800ffffu) | (D_001EDCA4 << 16);
    D_002E8314 = 0;
    D_002E8320 = 0;
}
