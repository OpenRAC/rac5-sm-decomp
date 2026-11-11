/* LEVEL_19:0x112AD8 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001B5D4C;
extern unsigned int D_0024E428;
extern int D_002DF750;
extern int func_0E6828(unsigned int);

void func_112AD8(void)
{
    D_001B5D4C = (D_001B5D4C & 0xF800FFFF) | (D_0024E428 << 16);
    D_002DF750 = func_0E6828(D_001B5D4C);
}
