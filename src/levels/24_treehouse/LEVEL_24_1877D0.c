/* LEVEL_24:0x1877D0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001D9B9C;
extern unsigned int D_00263CB4;
extern int D_001D9B68;
extern int func_067A60(unsigned int);

void func_1877D0(void)
{
    D_001D9B9C = (D_001D9B9C & 0xF800FFFF) | (D_00263CB4 << 16);
    D_001D9B68 = func_067A60(D_001D9B9C);
}
