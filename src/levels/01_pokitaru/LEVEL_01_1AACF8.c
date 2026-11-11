/* LEVEL_01:0x1AACF8 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_00208CEC;
extern unsigned int D_00297DF4;
extern int D_00208CB8;
extern int func_06E420(unsigned int);

void func_1AACF8(void)
{
    D_00208CEC = (D_00208CEC & 0xF800FFFF) | (D_00297DF4 << 16);
    D_00208CB8 = func_06E420(D_00208CEC);
}
