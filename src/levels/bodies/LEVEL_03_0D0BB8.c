/* LEVEL_03:0x0D0BB8 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_029EA8(void);
void func_0B6F10(void *p);
void func_0B6C50(void);
int func_131668(void *p);
void func_0B5E08(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_0020C62C;
extern unsigned char D_0021BB19;
extern void *D_002336F0;

void func_0D0BB8(void)
{
    func_029EA8();
    func_0B6F10(D_0020C62C->p1C68);
    func_0B6C50();
    if (D_0021BB19 != 0) {
        func_131668(D_002336F0);
    }
    func_0B5E08(7);
}
