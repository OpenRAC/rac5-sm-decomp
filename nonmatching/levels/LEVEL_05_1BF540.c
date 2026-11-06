/* LEVEL_05.REL:0x1BF540, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_0038FC84;
extern unsigned int D_001F7F94;
extern unsigned int D_00283FA4;
extern unsigned int D_0038FC7C;
extern unsigned int D_0038FC88;

void func_1BF540(void)
{
    D_0038FC84 = 0;
    D_001F7F94 = (D_001F7F94 & 0xf800ffffu) | (D_00283FA4 << 16);
    D_0038FC7C = 0;
    D_0038FC88 = 0;
}
