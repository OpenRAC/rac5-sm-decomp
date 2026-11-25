/* LEVEL_20:0x0A1110 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned char D_00111368;
extern void func_0E4B30(void *p);
extern int func_0E2118(int id);
extern void func_0E4B80(void *p, int a);

void func_0A1110(void *p)
{
    func_0E4B30(p);
    D_00111358 = func_0E2118(0xA89);
    D_0011135C = func_0E2118(0xA8B);
    D_00111360 = func_0E2118(0xA8C);
    D_00111368 = 1;
    func_0E4B80(p, 0x18);
}
