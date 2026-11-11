/* LEVEL_03:0x0CFAA0 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0CEF88(void);
void func_0CF970(void);
void func_0CF108(void);
void func_0D0CA8(void);
extern int D_0021BB08;

void func_0CFAA0(void)
{
    switch (D_0021BB08) {
    case 0:
        break;
    case 1:
        func_0CEF88();
        break;
    case 2:
        func_0CF970();
        break;
    case 3:
        func_0CF108();
        break;
    }
    func_0D0CA8();
}
