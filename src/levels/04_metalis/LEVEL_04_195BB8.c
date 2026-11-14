/* LEVEL_04:0x195BB8 -- looks up the handles of two fixed keys and keeps them in globals. */
extern int D_00221CC4;
extern int D_00221CC8;
extern int func_1364E8(unsigned int value);

void func_195BB8(void)
{
    D_00221CC4 = func_1364E8(0x92E56E10u);
    D_00221CC8 = func_1364E8(0xE4554374u);
}
