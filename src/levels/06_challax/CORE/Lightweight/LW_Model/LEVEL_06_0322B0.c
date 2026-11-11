/* LEVEL_06:0x0322B0 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_0021FE78;
extern char D_00206CD8[];
extern void func_032480(void *, int);

void func_0322B0(void)
{
    D_0021FE78.f1A88 = 1;
    D_0021FE78.f1A98 = 0;
    D_0021FE78.f1A94 = 0;
    D_0021FE78.f1A8C = 0;
    D_0021FE78.f1A90 = 0;
    func_032480(D_00206CD8, 4);
}
