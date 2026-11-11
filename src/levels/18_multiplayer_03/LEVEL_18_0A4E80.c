/* LEVEL_18:0x0A4E80 -- placement copy of LEVEL_16_0A5F08.c: applies the two 90-unit settings to both channels. */
extern void func_0A5288(unsigned int channel, int value);
extern void func_0A5140(unsigned int channel, int value);

void func_0A4E80(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A5288(i, 0x5A);
        func_0A5140(i, 0x5A);
    }
}
