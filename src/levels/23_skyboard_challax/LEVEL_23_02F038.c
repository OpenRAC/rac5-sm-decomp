/* LEVEL_23:0x02F038 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_00200578;
extern char D_001EAFD8[];
extern void func_02F208(void *, int);

void func_02F038(void)
{
    D_00200578.f1A88 = 1;
    D_00200578.f1A98 = 0;
    D_00200578.f1A94 = 0;
    D_00200578.f1A8C = 0;
    D_00200578.f1A90 = 0;
    func_02F208(D_001EAFD8, 4);
}
