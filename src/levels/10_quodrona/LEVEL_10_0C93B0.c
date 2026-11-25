/* LEVEL_10:0x0C93B0 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned char D_00209C10;
extern void func_1334F8(void *p);
extern int func_130310(int id);
extern void func_133548(void *p, int a);

void func_0C93B0(void *p)
{
    func_1334F8(p);
    D_00209C00 = func_130310(0xA89);
    D_00209C04 = func_130310(0xA8B);
    D_00209C08 = func_130310(0xA8C);
    D_00209C10 = 1;
    func_133548(p, 0x18);
}
