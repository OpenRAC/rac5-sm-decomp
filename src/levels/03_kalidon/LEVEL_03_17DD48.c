/* LEVEL_03:0x17DD48 -- placement copy of LEVEL_01_17D638.c: stores four packed-id lookup results into a table. */
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
extern struct Src D_002B2C40;
extern struct Dst D_003B1988;
extern int func_17DEB8(void);
extern int func_1F4C10(unsigned int id, int (*cb)(void));
extern int func_0FD0E8(unsigned int id);
extern int func_1FF440(unsigned int id);
extern int func_2001D8(unsigned int id);

void func_17DD48(void)
{
    D_003B1988.r3C = func_1F4C10((D_002B2C40.f274 << 16) | 0xA0001059, func_17DEB8);
    D_003B1988.r40 = func_0FD0E8((D_002B2C40.f1CC << 16) | 0xC0001044);
    D_003B1988.r44 = func_1FF440((D_002B2C40.f5C << 16) | 0xC0001045);
    D_003B1988.r48 = func_1FF440((D_002B2C40.f0 << 16) | 0xB00010C5);
    D_003B1988.r4C = func_2001D8((D_002B2C40.f0 << 16) | 0xB8001044);
}
