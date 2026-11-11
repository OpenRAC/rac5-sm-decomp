/* LEVEL_08:0x0DAC60 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0DA148(void);
void func_0DAB30(void);
void func_0DA2C8(void);
void func_0DBE68(void);
extern int D_0024C348;

void func_0DAC60(void)
{
    switch (D_0024C348) {
    case 0:
        break;
    case 1:
        func_0DA148();
        break;
    case 2:
        func_0DAB30();
        break;
    case 3:
        func_0DA2C8();
        break;
    }
    func_0DBE68();
}
