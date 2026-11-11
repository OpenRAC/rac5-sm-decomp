/* LEVEL_04:0x0C1A90 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0034324C;
extern int func_01A4E8(int value);

int func_0C1A90(void)
{
    return func_01A4E8(6) ? D_0034324C : 0;
}
