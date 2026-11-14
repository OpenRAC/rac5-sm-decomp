/* LEVEL_16:0x178BD8 -- placement copy of LEVEL_01_1B0940.c: merges a field into the top bits of a global word; always returns 1. */
extern unsigned int D_001BE358;
extern unsigned int D_0024E324;

int func_178BD8(void)
{
    D_001BE358 = (D_001BE358 & 0xF800FFFF) | (D_0024E324 << 16);
    return 1;
}
