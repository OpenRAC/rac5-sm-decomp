/* LEVEL_07:0x19FB38 -- looks up two registered values, one keyed by a global shifted into the high half, and stores them in globals. */
extern unsigned int D_002AD754;
extern int D_0021D0AC;
extern int D_0021D0A4;
extern void func_1E2C08(unsigned int value);
extern int func_12D068(unsigned int value);

void func_19FB38(void)
{
    int *slot = &D_0021D0AC;

    *slot = ((int (*)(unsigned int))func_1E2C08)((D_002AD754 << 16) | 0x58007441u);
    D_0021D0A4 = func_12D068(0x9337BA59u);
}
