/* LEVEL_09:0x0C1830 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001EA1AC[];
extern unsigned int func_12B448(int a0);
extern void func_0D4200(int a0, unsigned int a1, int a2, int a3);
extern void func_025BA8(void);
extern int func_0B32D0(int index);
extern void func_0D3FE0(int a0);
extern void func_0B9E28(int a0);
extern void func_019C18(int a0, int a1);

void func_0C1830(void)
{
    unsigned int r;

    r = func_12B448(0x2F6);
    func_0D4200(0, r, 0, 0);
    func_025BA8();
    if (*(unsigned char *)D_001EA1AC != 0) {
        func_0B32D0(0);
        func_0D3FE0(0);
        func_0B9E28(0);
        func_019C18(4, 0);
    }
}
