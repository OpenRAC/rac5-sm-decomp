/* LEVEL_20:0x0EFF68 -- placement copy of LEVEL_16_11DE68.c: returns early on two status checks, otherwise runs a short setup sequence. */

extern int func_021BD8(int a, int b);
extern int func_0E57F0(void);
extern int func_08F6B0(int a);
extern char *func_0E2118(int id);
extern void func_0B0B78(int a, char *b, int c, int d);
extern void func_0B0BB0(int a);
extern void func_021BA8(int a, int b, int c);

void func_0EFF68(void)
{
    char *s;

    if (func_021BD8(0, 0xFF) != 0) {
        return;
    }
    if (func_0E57F0() == 0) {
        return;
    }
    func_08F6B0(1);
    s = func_0E2118(0x6C5);
    func_0B0B78(0, s, 0, 0);
    func_0B0BB0(0x5A);
    func_021BA8(0, 1, 0xFF);
}
