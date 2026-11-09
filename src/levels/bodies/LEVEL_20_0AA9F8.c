/* LEVEL_20:0x0AA9F8 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_024610(void);
void func_090728(void *p);
void func_090488(void);
void func_0E2D48(void *p);
void func_08F6B0(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_00104194;
extern unsigned char D_00113A29;
extern void *D_00131510;

void func_0AA9F8(void)
{
    func_024610();
    func_090728(D_00104194->p1C68);
    func_090488();
    if (D_00113A29 != 0) {
        func_0E2D48(D_00131510);
    }
    func_08F6B0(7);
}
