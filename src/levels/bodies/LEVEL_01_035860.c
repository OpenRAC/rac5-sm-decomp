/* LEVEL_01:0x035860 -- resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_002330F8;
extern char D_00217E58[];
extern void func_035A30(void *, int);

void func_035860(void)
{
    D_002330F8.f1A88 = 1;
    D_002330F8.f1A98 = 0;
    D_002330F8.f1A94 = 0;
    D_002330F8.f1A8C = 0;
    D_002330F8.f1A90 = 0;
    func_035A30(D_00217E58, 4);
}
