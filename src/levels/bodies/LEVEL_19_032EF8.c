/* LEVEL_19:0x032EF8 -- placement copy of LEVEL_16_033B68.c: initializes two tables and stores four created handles. */
extern void func_032E68(void *);
extern void func_058158(void);
extern void func_04BA90(void);
extern int func_0ED5B8(int);
extern int func_0EEA28(int);
extern int func_06E478(int, int, int, int, int, int);
extern void func_032A48(void);

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

extern char D_001E4210[];
extern char D_001E7C00[];
extern struct S24E240 D_0024E3C0;
extern int D_001A32A4;
extern int D_001A32A8;
extern int D_001A32AC;
extern int D_001A32B0;

void func_032EF8(void)
{
    func_032E68(D_001E4210);
    func_032E68(D_001E7C00);
    func_058158();
    func_04BA90();
    D_001A32A8 = func_0ED5B8((D_0024E3C0.f6C << 16) | 0xA00010C1);
    D_001A32AC = func_0ED5B8((D_0024E3C0.f2C << 16) | 0xA00010C1);
    D_001A32A4 = func_0EEA28((D_0024E3C0.fC0 << 16) | 0xA0001041);
    D_001A32B0 = func_06E478(D_0024E3C0.f94, 10, 0, 1, 0, 2);
    func_032A48();
}
