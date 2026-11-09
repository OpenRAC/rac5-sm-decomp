/* LEVEL_04:0x04DB90 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_0020DAA9[];

void func_0281D0(void);
void func_1A96E0(void *p);
int func_0B9A60(void);
void func_0B9A98(void);
int func_027F40(void);
void func_029D70(void);
void func_017A20(void);

void func_04DB90(void *p)
{
    func_0281D0();
    if (D_0020DAA9[0] != 0) {
        func_1A96E0(p);
    }
    if (func_0B9A60() != 0) {
        func_0B9A98();
    }
    if (func_027F40() != 0) {
        func_029D70();
    } else {
        func_017A20();
    }
}
