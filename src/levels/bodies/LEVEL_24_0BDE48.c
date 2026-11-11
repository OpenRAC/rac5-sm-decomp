/* LEVEL_24:0x0BDE48 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001D102C[];
extern unsigned int func_127FB0(int a0);
extern void func_0D08A8(int a0, unsigned int a1, int a2, int a3);
extern void func_024568(void);
extern int func_0AF8B0(int index);
extern void func_0D0688(int a0);
extern void func_0B6440(int a0);
extern void func_018E18(int a0, int a1);

void func_0BDE48(void)
{
    unsigned int r;

    r = func_127FB0(0x2F6);
    func_0D08A8(0, r, 0, 0);
    func_024568();
    if (*(unsigned char *)D_001D102C != 0) {
        func_0AF8B0(0);
        func_0D0688(0);
        func_0B6440(0);
        func_018E18(4, 0);
    }
}
