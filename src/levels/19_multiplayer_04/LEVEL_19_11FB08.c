/* LEVEL_19:0x11FB08 -- placement copy of LEVEL_16_11F1A0.c: when a flag bit of a lookup is set, triggers three follow-up helpers. */
extern unsigned int func_079AA0(int value);
extern int func_0A4928(int index);
extern int func_0AB7E0(int a0);

void func_11FB08(void)
{
    if (func_079AA0(0x6B10) & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        func_0AB7E0(0x2F);
    }
}
