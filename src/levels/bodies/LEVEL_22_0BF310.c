/* LEVEL_22:0x0BF310 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_024648(void);
void func_0A5678(void *p);
void func_0A53B8(void);
int func_10A770(void *p);
void func_0A4570(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_0015332C;
extern unsigned char D_00162819;
extern void *D_00177C70;

void func_0BF310(void)
{
    func_024648();
    func_0A5678(D_0015332C->p1C68);
    func_0A53B8();
    if (D_00162819 != 0) {
        func_10A770(D_00177C70);
    }
    func_0A4570(7);
}
