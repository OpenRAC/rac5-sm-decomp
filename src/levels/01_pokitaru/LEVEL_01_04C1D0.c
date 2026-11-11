/* LEVEL_01:0x04C1D0 -- runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001F45E9[];

void func_028568(void);
void func_19DB30(void *p);
int func_0B4370(void);
void func_0B43A8(void);
int func_0282D8(void);
void func_02A2C8(void);
void func_017D60(void);

void func_04C1D0(void *p)
{
    func_028568();
    if (D_001F45E9[0] != 0) {
        func_19DB30(p);
    }
    if (func_0B4370() != 0) {
        func_0B43A8();
    }
    if (func_0282D8() != 0) {
        func_02A2C8();
    } else {
        func_017D60();
    }
}
