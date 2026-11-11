/* LEVEL_08:0x1DDB48 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_0025245C;
extern unsigned int D_002E7074;
extern int D_00252428;
extern int func_073C68(unsigned int);

void func_1DDB48(void)
{
    D_0025245C = (D_0025245C & 0xF800FFFF) | (D_002E7074 << 16);
    D_00252428 = func_073C68(D_0025245C);
}
