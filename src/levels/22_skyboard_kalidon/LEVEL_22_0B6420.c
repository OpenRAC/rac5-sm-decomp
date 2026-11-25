/* LEVEL_22:0x0B6420 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned char D_0015FF90;
extern void func_10CB48(void *p);
extern int func_109980(int id);
extern void func_10CB98(void *p, int a);

void func_0B6420(void *p)
{
    func_10CB48(p);
    D_0015FF80 = func_109980(0xA89);
    D_0015FF84 = func_109980(0xA8B);
    D_0015FF88 = func_109980(0xA8C);
    D_0015FF90 = 1;
    func_10CB98(p, 0x18);
}
