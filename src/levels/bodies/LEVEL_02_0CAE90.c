/* LEVEL_02:0x0CAE90 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_0021536C[];
extern unsigned int func_138860(int a0);
extern void func_0DD8E0(int a0, unsigned int a1, int a2, int a3);
extern void func_027210(void);
extern void func_0BC930(int a0);
extern void func_0DD6C0(int a0);
extern void func_0C3488(int a0);
extern void func_01B188(int a0, int a1);

void func_0CAE90(void)
{
    unsigned int r;

    r = func_138860(0x2F6);
    func_0DD8E0(0, r, 0, 0);
    func_027210();
    if (*(unsigned char *)D_0021536C != 0) {
        func_0BC930(0);
        func_0DD6C0(0);
        func_0C3488(0);
        func_01B188(4, 0);
    }
}
