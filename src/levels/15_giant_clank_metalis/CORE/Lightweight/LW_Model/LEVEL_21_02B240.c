/* LEVEL_21:0x02B240 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_0017B278;
extern char D_0016C5D8[];
extern void func_02B410(void *, int);

void func_02B240(void)
{
    D_0017B278.f1A88 = 1;
    D_0017B278.f1A98 = 0;
    D_0017B278.f1A94 = 0;
    D_0017B278.f1A8C = 0;
    D_0017B278.f1A90 = 0;
    func_02B410(D_0016C5D8, 4);
}
