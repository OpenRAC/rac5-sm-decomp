/* LEVEL_03:0x04A430 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_0020CC69[];

void func_028448(void);
void func_1B0C38(void *p);
int func_0B4158(void);
void func_0B4190(void);
int func_0281B8(void);
void func_02A0C0(void);
void func_017B10(void);

void func_04A430(void *p)
{
    func_028448();
    if (D_0020CC69[0] != 0) {
        func_1B0C38(p);
    }
    if (func_0B4158() != 0) {
        func_0B4190();
    }
    if (func_0281B8() != 0) {
        func_02A0C0();
    } else {
        func_017B10();
    }
}
