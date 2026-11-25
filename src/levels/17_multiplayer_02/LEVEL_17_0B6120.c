/* LEVEL_17:0x0B6120 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned char D_001A2288;
extern void func_1112C0(void *p);
extern int func_10E8A8(int id);
extern void func_111310(void *p, int a);

void func_0B6120(void *p)
{
    func_1112C0(p);
    D_001A2278 = func_10E8A8(0xA89);
    D_001A227C = func_10E8A8(0xA8B);
    D_001A2280 = func_10E8A8(0xA8C);
    D_001A2288 = 1;
    func_111310(p, 0x18);
}
