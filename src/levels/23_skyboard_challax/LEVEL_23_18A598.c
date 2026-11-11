/* LEVEL_23:0x18A598 -- placement copy of LEVEL_16_112438.c: writes the stored value into bits 16-26 of the flag
   word, passes the word on and keeps the result. */
extern unsigned int D_001DC104;
extern unsigned int D_00269234;
extern int D_001DC0D0;
extern int func_067BC8(unsigned int);

void func_18A598(void)
{
    D_001DC104 = (D_001DC104 & 0xF800FFFF) | (D_00269234 << 16);
    D_001DC0D0 = func_067BC8(D_001DC104);
}
