/* LEVEL_02:0x0CE880 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned char D_00215BD0;
extern void func_13BA28(void *p);
extern int func_138860(int id);
extern void func_13BA78(void *p, int a);

void func_0CE880(void *p)
{
    func_13BA28(p);
    D_00215BC0 = func_138860(0xA89);
    D_00215BC4 = func_138860(0xA8B);
    D_00215BC8 = func_138860(0xA8C);
    D_00215BD0 = 1;
    func_13BA78(p, 0x18);
}
