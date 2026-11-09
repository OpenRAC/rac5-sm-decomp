/* LEVEL_10:0x033FB8 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_0023C4F8;
extern char D_00220DD8[];
extern void func_034188(void *, int);

void func_033FB8(void)
{
    D_0023C4F8.f1A88 = 1;
    D_0023C4F8.f1A98 = 0;
    D_0023C4F8.f1A94 = 0;
    D_0023C4F8.f1A8C = 0;
    D_0023C4F8.f1A90 = 0;
    func_034188(D_00220DD8, 4);
}
