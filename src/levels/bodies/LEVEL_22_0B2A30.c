/* LEVEL_22:0x0B2A30 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_0015F72C[];
extern unsigned int func_109980(int a0);
extern void func_0C5490(int a0, unsigned int a1, int a2, int a3);
extern void func_0215C8(void);
extern void func_0A4570(int a0);
extern void func_0C5270(int a0);
extern void func_0AB028(int a0);
extern void func_016E40(int a0, int a1);

void func_0B2A30(void)
{
    unsigned int r;

    r = func_109980(0x2F6);
    func_0C5490(0, r, 0, 0);
    func_0215C8();
    if (*(unsigned char *)D_0015F72C != 0) {
        func_0A4570(0);
        func_0C5270(0);
        func_0AB028(0);
        func_016E40(4, 0);
    }
}
