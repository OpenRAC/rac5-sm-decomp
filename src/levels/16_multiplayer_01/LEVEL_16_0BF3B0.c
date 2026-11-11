/* LEVEL_16:0x0BF3B0 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0BE898(void);
void func_0BF280(void);
void func_0BEA18(void);
void func_0C05B8(void);
extern int D_001B1338;

void func_0BF3B0(void)
{
    switch (D_001B1338) {
    case 0:
        break;
    case 1:
        func_0BE898();
        break;
    case 2:
        func_0BF280();
        break;
    case 3:
        func_0BEA18();
        break;
    }
    func_0C05B8();
}
