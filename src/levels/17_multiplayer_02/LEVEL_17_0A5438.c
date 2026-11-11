/* LEVEL_17:0x0A5438 -- placement copy of LEVEL_16_0A5F58.c: runs the four per-player update passes for both
   players. */
extern void func_0A4DF0(unsigned int player);
extern void func_0A4E98(unsigned int player);
extern void func_0A4F00(unsigned int player);
extern void func_0A76D0(unsigned int player);

void func_0A5438(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A4DF0(i);
        func_0A4E98(i);
        func_0A4F00(i);
        func_0A76D0(i);
    }
}
