/* LEVEL_24:0x0C95F8 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0C8AE0(void);
void func_0C94C8(void);
void func_0C8C60(void);
void func_0CA800(void);
extern int D_001D4108;

void func_0C95F8(void)
{
    switch (D_001D4108) {
    case 0:
        break;
    case 1:
        func_0C8AE0();
        break;
    case 2:
        func_0C94C8();
        break;
    case 3:
        func_0C8C60();
        break;
    }
    func_0CA800();
}
