/* LEVEL_19:0x0AAF48 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_00276B0C;
extern int func_0188D8(int value);

int func_0AAF48(void)
{
    return func_0188D8(6) ? D_00276B0C : 0;
}
