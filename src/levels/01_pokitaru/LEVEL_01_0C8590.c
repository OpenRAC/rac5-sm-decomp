/* LEVEL_01:0x0C8590 -- passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_00200C0C;
extern void func_1356E0(int *p, int a1);

void func_0C8590(int *object)
{
    if (D_00200C0C == 1)
        func_1356E0(object, 0xC);
    else
        func_1356E0(object, 0x1D);
}
