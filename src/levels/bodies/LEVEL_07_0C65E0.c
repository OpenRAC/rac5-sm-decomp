/* LEVEL_07:0x0C65E0 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_002146AC[];
extern unsigned int func_1354B0(int a0);
extern void func_0D8FB0(int a0, unsigned int a1, int a2, int a3);
extern void func_026F00(void);
extern int func_0B8080(int a);
extern void func_0D8D90(int a0);
extern void func_0BEBD8(int a0);
extern void func_01AEE8(int a0, int a1);

void func_0C65E0(void)
{
    unsigned int r;

    r = func_1354B0(0x2F6);
    func_0D8FB0(0, r, 0, 0);
    func_026F00();
    if (*(unsigned char *)D_002146AC != 0) {
        func_0B8080(0);
        func_0D8D90(0);
        func_0BEBD8(0);
        func_01AEE8(4, 0);
    }
}
