/* LEVEL_04:0x188BD8 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_002B25C0;
extern struct Dst D_003B1300;
extern int func_188D48(void);
extern int func_1F7FE0(unsigned int id, int (*cb)(void));
extern int func_105D88(unsigned int id);
extern int func_1FFF70(unsigned int id);
extern int func_200D08(unsigned int id);

void func_188BD8(void)
{
    D_003B1300.r3C = func_1F7FE0((D_002B25C0.f274 << 16) | 0xA0001059, func_188D48);
    D_003B1300.r40 = func_105D88((D_002B25C0.f1CC << 16) | 0xC0001044);
    D_003B1300.r44 = func_1FFF70((D_002B25C0.f5C << 16) | 0xC0001045);
    D_003B1300.r48 = func_1FFF70((D_002B25C0.f0 << 16) | 0xB00010C5);
    D_003B1300.r4C = func_200D08((D_002B25C0.f0 << 16) | 0xB8001044);
}
