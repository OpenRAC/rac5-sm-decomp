/* LEVEL_09:0x0C5840 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001EAA0C;
extern void func_12E678(int *p, int a1);

void func_0C5840(int *object)
{
    if (D_001EAA0C == 1)
        func_12E678(object, 0xC);
    else
        func_12E678(object, 0x1D);
}
