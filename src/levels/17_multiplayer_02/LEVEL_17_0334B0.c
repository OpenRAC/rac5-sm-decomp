/* LEVEL_17:0x0334B0 -- placement copy of LEVEL_16_033B68.c: initializes two tables and stores four created handles. */
extern void func_033420(void *);
extern void func_058728(void);
extern void func_04C060(void);
extern int func_0EC910(int);
extern int func_0EEAE8(int);
extern int func_06EA48(int, int, int, int, int, int);
extern void func_033000(void);

struct S24E240 {
    char pad0[0x2C];
    int f2C;
    char pad30[0x3C];
    int f6C;
    char pad70[0x24];
    int f94;
    char pad98[0x28];
    int fC0;
};

extern char D_001D5390[];
extern char D_001D8D80[];
extern struct S24E240 D_0023F540;
extern int D_00195724;
extern int D_00195728;
extern int D_0019572C;
extern int D_00195730;

void func_0334B0(void)
{
    func_033420(D_001D5390);
    func_033420(D_001D8D80);
    func_058728();
    func_04C060();
    D_00195728 = func_0EC910((D_0023F540.f6C << 16) | 0xA00010C1);
    D_0019572C = func_0EC910((D_0023F540.f2C << 16) | 0xA00010C1);
    D_00195724 = func_0EEAE8((D_0023F540.fC0 << 16) | 0xA0001041);
    D_00195730 = func_06EA48(D_0023F540.f94, 10, 0, 1, 0, 2);
    func_033000();
}
