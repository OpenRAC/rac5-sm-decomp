/* LEVEL_09.REL:0x1B77B0, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003800EC;
extern unsigned int D_001F2CA4;
extern unsigned int D_0027F864;
extern unsigned int D_003800E4;
extern unsigned int D_003800F0;

void func_1B77B0(void)
{
    D_003800EC = 0;
    D_001F2CA4 = (D_001F2CA4 & 0xf800ffffu) | (D_0027F864 << 16);
    D_003800E4 = 0;
    D_003800F0 = 0;
}
