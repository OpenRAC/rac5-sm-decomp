/* LEVEL_08:0x19FEB0 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_002E7040;
extern struct Dst D_003E79D8;
extern int func_1A0020(void);
extern int func_2235E8(unsigned int id, int (*cb)(void));
extern int func_10A298(unsigned int id);
extern int func_22BC58(unsigned int id);
extern int func_22C9F0(unsigned int id);

void func_19FEB0(void)
{
    D_003E79D8.r3C = func_2235E8((D_002E7040.f274 << 16) | 0xA0001059, func_1A0020);
    D_003E79D8.r40 = func_10A298((D_002E7040.f1CC << 16) | 0xC0001044);
    D_003E79D8.r44 = func_22BC58((D_002E7040.f5C << 16) | 0xC0001045);
    D_003E79D8.r48 = func_22BC58((D_002E7040.f0 << 16) | 0xB00010C5);
    D_003E79D8.r4C = func_22C9F0((D_002E7040.f0 << 16) | 0xB8001044);
}
