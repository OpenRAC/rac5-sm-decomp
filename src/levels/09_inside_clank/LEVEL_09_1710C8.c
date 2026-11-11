/* LEVEL_09:0x1710C8 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_0027F540;
extern struct Dst D_0037E158;
extern int func_171238(void);
extern int func_1C85A8(unsigned int id, int (*cb)(void));
extern int func_0FA730(unsigned int id);
extern int func_1D0C18(unsigned int id);
extern int func_1D19B0(unsigned int id);

void func_1710C8(void)
{
    D_0037E158.r3C = func_1C85A8((D_0027F540.f274 << 16) | 0xA0001059, func_171238);
    D_0037E158.r40 = func_0FA730((D_0027F540.f1CC << 16) | 0xC0001044);
    D_0037E158.r44 = func_1D0C18((D_0027F540.f5C << 16) | 0xC0001045);
    D_0037E158.r48 = func_1D0C18((D_0027F540.f0 << 16) | 0xB00010C5);
    D_0037E158.r4C = func_1D19B0((D_0027F540.f0 << 16) | 0xB8001044);
}
