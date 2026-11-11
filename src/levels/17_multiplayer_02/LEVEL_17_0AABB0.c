/* LEVEL_17:0x0AABB0 -- placement copy of LEVEL_01_0BC280.c: returns the global state byte while mode 6 is active, otherwise 0. */
extern unsigned char D_00267C8C;
extern int func_018558(int value);

int func_0AABB0(void)
{
    return func_018558(6) ? D_00267C8C : 0;
}
