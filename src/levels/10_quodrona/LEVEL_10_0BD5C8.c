/* LEVEL_10:0x0BD5C8 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_00331E4C;
extern int func_019EE8(int value);

int func_0BD5C8(void)
{
    return func_019EE8(6) ? D_00331E4C : 0;
}
