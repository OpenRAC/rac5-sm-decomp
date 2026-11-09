/* LEVEL_09:0x0486B0 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001DE3E9[];

void func_027570(void);
void func_193360(void *p);
int func_0B1620(void);
void func_0B1658(void);
int func_0272E0(void);
void func_029130(void);
void func_017170(void);

void func_0486B0(void *p)
{
    func_027570();
    if (D_001DE3E9[0] != 0) {
        func_193360(p);
    }
    if (func_0B1620() != 0) {
        func_0B1658();
    }
    if (func_0272E0() != 0) {
        func_029130();
    } else {
        func_017170();
    }
}
