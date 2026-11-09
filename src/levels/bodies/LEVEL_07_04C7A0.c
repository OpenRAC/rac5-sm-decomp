/* LEVEL_07:0x04C7A0 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_002088E9[];

void func_0288C8(void);
void func_1AFCD8(void *p);
int func_0B63D0(void);
void func_0B6408(void);
int func_028638(void);
void func_02A608(void);
void func_018470(void);

void func_04C7A0(void *p)
{
    func_0288C8();
    if (D_002088E9[0] != 0) {
        func_1AFCD8(p);
    }
    if (func_0B63D0() != 0) {
        func_0B6408();
    }
    if (func_028638() != 0) {
        func_02A608();
    } else {
        func_018470();
    }
}
