/* LEVEL_04:0x1B6CD0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_002223E4;
extern unsigned int D_002B25F4;
extern int D_002223B0;
extern int func_070000(unsigned int);

void func_1B6CD0(void)
{
    D_002223E4 = (D_002223E4 & 0xF800FFFF) | (D_002B25F4 << 16);
    D_002223B0 = func_070000(D_002223E4);
}
