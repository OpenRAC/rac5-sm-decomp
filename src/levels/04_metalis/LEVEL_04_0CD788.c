/* LEVEL_04:0x0CD788 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned char D_0021A0D0;
extern void func_141AF8(void *p);
extern int func_13E930(int id);
extern void func_141B48(void *p, int a);

void func_0CD788(void *p)
{
    func_141AF8(p);
    D_0021A0C0 = func_13E930(0xA89);
    D_0021A0C4 = func_13E930(0xA8B);
    D_0021A0C8 = func_13E930(0xA8C);
    D_0021A0D0 = 1;
    func_141B48(p, 0x18);
}
