/* LEVEL_16:0x0A5F08 -- applies the two 90-unit settings to both channels. */
extern void func_0A62F0(unsigned int channel, int value);
extern void func_0A61C8(unsigned int channel, int value);

void func_0A5F08(void)
{
    unsigned int i;

    for (i = 0; i < 2; i++) {
        func_0A62F0(i, 0x5A);
        func_0A61C8(i, 0x5A);
    }
}
