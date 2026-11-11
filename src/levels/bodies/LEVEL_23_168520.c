/* LEVEL_23:0x168520 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_00269200;
extern struct Dst D_00364F58;
extern int func_168690(void);
extern int func_1B12C0(unsigned int id, int (*cb)(void));
extern int func_0F1738(unsigned int id);
extern int func_1B4E68(unsigned int id);
extern int func_1B5C00(unsigned int id);

void func_168520(void)
{
    D_00364F58.r3C = func_1B12C0((D_00269200.f274 << 16) | 0xA0001059, func_168690);
    D_00364F58.r40 = func_0F1738((D_00269200.f1CC << 16) | 0xC0001044);
    D_00364F58.r44 = func_1B4E68((D_00269200.f5C << 16) | 0xC0001045);
    D_00364F58.r48 = func_1B4E68((D_00269200.f0 << 16) | 0xB00010C5);
    D_00364F58.r4C = func_1B5C00((D_00269200.f0 << 16) | 0xB8001044);
}
