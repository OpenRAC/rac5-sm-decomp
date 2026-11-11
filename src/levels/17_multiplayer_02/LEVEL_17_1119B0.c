/* LEVEL_17:0x1119B0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001A81CC;
extern unsigned int D_0023F5A8;
extern int D_002D08D0;
extern int func_0E69C0(unsigned int);

void func_1119B0(void)
{
    D_001A81CC = (D_001A81CC & 0xF800FFFF) | (D_0023F5A8 << 16);
    D_002D08D0 = func_0E69C0(D_001A81CC);
}
