/* LEVEL_02:0x0D7760 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_02A878(void);
void func_0BDA38(void *p);
void func_0BD778(void);
void func_139650(void *p);
void func_0BC930(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_00208C2C;
extern unsigned char D_00218459;
extern void *D_0022F770;

void func_0D7760(void)
{
    func_02A878();
    func_0BDA38(D_00208C2C->p1C68);
    func_0BD778();
    if (D_00218459 != 0) {
        func_139650(D_0022F770);
    }
    func_0BC930(7);
}
