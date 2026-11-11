/* LEVEL_10:0x1B80A0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_00211B3C;
extern unsigned int D_002A11F4;
extern int D_00211B08;
extern int func_06D638(unsigned int);

void func_1B80A0(void)
{
    D_00211B3C = (D_00211B3C & 0xF800FFFF) | (D_002A11F4 << 16);
    D_00211B08 = func_06D638(D_00211B3C);
}
