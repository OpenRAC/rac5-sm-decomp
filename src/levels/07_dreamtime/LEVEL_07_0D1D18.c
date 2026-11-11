/* LEVEL_07:0x0D1D18 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0D1200(void);
void func_0D1BE8(void);
void func_0D1380(void);
void func_0D2F20(void);
extern int D_00217788;

void func_0D1D18(void)
{
    switch (D_00217788) {
    case 0:
        break;
    case 1:
        func_0D1200();
        break;
    case 2:
        func_0D1BE8();
        break;
    case 3:
        func_0D1380();
        break;
    }
    func_0D2F20();
}
