/* LEVEL_07:0x1BDCC0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_0021D98C;
extern unsigned int D_002AD6F4;
extern int D_0021D958;
extern int func_06F2A0(unsigned int);

void func_1BDCC0(void)
{
    D_0021D98C = (D_0021D98C & 0xF800FFFF) | (D_002AD6F4 << 16);
    D_0021D958 = func_06F2A0(D_0021D98C);
}
