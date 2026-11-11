/* LEVEL_09:0x058988 -- placement copy of LEVEL_03_05A708.c: runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_16D600(void);
void func_16EFB0(void);
void func_16BEC0(void);
int func_0367F0(void *p);
void func_036A98(int p, int a, int b);

extern void *D_001DE3E4;
extern unsigned char D_001DE634;

void func_058988(void *a, void *b, void *c)
{
    void *s0;

    func_16D600();
    func_16EFB0();
    func_16BEC0();
    s0 = D_001DE3E4;
    D_001DE634 = 0;
    if (func_0367F0(s0) != 0) {
        func_036A98((int)s0, 4, 0);
        func_036A98((int)s0, 5, 0);
    }
}
