/* LEVEL_18:0x0B5BB8 -- placement copy of FRONTEND_017FB0.c: placement copy of LEVEL_01_0C7F70.c: begins the load, fetches three resources by id into globals, flags the table as ready and finishes with the object. */
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned char D_001B0108;
extern void func_1109F8(void *p);
extern int func_10DFE0(int id);
extern void func_110A48(void *p, int a);

void func_0B5BB8(void *p)
{
    func_1109F8(p);
    D_001B00F8 = func_10DFE0(0xA89);
    D_001B00FC = func_10DFE0(0xA8B);
    D_001B0100 = func_10DFE0(0xA8C);
    D_001B0108 = 1;
    func_110A48(p, 0x18);
}
