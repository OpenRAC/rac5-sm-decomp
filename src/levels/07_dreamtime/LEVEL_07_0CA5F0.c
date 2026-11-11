/* LEVEL_07:0x0CA5F0 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_00214F0C;
extern void func_1386E0(int *p, int a1);

void func_0CA5F0(int *object)
{
    if (D_00214F0C == 1)
        func_1386E0(object, 0xC);
    else
        func_1386E0(object, 0x1D);
}
