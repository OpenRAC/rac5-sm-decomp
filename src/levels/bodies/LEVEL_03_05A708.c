/* LEVEL_03:0x05A708 -- runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_179A40(void);
void func_17B3F0(void);
void func_178300(void);
int func_038228(void *p);
void func_038728(int p, int a, int b);

extern void *D_0020CC64;
extern unsigned char D_0020CEB4;

void func_05A708(void *a, void *b, void *c)
{
    void *s0;

    func_179A40();
    func_17B3F0();
    func_178300();
    s0 = D_0020CC64;
    D_0020CEB4 = 0;
    if (func_038228(s0) != 0) {
        func_038728((int)s0, 4, 0);
        func_038728((int)s0, 5, 0);
    }
}
