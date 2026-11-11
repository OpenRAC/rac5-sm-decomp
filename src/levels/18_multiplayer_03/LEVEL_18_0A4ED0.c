/* LEVEL_18:0x0A4ED0 -- placement copy of LEVEL_16_0A5F58.c: runs the four per-player update passes for both
   players. */
extern void func_0A4888(unsigned int player);
extern void func_0A4930(unsigned int player);
extern void func_0A4998(unsigned int player);
extern void func_0A7168(unsigned int player);

void func_0A4ED0(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A4888(i);
        func_0A4930(i);
        func_0A4998(i);
        func_0A7168(i);
    }
}
