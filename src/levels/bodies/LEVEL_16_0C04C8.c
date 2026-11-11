/* LEVEL_16:0x0C04C8 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_027B08(void);
void func_0A61A8(void *p);
void func_0A5F08(void);
extern int func_10FF60(void *p);
void func_0A50B0(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001A1AB4;
extern unsigned char D_001B1349;
extern void *D_001D04A0;

void func_0C04C8(void)
{
    func_027B08();
    func_0A61A8(D_001A1AB4->p1C68);
    func_0A5F08();
    if (D_001B1349 != 0) {
        func_10FF60(D_001D04A0);
    }
    func_0A50B0(7);
}
