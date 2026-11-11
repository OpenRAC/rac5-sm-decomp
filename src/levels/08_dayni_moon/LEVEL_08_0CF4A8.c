/* LEVEL_08:0x0CF4A8 -- placement copy of LEVEL_01_0C4580.c: runs setup helpers and, when a data byte is set, runs four more helpers. */

extern char D_0024926C[];
extern unsigned int func_1439E8(int a0);
extern void func_0E1F10(int a0, unsigned int a1, int a2, int a3);
extern void func_0271C8(void);
extern int func_0C0F10(int a);
extern void func_0E1CF0(int a0);
extern void func_0C7AA0(int a0);
extern void func_01B1A0(int a0, int a1);

void func_0CF4A8(void)
{
    unsigned int r;

    r = func_1439E8(0x2F6);
    func_0E1F10(0, r, 0, 0);
    func_0271C8();
    if (*(unsigned char *)D_0024926C != 0) {
        func_0C0F10(0);
        func_0E1CF0(0);
        func_0C7AA0(0);
        func_01B1A0(4, 0);
    }
}
