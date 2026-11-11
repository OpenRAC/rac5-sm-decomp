/* LEVEL_05:0x049E00 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001E3969[];

void func_027380(void);
void func_19BE30(void *p);
int func_0B2930(void);
void func_0B2968(void);
int func_0270F0(void);
void func_028F40(void);
void func_0173F8(void);

void func_049E00(void *p)
{
    func_027380();
    if (D_001E3969[0] != 0) {
        func_19BE30(p);
    }
    if (func_0B2930() != 0) {
        func_0B2968();
    }
    if (func_0270F0() != 0) {
        func_028F40();
    } else {
        func_0173F8();
    }
}
