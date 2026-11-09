/* LEVEL_21:0x0A4BC8 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_0015502C[];
extern unsigned int func_0F1378(int a0);
extern void func_0B7590(int a0, unsigned int a1, int a2, int a3);
extern void func_020AF8(void);
extern void func_096530(int a0);
extern void func_0B7370(int a0);
extern void func_09D1C0(int a0);
extern void func_016A10(int a0, int a1);

void func_0A4BC8(void)
{
    unsigned int r;

    r = func_0F1378(0x2F6);
    func_0B7590(0, r, 0, 0);
    func_020AF8();
    if (*(unsigned char *)D_0015502C != 0) {
        func_096530(0);
        func_0B7370(0);
        func_09D1C0(0);
        func_016A10(4, 0);
    }
}
