/* LEVEL_18:0x11E258 -- placement copy of LEVEL_16_11F1A0.c: when a flag bit of a lookup is set, triggers three follow-up helpers. */
extern unsigned int func_078F38(int value);
extern int func_0A40A8(int index);
extern int func_0AAEE0(int a0);

void func_11E258(void)
{
    if (func_078F38(0x6B10) & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0AAEE0(0x2F);
    }
}
