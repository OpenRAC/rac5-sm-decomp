/* LEVEL_01:0x0C7F70 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned char D_00200C10;
extern void func_135678(void *p);
extern int func_1324B0(int id);
extern void func_1356C8(void *p, int a);

void func_0C7F70(void *p)
{
    func_135678(p);
    D_00200C00 = func_1324B0(0xA89);
    D_00200C04 = func_1324B0(0xA8B);
    D_00200C08 = func_1324B0(0xA8C);
    D_00200C10 = 1;
    func_1356C8(p, 0x18);
}
