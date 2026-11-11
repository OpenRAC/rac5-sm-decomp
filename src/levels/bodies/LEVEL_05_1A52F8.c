/* LEVEL_05:0x1A52F8 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001F7D8C;
extern unsigned int D_00283CB4;
extern int D_001F7D58;
extern int func_06C088(unsigned int);

void func_1A52F8(void)
{
    D_001F7D8C = (D_001F7D8C & 0xF800FFFF) | (D_00283CB4 << 16);
    D_001F7D58 = func_06C088(D_001F7D8C);
}
