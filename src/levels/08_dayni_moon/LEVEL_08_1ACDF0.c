/* LEVEL_08:0x1ACDF0 -- stores the results of two hashed lookups in globals. */
extern int D_00251A7C;
extern int D_00251A80;
extern int func_13B5A0(unsigned int value);

void func_1ACDF0(void)
{
    D_00251A7C = func_13B5A0(0x3C0A2088u);
    D_00251A80 = func_13B5A0(0xD73D9B8Bu);
}
