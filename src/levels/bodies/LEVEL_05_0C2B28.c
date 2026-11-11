/* LEVEL_05:0x0C2B28 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_001EF72C[];
extern unsigned int func_12DE28(int a0);
extern void func_0D54F8(int a0, unsigned int a1, int a2, int a3);
extern void func_025848(void);
extern int func_0B45C8(int a);
extern void func_0D52D8(int a0);
extern void func_0BB120(int a0);
extern void func_019DC0(int a0, int a1);

void func_0C2B28(void)
{
    unsigned int r;

    r = func_12DE28(0x2F6);
    func_0D54F8(0, r, 0, 0);
    func_025848();
    if (*(unsigned char *)D_001EF72C != 0) {
        func_0B45C8(0);
        func_0D52D8(0);
        func_0BB120(0);
        func_019DC0(4, 0);
    }
}
