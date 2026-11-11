/* LEVEL_10:0x17FC78 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_002A11C0;
extern struct Dst D_0039FEE0;
extern int func_17FDE8(void);
extern int func_1E7798(unsigned int id, int (*cb)(void));
extern int func_0FE190(unsigned int id);
extern int func_1EFE08(unsigned int id);
extern int func_1F0BA0(unsigned int id);

void func_17FC78(void)
{
    D_0039FEE0.r3C = func_1E7798((D_002A11C0.f274 << 16) | 0xA0001059, func_17FDE8);
    D_0039FEE0.r40 = func_0FE190((D_002A11C0.f1CC << 16) | 0xC0001044);
    D_0039FEE0.r44 = func_1EFE08((D_002A11C0.f5C << 16) | 0xC0001045);
    D_0039FEE0.r48 = func_1EFE08((D_002A11C0.f0 << 16) | 0xB00010C5);
    D_0039FEE0.r4C = func_1F0BA0((D_002A11C0.f0 << 16) | 0xB8001044);
}
