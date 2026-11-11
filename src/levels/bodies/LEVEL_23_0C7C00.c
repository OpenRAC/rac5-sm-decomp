/* LEVEL_23:0x0C7C00 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_027C20(void);
void func_0ADEF0(void *p);
void func_0ADC30(void);
int func_124A18(void *p);
void func_0ACDE8(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001C73AC;
extern unsigned char D_001D6899;
extern void *D_001ED970;

void func_0C7C00(void)
{
    func_027C20();
    func_0ADEF0(D_001C73AC->p1C68);
    func_0ADC30();
    if (D_001D6899 != 0) {
        func_124A18(D_001ED970);
    }
    func_0ACDE8(7);
}
