/* LEVEL_03:0x1BC5A8 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_00221C8C;
extern unsigned int D_002B2C74;
extern int D_00221C58;
extern int func_06CDA8(unsigned int);

void func_1BC5A8(void)
{
    D_00221C8C = (D_00221C8C & 0xF800FFFF) | (D_002B2C74 << 16);
    D_00221C58 = func_06CDA8(D_00221C8C);
}
