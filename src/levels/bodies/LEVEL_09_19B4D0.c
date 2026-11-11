/* LEVEL_09:0x19B4D0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001F29E4;
extern unsigned int D_0027F574;
extern int D_001F29B0;
extern int func_06B020(unsigned int);

void func_19B4D0(void)
{
    D_001F29E4 = (D_001F29E4 & 0xF800FFFF) | (D_0027F574 << 16);
    D_001F29B0 = func_06B020(D_001F29E4);
}
