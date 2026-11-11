/* LEVEL_20:0x0E5220 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_0011728C;
extern unsigned int D_00171AE8;
extern int D_00202B30;
extern int func_0C6048(unsigned int);

void func_0E5220(void)
{
    D_0011728C = (D_0011728C & 0xF800FFFF) | (D_00171AE8 << 16);
    D_00202B30 = func_0C6048(D_0011728C);
}
