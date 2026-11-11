/* LEVEL_17:0x0B2F78 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001A1A24[];
extern unsigned int func_10E8A8(int a0);
extern void func_0C5B88(int a0, unsigned int a1, int a2, int a3);
extern void func_023D50(void);
extern int func_0A4590(int a);
extern void func_0C5968(int a0);
extern void func_0AB540(int a0);
extern void func_018518(int a0, int a1);

void func_0B2F78(void)
{
    unsigned int r;

    r = func_10E8A8(0x2F6);
    func_0C5B88(0, r, 0, 0);
    func_023D50();
    if (*(unsigned char *)D_001A1A24 != 0) {
        func_0A4590(0);
        func_0C5968(0);
        func_0AB540(0);
        func_018518(4, 0);
    }
}
