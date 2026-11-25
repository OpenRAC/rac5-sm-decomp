/* LEVEL_19:0x0B64B8 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned char D_001AFE08;
extern void func_1123E8(void *p);
extern int func_10F9D0(int id);
extern void func_112438(void *p, int a);

void func_0B64B8(void *p)
{
    func_1123E8(p);
    D_001AFDF8 = func_10F9D0(0xA89);
    D_001AFDFC = func_10F9D0(0xA8B);
    D_001AFE00 = func_10F9D0(0xA8C);
    D_001AFE08 = 1;
    func_112438(p, 0x18);
}
