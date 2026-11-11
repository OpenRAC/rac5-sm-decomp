/* LEVEL_05:0x16EFB0 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
struct Src {
    unsigned int f0;
    char pad4[0x58];
    unsigned int f5C;
    char pad60[0x16C];
    unsigned int f1CC;
    char pad1D0[0xA4];
    unsigned int f274;
};
struct Dst {
    char pad0[0x3C];
    int r3C;
    int r40;
    int r44;
    int r48;
    int r4C;
};
extern struct Src D_00283C80;
extern struct Dst D_003827B0;
extern int func_16F120(void);
extern int func_1CF238(unsigned int id, int (*cb)(void));
extern int func_0FA990(unsigned int id);
extern int func_1D61A8(unsigned int id);
extern int func_1D6F40(unsigned int id);

void func_16EFB0(void)
{
    D_003827B0.r3C = func_1CF238((D_00283C80.f274 << 16) | 0xA0001059, func_16F120);
    D_003827B0.r40 = func_0FA990((D_00283C80.f1CC << 16) | 0xC0001044);
    D_003827B0.r44 = func_1D61A8((D_00283C80.f5C << 16) | 0xC0001045);
    D_003827B0.r48 = func_1D61A8((D_00283C80.f0 << 16) | 0xB00010C5);
    D_003827B0.r4C = func_1D6F40((D_00283C80.f0 << 16) | 0xB8001044);
}
