/* LEVEL_17:0x0BE8F0 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0BDDD8(void);
void func_0BE7C0(void);
void func_0BDF58(void);
void func_0BFAF8(void);
extern int D_001A4938;

void func_0BE8F0(void)
{
    switch (D_001A4938) {
    case 0:
        break;
    case 1:
        func_0BDDD8();
        break;
    case 2:
        func_0BE7C0();
        break;
    case 3:
        func_0BDF58();
        break;
    }
    func_0BFAF8();
}
