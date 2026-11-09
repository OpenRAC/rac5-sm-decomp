/* LEVEL_18:0x0BE388 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0BD870(void);
void func_0BE258(void);
void func_0BD9F0(void);
void func_0BF590(void);
extern int D_001B27B8;

void func_0BE388(void)
{
    switch (D_001B27B8) {
    case 0:
        break;
    case 1:
        func_0BD870();
        break;
    case 2:
        func_0BE258();
        break;
    case 3:
        func_0BD9F0();
        break;
    }
    func_0BF590();
}
