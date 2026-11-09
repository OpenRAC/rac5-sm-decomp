/* LEVEL_20:0x090488 -- placement copy of LEVEL_16_0A5F08.c: applies the two 90-unit settings to both channels. */
extern void func_090870(unsigned int channel, int value);
extern void func_090748(unsigned int channel, int value);

void func_090488(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_090870(i, 0x5A);
        func_090748(i, 0x5A);
    }
}
