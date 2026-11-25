/* LEVEL_24:0x0C1838 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned char D_001D1890;
extern void func_12B178(void *p);
extern int func_127FB0(int id);
extern void func_12B1C8(void *p, int a);

void func_0C1838(void *p)
{
    func_12B178(p);
    D_001D1880 = func_127FB0(0xA89);
    D_001D1884 = func_127FB0(0xA8B);
    D_001D1888 = func_127FB0(0xA8C);
    D_001D1890 = 1;
    func_12B1C8(p, 0x18);
}
