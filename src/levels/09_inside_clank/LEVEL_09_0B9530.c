/* LEVEL_09:0x0B9530 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_003101CC;
extern int func_019C58(int value);

int func_0B9530(void)
{
    return func_019C58(6) ? D_003101CC : 0;
}
