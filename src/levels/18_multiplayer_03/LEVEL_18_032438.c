/* LEVEL_18:0x032438 -- placement copy of LEVEL_16_033B68.c: initializes two tables and stores four created handles. */
extern void func_0323A8(void *);
extern void func_057800(void);
extern void func_04B138(void);
extern int func_0EB7A8(int);
extern int func_0ECC18(int);
extern int func_06DAD8(int, int, int, int, int, int);
extern void func_031F88(void);

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

extern char D_001E4410[];
extern char D_001E7E00[];
extern struct S24E240 D_0024E5C0;
extern int D_001A35A4;
extern int D_001A35A8;
extern int D_001A35AC;
extern int D_001A35B0;

void func_032438(void)
{
    func_0323A8(D_001E4410);
    func_0323A8(D_001E7E00);
    func_057800();
    func_04B138();
    D_001A35A8 = func_0EB7A8((D_0024E5C0.f6C << 16) | 0xA00010C1);
    D_001A35AC = func_0EB7A8((D_0024E5C0.f2C << 16) | 0xA00010C1);
    D_001A35A4 = func_0ECC18((D_0024E5C0.fC0 << 16) | 0xA0001041);
    D_001A35B0 = func_06DAD8(D_0024E5C0.f94, 10, 0, 1, 0, 2);
    func_031F88();
}
