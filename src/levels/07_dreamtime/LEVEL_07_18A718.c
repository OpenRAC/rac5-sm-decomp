/* LEVEL_07:0x18A718 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_002AD6C0;
extern struct Dst D_003AC408;
extern int func_18A888(void);
extern int func_1EE5F8(unsigned int id, int (*cb)(void));
extern int func_0FF650(unsigned int id);
extern int func_1FB080(unsigned int id);
extern int func_1FBE18(unsigned int id);

void func_18A718(void)
{
    D_003AC408.r3C = func_1EE5F8((D_002AD6C0.f274 << 16) | 0xA0001059, func_18A888);
    D_003AC408.r40 = func_0FF650((D_002AD6C0.f1CC << 16) | 0xC0001044);
    D_003AC408.r44 = func_1FB080((D_002AD6C0.f5C << 16) | 0xC0001045);
    D_003AC408.r48 = func_1FB080((D_002AD6C0.f0 << 16) | 0xB00010C5);
    D_003AC408.r4C = func_1FBE18((D_002AD6C0.f0 << 16) | 0xB8001044);
}
