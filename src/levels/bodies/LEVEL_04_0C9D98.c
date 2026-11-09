/* LEVEL_04:0x0C9D98 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_0021986C[];
extern unsigned int func_13E930(int a0);
extern void func_0DC800(int a0, unsigned int a1, int a2, int a3);
extern void func_0265C8(void);
extern void func_0BB828(int a0);
extern void func_0DC5E0(int a0);
extern void func_0C2390(int a0);
extern void func_01A4A8(int a0, int a1);

void func_0C9D98(void)
{
    unsigned int r;

    r = func_13E930(0x2F6);
    func_0DC800(0, r, 0, 0);
    func_0265C8();
    if (*(unsigned char *)D_0021986C != 0) {
        func_0BB828(0);
        func_0DC5E0(0);
        func_0C2390(0);
        func_01A4A8(4, 0);
    }
}
