/* LEVEL_24:0x0553D8 -- placement copy of LEVEL_03_05A708.c: runs three setup helpers, clears a flag byte, then applies two helper calls to a global pointer when a check passes. */

void func_15FB00(void);
void func_1614A0(void);
void func_15E3C0(void);
int func_0330E0(void *p);
void func_0335E0(int p, int a, int b);

extern void *D_001C5264;
extern unsigned char D_001C54B4;

void func_0553D8(void *a, void *b, void *c)
{
    void *s0;

    func_15FB00();
    func_1614A0();
    func_15E3C0();
    s0 = D_001C5264;
    D_001C54B4 = 0;
    if (func_0330E0(s0) != 0) {
        func_0335E0((int)s0, 4, 0);
        func_0335E0((int)s0, 5, 0);
    }
}
