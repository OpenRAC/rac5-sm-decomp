/* LEVEL_01:0x0BC280 -- returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_00328A4C;
extern int func_01A868(int value);

int func_0BC280(void)
{
    return func_01A868(6) ? D_00328A4C : 0;
}
