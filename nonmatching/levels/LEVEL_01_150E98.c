/* USA LEVEL_01.REL:0x150E98, 280-byte candidate (21 November 2026).
 * Measured pinned: 5 differing words; first difference at 0x44.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct G {
    char pad000[0x30];
    int f30;
    char pad034[0x14C - 0x34];
    int f14C;
    char pad150[0x1E0 - 0x150];
    int f1E0;
    char pad1E4[0x28C - 0x1E4];
    int f28C;
};

extern struct G D_00297DC0;
extern int D_00391AFC;
extern int D_00391B00;
extern unsigned int D_002073A0;
extern unsigned int D_002073A4;
extern int D_00207308;
extern int D_00207340[2];
extern int func_0E57D0(unsigned int a, unsigned int b, unsigned int c);
extern int func_06E420(void);
extern int func_0FCB00(unsigned int value);

void func_150E98(void)
{
    unsigned int s;

    D_00391AFC = func_0E57D0(0x10, 1, 0xE);
    D_00391B00 = func_0E57D0(0x10, 3, 7);
    s = D_00297DC0.f1E0 << 16;
    D_002073A0 = s | (D_002073A0 & 0xF800FFFF);
    D_00207308 = func_06E420();
    D_002073A4 = (D_002073A4 & 0xF800FFFF) | (D_00297DC0.f30 << 16);
    if (D_00207340[0] == -1)
        D_00207340[0] = func_0FCB00((D_00297DC0.f14C << 16) | 0x80001041);
    if (D_00207340[1] == -1)
        D_00207340[1] = func_0FCB00((D_00297DC0.f28C << 16) | 0x80001041);
}
