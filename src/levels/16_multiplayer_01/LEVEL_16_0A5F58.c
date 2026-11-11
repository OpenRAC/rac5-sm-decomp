/* LEVEL_16:0x0A5F58 -- runs the four per-player update passes for both
   players. */
extern void func_0A5910(unsigned int player);
extern void func_0A59B8(unsigned int player);
extern void func_0A5A20(unsigned int player);
extern void func_0A8190(unsigned int player);

void func_0A5F58(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A5910(i);
        func_0A59B8(i);
        func_0A5A20(i);
        func_0A8190(i);
    }
}
