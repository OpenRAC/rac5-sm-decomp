/* LEVEL_21:0x0B1410 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_023888(void);
void func_097638(void *p);
void func_097378(void);
void func_0F2168(void *p);
void func_096530(int v);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_00148C2C;
extern unsigned char D_00158119;
extern void *D_0016EF70;

void func_0B1410(void)
{
    func_023888();
    func_097638(D_00148C2C->p1C68);
    func_097378();
    if (D_00158119 != 0) {
        func_0F2168(D_0016EF70);
    }
    func_096530(7);
}
