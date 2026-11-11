/* LEVEL_06:0x170860 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_00284B40;
extern struct Dst D_003837F8;
extern int func_1709D0(void);
extern int func_1CD688(unsigned int id, int (*cb)(void));
extern int func_0F7910(unsigned int id);
extern int func_1D5CF8(unsigned int id);
extern int func_1D6A90(unsigned int id);

void func_170860(void)
{
    D_003837F8.r3C = func_1CD688((D_00284B40.f274 << 16) | 0xA0001059, func_1709D0);
    D_003837F8.r40 = func_0F7910((D_00284B40.f1CC << 16) | 0xC0001044);
    D_003837F8.r44 = func_1D5CF8((D_00284B40.f5C << 16) | 0xC0001045);
    D_003837F8.r48 = func_1D5CF8((D_00284B40.f0 << 16) | 0xB00010C5);
    D_003837F8.r4C = func_1D6A90((D_00284B40.f0 << 16) | 0xB8001044);
}
