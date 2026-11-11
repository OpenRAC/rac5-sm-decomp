/* LEVEL_08:0x0615B0 -- placement copy of LEVEL_03_05A708.c: runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_197018(void);
void func_1989C8(void);
void func_1958D8(void);
int func_03F0B8(void *p);
void func_03F640(int p, int a, int b);

extern void *D_0023D4A4;
extern unsigned char D_0023D6F4;

void func_0615B0(void *a, void *b, void *c)
{
    void *s0;

    func_197018();
    func_1989C8();
    func_1958D8();
    s0 = D_0023D4A4;
    D_0023D6F4 = 0;
    if (func_03F0B8(s0) != 0) {
        func_03F640((int)s0, 4, 0);
        func_03F640((int)s0, 5, 0);
    }
}
