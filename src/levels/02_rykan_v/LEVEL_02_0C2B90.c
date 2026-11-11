/* LEVEL_02:0x0C2B90 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0033FF4C;
extern int func_01B1C8(int value);

int func_0C2B90(void)
{
    return func_01B1C8(6) ? D_0033FF4C : 0;
}
