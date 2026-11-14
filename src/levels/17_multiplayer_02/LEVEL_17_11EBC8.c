/* LEVEL_17:0x11EBC8 -- placement copy of LEVEL_16_11F1A0.c: when a flag bit of a lookup is set, triggers three follow-up helpers. */
extern unsigned int func_07A030(int value);
extern int func_0A4590(int index);
extern int func_0AB448(int a0);

void func_11EBC8(void)
{
    if (func_07A030(0x6B10) & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        func_0AB448(0x2F);
    }
}
