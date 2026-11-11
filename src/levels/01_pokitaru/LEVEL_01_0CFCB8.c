/* LEVEL_01:0x0CFCB8 -- dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0CF1A0(void);
void func_0CFB88(void);
void func_0CF320(void);
void func_0D0EC0(void);
extern int D_00203488;

void func_0CFCB8(void)
{
    switch (D_00203488) {
    case 0:
        break;
    case 1:
        func_0CF1A0();
        break;
    case 2:
        func_0CFB88();
        break;
    case 3:
        func_0CF320();
        break;
    }
    func_0D0EC0();
}
