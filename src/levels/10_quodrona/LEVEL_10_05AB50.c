/* LEVEL_10:0x05AB50 -- placement copy of LEVEL_03_05A708.c: runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_17BFF8(void);
void func_17D9A8(void);
void func_17A8B8(void);
int func_0389F8(void *p);
void func_038CA0(int p, int a, int b);

extern void *D_001FD5E4;
extern unsigned char D_001FD834;

void func_05AB50(void *a, void *b, void *c)
{
    void *s0;

    func_17BFF8();
    func_17D9A8();
    func_17A8B8();
    s0 = D_001FD5E4;
    D_001FD834 = 0;
    if (func_0389F8(s0) != 0) {
        func_038CA0((int)s0, 4, 0);
        func_038CA0((int)s0, 5, 0);
    }
}
