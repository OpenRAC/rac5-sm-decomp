/* LEVEL_10:0x0D10F8 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0D05E0(void);
void func_0D0FC8(void);
void func_0D0760(void);
void func_0D2300(void);
extern int D_0020C488;

void func_0D10F8(void)
{
    switch (D_0020C488) {
    case 0:
        break;
    case 1:
        func_0D05E0();
        break;
    case 2:
        func_0D0FC8();
        break;
    case 3:
        func_0D0760();
        break;
    }
    func_0D2300();
}
