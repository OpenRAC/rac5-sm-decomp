/* LEVEL_10:0x0C58D0 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_002093AC[];
extern unsigned int func_130310(int a0);
extern void func_0D8390(int a0, unsigned int a1, int a2, int a3);
extern void func_026218(void);
extern void func_0B71F8(int a0);
extern void func_0D8170(int a0);
extern void func_0BDEC8(int a0);
extern void func_019EA8(int a0, int a1);

void func_0C58D0(void)
{
    unsigned int r;

    r = func_130310(0x2F6);
    func_0D8390(0, r, 0, 0);
    func_026218();
    if (*(unsigned char *)D_002093AC != 0) {
        func_0B71F8(0);
        func_0D8170(0);
        func_0BDEC8(0);
        func_019EA8(4, 0);
    }
}
