/* LEVEL_24:0x162668 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_00263C80;
extern struct Dst D_00360AA8;
extern int func_1627D8(void);
extern int func_1B1690(unsigned int id, int (*cb)(void));
extern int func_0F6460(unsigned int id);
extern int func_1B7A88(unsigned int id);
extern int func_1B8820(unsigned int id);

void func_162668(void)
{
    D_00360AA8.r3C = func_1B1690((D_00263C80.f274 << 16) | 0xA0001059, func_1627D8);
    D_00360AA8.r40 = func_0F6460((D_00263C80.f1CC << 16) | 0xC0001044);
    D_00360AA8.r44 = func_1B7A88((D_00263C80.f5C << 16) | 0xC0001045);
    D_00360AA8.r48 = func_1B7A88((D_00263C80.f0 << 16) | 0xB00010C5);
    D_00360AA8.r4C = func_1B8820((D_00263C80.f0 << 16) | 0xB8001044);
}
