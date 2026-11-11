/* LEVEL_01:0x0D0DD0 -- runs three setup calls, a helper when a flag byte is set, then a final call with seven. */

void func_02A0B0(void);
void func_0B7128(void *p);
void func_0B6E68(void);
int func_1332A0(void *p);
extern int func_0B6020(int index);

struct Ctx {
    unsigned char pad0000[0x1C68];
    void *p1C68;
};

extern struct Ctx *D_001F3FAC;
extern unsigned char D_00203499;
extern void *D_0021A7F0;

void func_0D0DD0(void)
{
    func_02A0B0();
    func_0B7128(D_001F3FAC->p1C68);
    func_0B6E68();
    if (D_00203499 != 0) {
        func_1332A0(D_0021A7F0);
    }
    func_0B6020(7);
}
