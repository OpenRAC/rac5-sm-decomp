/* LEVEL_06:0x0CB6D0 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_028498(void);
void func_0B19F8(void *p);
void func_0B1738(void);
int func_129970(void *p);
void func_0B0848(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001E2EAC;
extern unsigned char D_001F2399;
extern void *D_00209670;

void func_0CB6D0(void)
{
    func_028498();
    func_0B19F8(D_001E2EAC->p1C68);
    func_0B1738();
    if (D_001F2399 != 0) {
        func_129970(D_00209670);
    }
    func_0B0848(7);
}
