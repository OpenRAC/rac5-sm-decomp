/* LEVEL_24:0x0CA710 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_0275F0(void);
void func_0B09B8(void *p);
void func_0B06F8(void);
int func_128DA0(void *p);
extern int func_0AF8B0(int index);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001C4C2C;
extern unsigned char D_001D4119;
extern void *D_001EB570;

void func_0CA710(void)
{
    func_0275F0();
    func_0B09B8(D_001C4C2C->p1C68);
    func_0B06F8();
    if (D_001D4119 != 0) {
        func_128DA0(D_001EB570);
    }
    func_0AF8B0(7);
}
