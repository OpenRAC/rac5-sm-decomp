/* LEVEL_08:0x0DBD78 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_02A628(void);
void func_0C2018(void *p);
void func_0C1D58(void);
int func_1447D8(void *p);
void func_0C0F10(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_0023CB2C;
extern unsigned char D_0024C359;
extern void *D_00264470;

void func_0DBD78(void)
{
    func_02A628();
    func_0C2018(D_0023CB2C->p1C68);
    func_0C1D58();
    if (D_0024C359 != 0) {
        func_1447D8(D_00264470);
    }
    func_0C0F10(7);
}
