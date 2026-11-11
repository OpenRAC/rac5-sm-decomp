/* LEVEL_02:0x0CEEA0 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_00215BCC;
extern void func_13BA90(int *p, int a1);

void func_0CEEA0(int *object)
{
    if (D_00215BCC == 1)
        func_13BA90(object, 0xC);
    else
        func_13BA90(object, 0x1D);
}
