/* LEVEL_10:0x04A878 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001FD5E9[];

void func_027E70(void);
void func_1A7C38(void *p);
int func_0B5548(void);
void func_0B5580(void);
int func_027BE0(void);
void func_02A0A0(void);
void func_0173C8(void);

void func_04A878(void *p)
{
    func_027E70();
    if (D_001FD5E9[0] != 0) {
        func_1A7C38(p);
    }
    if (func_0B5548() != 0) {
        func_0B5580();
    }
    if (func_027BE0() != 0) {
        func_02A0A0();
    } else {
        func_0173C8();
    }
}
