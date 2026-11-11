/* LEVEL_06:0x0C2E90 -- placement copy of LEVEL_01_0C8590.c: passes the object to the helper with one of two codes chosen by the global mode. */
extern int D_001EFB0C;
extern void func_12BDB0(int *p, int a1);

void func_0C2E90(int *object)
{
    if (D_001EFB0C == 1)
        func_12BDB0(object, 0xC);
    else
        func_12BDB0(object, 0x1D);
}
