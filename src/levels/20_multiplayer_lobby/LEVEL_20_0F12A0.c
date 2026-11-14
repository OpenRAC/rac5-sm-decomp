/* LEVEL_20:0x0F12A0 -- placement copy of LEVEL_16_11F1A0.c: when a flag bit of a lookup is set, triggers three follow-up helpers. */
extern unsigned int func_067228(int value);
extern int func_08F6B0(int index);
extern int func_096438(int a0);

void func_0F12A0(void)
{
    if (func_067228(0x6B10) & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_096438(0x2F);
    }
}
