/* LEVEL_16:0x112438 -- writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001B4BCC;
extern unsigned int D_0024E2A8;
extern int D_002DF5D0;
extern int func_0E7A98(unsigned int);

void func_112438(void)
{
    D_001B4BCC = (D_001B4BCC & 0xF800FFFF) | (D_0024E2A8 << 16);
    D_002DF5D0 = func_0E7A98(D_001B4BCC);
}
