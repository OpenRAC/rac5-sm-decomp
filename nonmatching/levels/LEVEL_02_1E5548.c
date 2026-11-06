/* LEVEL_02.REL:0x1E5548, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003B085C;
extern unsigned int D_0021DF74;
extern unsigned int D_002AF5E4;
extern unsigned int D_003B0854;
extern unsigned int D_003B0860;

void func_1E5548(void)
{
    D_003B085C = 0;
    D_0021DF74 = (D_0021DF74 & 0xf800ffffu) | (D_002AF5E4 << 16);
    D_003B0854 = 0;
    D_003B0860 = 0;
}
