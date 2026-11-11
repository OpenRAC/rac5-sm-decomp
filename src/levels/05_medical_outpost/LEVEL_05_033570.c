/* LEVEL_05:0x033570 -- placement copy of LEVEL_01_035860.c: resets five state words of a global block and calls a setup helper. */
struct Block_002330F8 {
    char pad[0x1A88];
    int f1A88;
    int f1A8C;
    int f1A90;
    int f1A94;
    int f1A98;
};
extern struct Block_002330F8 D_0021EDF8;
extern char D_00206D58[];
extern void func_033740(void *, int);

void func_033570(void)
{
    D_0021EDF8.f1A88 = 1;
    D_0021EDF8.f1A98 = 0;
    D_0021EDF8.f1A94 = 0;
    D_0021EDF8.f1A8C = 0;
    D_0021EDF8.f1A90 = 0;
    func_033740(D_00206D58, 4);
}
