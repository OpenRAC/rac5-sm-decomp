/* LEVEL_02:0x1C8CE0 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_0021DD44;
extern unsigned int D_002AF2F4;
extern int D_0021DD10;
extern int func_0738A0(unsigned int);

void func_1C8CE0(void)
{
    D_0021DD44 = (D_0021DD44 & 0xF800FFFF) | (D_002AF2F4 << 16);
    D_0021DD10 = func_0738A0(D_0021DD44);
}
