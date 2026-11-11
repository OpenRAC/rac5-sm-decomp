/* LEVEL_24:0x0B5B40 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_002F490C;
extern int func_018E58(int value);

int func_0B5B40(void)
{
    return func_018E58(6) ? D_002F490C : 0;
}
