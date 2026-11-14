/* LEVEL_16:0x16E360 -- looks up the handle of a fixed key and keeps it in a global. */
extern int D_001BE1F4;
extern int func_106E98(unsigned int value);

void func_16E360(void)
{
    D_001BE1F4 = func_106E98(0x90161bffu);
}
