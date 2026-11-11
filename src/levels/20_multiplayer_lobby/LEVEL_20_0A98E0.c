/* LEVEL_20:0x0A98E0 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0A8DC8(void);
void func_0A97B0(void);
void func_0A8F48(void);
void func_0AAAE8(void);
extern int D_00113A18;

void func_0A98E0(void)
{
    switch (D_00113A18) {
    case 0:
        break;
    case 1:
        func_0A8DC8();
        break;
    case 2:
        func_0A97B0();
        break;
    case 3:
        func_0A8F48();
        break;
    }
    func_0AAAE8();
}
