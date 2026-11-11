/* LEVEL_07:0x05CA78 -- placement copy of LEVEL_03_05A708.c: runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_186A30(void);
void func_1883E0(void);
void func_1852F0(void);
int func_03A518(void *p);
void func_03AA18(int p, int a, int b);

extern void *D_002088E4;
extern unsigned char D_00208B34;

void func_05CA78(void *a, void *b, void *c)
{
    void *s0;

    func_186A30();
    func_1883E0();
    func_1852F0();
    s0 = D_002088E4;
    D_00208B34 = 0;
    if (func_03A518(s0) != 0) {
        func_03AA18((int)s0, 4, 0);
        func_03AA18((int)s0, 5, 0);
    }
}
