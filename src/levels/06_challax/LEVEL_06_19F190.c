/* LEVEL_06:0x19F190 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001F7CAC;
extern unsigned int D_00284B74;
extern int D_001F7C78;
extern int func_06B1E0(unsigned int);

void func_19F190(void)
{
    D_001F7CAC = (D_001F7CAC & 0xF800FFFF) | (D_00284B74 << 16);
    D_001F7C78 = func_06B1E0(D_001F7CAC);
}
