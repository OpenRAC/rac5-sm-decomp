/* LEVEL_16:0x11F1A0 -- when a flag bit of a lookup is set, triggers three follow-up helpers. */
extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int index);
extern int func_0ABF08(int a0);

void func_11F1A0(void)
{
    if (func_0795B8(0x6B10) & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_0ABF08(0x2F);
    }
}
