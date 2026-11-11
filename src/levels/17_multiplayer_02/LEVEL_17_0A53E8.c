/* LEVEL_17:0x0A53E8 -- placement copy of LEVEL_16_0A5F08.c: applies the two 90-unit settings to both channels. */
extern void func_0A57F0(unsigned int channel, int value);
extern void func_0A56A8(unsigned int channel, int value);

void func_0A53E8(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A57F0(i, 0x5A);
        func_0A56A8(i, 0x5A);
    }
}
