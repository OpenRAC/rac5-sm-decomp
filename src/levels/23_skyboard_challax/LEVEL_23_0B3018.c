/* LEVEL_23:0x0B3018 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_002F9E8C;
extern int func_019378(int value);

int func_0B3018(void)
{
    return func_019378(6) ? D_002F9E8C : 0;
}
