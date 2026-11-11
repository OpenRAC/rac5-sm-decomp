/* LEVEL_06:0x1A0278 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_001F7CC0;
extern unsigned int D_001F7CC4;
extern int D_001F7CBC;
extern int D_00284BC0;
extern int func_1206C0(unsigned int value);

void func_1A0278(void)
{
    D_001F7CC0 = (D_001F7CC0 & 0xF800FFFF) | (D_00284BC0 << 16);
    D_001F7CC4 = (D_001F7CC4 & 0xF800FFFF) | (D_00284BC0 << 16);
    D_001F7CBC = func_1206C0(0x9D12A611u);
}
