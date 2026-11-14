/* LEVEL_24:0x18CC48 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001D9C30;
extern unsigned int D_00263D64;

int func_18CC48(void)
{
    D_001D9C30 = (D_001D9C30 & 0xF800FFFF) | (D_00263D64 << 16);
    return 1;
}
