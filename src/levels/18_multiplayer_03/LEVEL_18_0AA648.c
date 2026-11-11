/* LEVEL_18:0x0AA648 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_00276D0C;
extern int func_018220(int value);

int func_0AA648(void)
{
    return func_018220(6) ? D_00276D0C : 0;
}
