/* LEVEL_18:0x0B61D8 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001B0104;
extern void func_110A60(int *p, int a1);

void func_0B61D8(int *object)
{
    if (D_001B0104 == 1)
        func_110A60(object, 0xC);
    else
        func_110A60(object, 0x1D);
}
