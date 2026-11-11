/* LEVEL_22:0x041AB0 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_00153969[];

void func_022D50(void);
void func_132240(void *p);
int func_0A29F0(void);
void func_0A2A28(void);
int func_022B70(void);
void func_024860(void);
void func_014A50(void);

void func_041AB0(void *p)
{
    func_022D50();
    if (D_00153969[0] != 0) {
        func_132240(p);
    }
    if (func_0A29F0() != 0) {
        func_0A2A28();
    }
    if (func_022B70() != 0) {
        func_024860();
    } else {
        func_014A50();
    }
}
