/* LEVEL_16:0x167E50 -- looks up three fixed ids and stores the handles in three consecutive globals. */
extern int D_001BE010;
extern int D_001BE014;
extern int D_001BE018;
extern int func_106E98(unsigned int id);

void func_167E50(void)
{
    D_001BE010 = func_106E98(0x7FB8AC9Fu);
    D_001BE014 = func_106E98(0xA3ADFF1Au);
    D_001BE018 = func_106E98(0x4DEFC7A5u);
}
