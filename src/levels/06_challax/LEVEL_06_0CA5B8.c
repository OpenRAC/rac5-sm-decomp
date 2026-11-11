/* LEVEL_06:0x0CA5B8 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0C9AA0(void);
void func_0CA488(void);
void func_0C9C20(void);
void func_0CB7C0(void);
extern int D_001F2388;

void func_0CA5B8(void)
{
    switch (D_001F2388) {
    case 0:
        break;
    case 1:
        func_0C9AA0();
        break;
    case 2:
        func_0CA488();
        break;
    case 3:
        func_0C9C20();
        break;
    }
    func_0CB7C0();
}
