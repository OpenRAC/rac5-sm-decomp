/* LEVEL_17:0x0BFA08 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_027488(void);
void func_0A5688(void *p);
void func_0A53E8(void);
void func_10F4D8(void *p);
void func_0A4590(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001950B4;
extern unsigned char D_001A4949;
extern void *D_001C3920;

void func_0BFA08(void)
{
    func_027488();
    func_0A5688(D_001950B4->p1C68);
    func_0A53E8();
    if (D_001A4949 != 0) {
        func_10F4D8(D_001C3920);
    }
    func_0A4590(7);
}
