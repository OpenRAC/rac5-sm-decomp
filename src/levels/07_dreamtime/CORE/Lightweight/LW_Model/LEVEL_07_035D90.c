/* LEVEL_07:0x035D90 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_002489F8;
extern char D_0022CB58[];
extern void func_035F60(void *, int);

void func_035D90(void)
{
    D_002489F8.f1A88 = 1;
    D_002489F8.f1A98 = 0;
    D_002489F8.f1A94 = 0;
    D_002489F8.f1A8C = 0;
    D_002489F8.f1A90 = 0;
    func_035F60(D_0022CB58, 4);
}
