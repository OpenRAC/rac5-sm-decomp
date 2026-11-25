/* LEVEL_08:0x0D2E98 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned char D_00249AD0;
extern void func_146BB0(void *p);
extern int func_1439E8(int id);
extern void func_146C00(void *p, int a);

void func_0D2E98(void *p)
{
    func_146BB0(p);
    D_00249AC0 = func_1439E8(0xA89);
    D_00249AC4 = func_1439E8(0xA8B);
    D_00249AC8 = func_1439E8(0xA8C);
    D_00249AD0 = 1;
    func_146C00(p, 0x18);
}
