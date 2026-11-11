/* LEVEL_06:0x0488C8 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001E34E9[];

void func_026B18(void);
void func_193708(void *p);
int func_0AEBB0(void);
void func_0AEBE8(void);
int func_026888(void);
void func_0286B0(void);
void func_0165B0(void);

void func_0488C8(void *p)
{
    func_026B18();
    if (D_001E34E9[0] != 0) {
        func_193708(p);
    }
    if (func_0AEBB0() != 0) {
        func_0AEBE8();
    }
    if (func_026888() != 0) {
        func_0286B0();
    } else {
        func_0165B0();
    }
}
