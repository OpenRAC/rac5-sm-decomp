/* LEVEL_19:0x0B3310 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001AF5A4[];
extern unsigned int func_10F9D0(int a0);
extern void func_0C5F20(int a0, unsigned int a1, int a2, int a3);
extern void func_024010(void);
extern void func_0A4928(int a0);
extern void func_0C5D00(int a0);
extern void func_0AB8D8(int a0);
extern void func_018898(int a0, int a1);

void func_0B3310(void)
{
    unsigned int r;

    r = func_10F9D0(0x2F6);
    func_0C5F20(0, r, 0, 0);
    func_024010();
    if (*(unsigned char *)D_001AF5A4 != 0) {
        func_0A4928(0);
        func_0C5D00(0);
        func_0AB8D8(0);
        func_018898(4, 0);
    }
}
