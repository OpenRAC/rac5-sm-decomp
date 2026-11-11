/* LEVEL_02:0x0510F8 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_002095A9[];

void func_028D50(void);
void func_1B84F8(void *p);
int func_0BAC80(void);
void func_0BACB8(void);
int func_028AC0(void);
void func_02AA90(void);
void func_0186F0(void);

void func_0510F8(void *p)
{
    func_028D50();
    if (D_002095A9[0] != 0) {
        func_1B84F8(p);
    }
    if (func_0BAC80() != 0) {
        func_0BACB8();
    }
    if (func_028AC0() != 0) {
        func_02AA90();
    } else {
        func_0186F0();
    }
}
