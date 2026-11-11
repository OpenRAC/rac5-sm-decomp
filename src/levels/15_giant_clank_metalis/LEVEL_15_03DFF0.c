/* LEVEL_15:0x03DFF0 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_00149269[];

void func_022370(void);
void func_0F4EA8(void *p);
int func_0949B0(void);
void func_0949E8(void);
int func_022190(void);
void func_023AA0(void);
void func_014620(void);

void func_03DFF0(void *p)
{
    func_022370();
    if (D_00149269[0] != 0) {
        func_0F4EA8(p);
    }
    if (func_0949B0() != 0) {
        func_0949E8();
    }
    if (func_022190() != 0) {
        func_023AA0();
    } else {
        func_014620();
    }
}
