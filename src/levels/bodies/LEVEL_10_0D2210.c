/* LEVEL_10:0x0D2210 -- placement copy of LEVEL_01_0D0DD0.c: runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_029E88(void);
void func_0B83A8(void *p);
void func_0B80E8(void);
int func_131120(void *p);
extern int func_0B71F8(int index);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001FCFAC;
extern unsigned char D_0020C499;
extern void *D_00223780;

void func_0D2210(void)
{
    func_029E88();
    func_0B83A8(D_001FCFAC->p1C68);
    func_0B80E8();
    if (D_0020C499 != 0) {
        func_131120(D_00223780);
    }
    func_0B71F8(7);
}
