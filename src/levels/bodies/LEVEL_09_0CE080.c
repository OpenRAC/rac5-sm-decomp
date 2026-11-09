/* LEVEL_09:0x0CE080 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_028F18(void);
void func_0B43D8(void *p);
void func_0B4118(void);
void func_12C238(void *p);
void func_0B32D0(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001DDDAC;
extern unsigned char D_001ED299;
extern void *D_002043F0;

void func_0CE080(void)
{
    func_028F18();
    func_0B43D8(D_001DDDAC->p1C68);
    func_0B4118();
    if (D_001ED299 != 0) {
        func_12C238(D_002043F0);
    }
    func_0B32D0(7);
}
