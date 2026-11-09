/* LEVEL_06:0x058B48 -- placement copy of LEVEL_03_05A708.c: runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_1699C8(void);
void func_16B378(void);
void func_168288(void);
int func_036A38(void *p);
void func_036CE0(int p, int a, int b);

extern void *D_001E34E4;
extern unsigned char D_001E3734;

void func_058B48(void *a, void *b, void *c)
{
    void *s0;

    func_1699C8();
    func_16B378();
    func_168288();
    s0 = D_001E34E4;
    D_001E3734 = 0;
    if (func_036A38(s0) != 0) {
        func_036CE0((int)s0, 4, 0);
        func_036CE0((int)s0, 5, 0);
    }
}
