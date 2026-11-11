/* LEVEL_18:0x1110E8 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001B604C;
extern unsigned int D_0024E628;
extern int D_002DF950;
extern int func_0E5858(unsigned int);

void func_1110E8(void)
{
    D_001B604C = (D_001B604C & 0xF800FFFF) | (D_0024E628 << 16);
    D_002DF950 = func_0E5858(D_001B604C);
}
