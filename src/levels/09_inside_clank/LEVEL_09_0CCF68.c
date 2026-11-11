/* LEVEL_09:0x0CCF68 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0CC450(void);
void func_0CCE38(void);
void func_0CC5D0(void);
void func_0CE170(void);
extern int D_001ED288;

void func_0CCF68(void)
{
    switch (D_001ED288) {
    case 0:
        break;
    case 1:
        func_0CC450();
        break;
    case 2:
        func_0CCE38();
        break;
    case 3:
        func_0CC5D0();
        break;
    }
    func_0CE170();
}
