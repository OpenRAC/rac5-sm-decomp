/* LEVEL_18:0x0BF4A0 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_0270B8(void);
void func_0A5120(void *p);
void func_0A4E80(void);
void func_10EC10(void *p);
void func_0A40A8(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001A2F34;
extern unsigned char D_001B27C9;
extern void *D_001D1A20;

void func_0BF4A0(void)
{
    func_0270B8();
    func_0A5120(D_001A2F34->p1C68);
    func_0A4E80();
    if (D_001B27C9 != 0) {
        func_10EC10(D_001D1A20);
    }
    func_0A40A8(7);
}
