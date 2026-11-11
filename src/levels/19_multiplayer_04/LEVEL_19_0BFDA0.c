/* LEVEL_19:0x0BFDA0 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_0276B0(void);
void func_0A5A20(void *p);
void func_0A5780(void);
extern int func_110600(void *p);
extern int func_0A4928(int a);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001A2C34;
extern unsigned char D_001B24C9;
extern void *D_001D16A0;

void func_0BFDA0(void)
{
    func_0276B0();
    func_0A5A20(D_001A2C34->p1C68);
    func_0A5780();
    if (D_001B24C9 != 0) {
        func_110600(D_001D16A0);
    }
    func_0A4928(7);
}
