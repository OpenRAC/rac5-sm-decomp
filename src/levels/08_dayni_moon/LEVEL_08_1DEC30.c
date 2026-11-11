/* LEVEL_08:0x1DEC30 -- placement copy of LEVEL_01_1ABDE0.c: merges one global value into the 11-bit field at bit 16 of two control words, then stores a hash lookup. */
extern unsigned int D_00252470;
extern unsigned int D_00252474;
extern int D_0025246C;
extern int D_002E70C0;
extern int func_13B5A0(unsigned int value);

void func_1DEC30(void)
{
    D_00252470 = (D_00252470 & 0xF800FFFF) | (D_002E70C0 << 16);
    D_00252474 = (D_00252474 & 0xF800FFFF) | (D_002E70C0 << 16);
    D_0025246C = func_13B5A0(0x9D12A611u);
}
