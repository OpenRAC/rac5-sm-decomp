/* LEVEL_15:0x09C8C8 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_0024028C;
extern int func_016A50(int value);

int func_09C8C8(void)
{
    return func_016A50(6) ? D_0024028C : 0;
}
