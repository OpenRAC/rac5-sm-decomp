/* LEVEL_23:0x045550 -- placement copy of LEVEL_01_04C1D0.c: runs a status check, optional hook, then one of two follow-up calls. */

extern unsigned char D_001C79E9[];

void func_026298(void);
void func_17EF20(void *p);
int func_0AB150(void);
void func_0AB188(void);
int func_026008(void);
void func_027E38(void);
void func_016B98(void);

void func_045550(void *p)
{
    func_026298();
    if (D_001C79E9[0] != 0) {
        func_17EF20(p);
    }
    if (func_0AB150() != 0) {
        func_0AB188();
    }
    if (func_026008() != 0) {
        func_027E38();
    } else {
        func_016B98();
    }
}
