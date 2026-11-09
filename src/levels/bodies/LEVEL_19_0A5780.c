/* LEVEL_19:0x0A5780 -- placement copy of LEVEL_16_0A5F08.c: applies the two 90-unit settings to both channels. */
extern void func_0A5B88(unsigned int channel, int value);
extern void func_0A5A40(unsigned int channel, int value);

void func_0A5780(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A5B88(i, 0x5A);
        func_0A5A40(i, 0x5A);
    }
}
