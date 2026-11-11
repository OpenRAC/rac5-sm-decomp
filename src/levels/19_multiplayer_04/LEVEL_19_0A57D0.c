/* LEVEL_19:0x0A57D0 -- placement copy of LEVEL_16_0A5F58.c: runs the four per-player update passes for both
   players. */
extern void func_0A5188(unsigned int player);
extern void func_0A5230(unsigned int player);
extern void func_0A5298(unsigned int player);
extern void func_0A7A68(unsigned int player);

void func_0A57D0(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A5188(i);
        func_0A5230(i);
        func_0A5298(i);
        func_0A7A68(i);
    }
}
