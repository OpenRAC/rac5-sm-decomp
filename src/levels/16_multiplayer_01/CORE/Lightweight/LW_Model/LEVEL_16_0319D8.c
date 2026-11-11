/* LEVEL_16:0x0319D8 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_001E2040;
extern char D_001CCD18[];
extern void func_031BA8(void *, int);

void func_0319D8(void)
{
    D_001E2040.f1A88 = 1;
    D_001E2040.f1A98 = 0;
    D_001E2040.f1A94 = 0;
    D_001E2040.f1A8C = 0;
    D_001E2040.f1A90 = 0;
    func_031BA8(D_001CCD18, 4);
}
