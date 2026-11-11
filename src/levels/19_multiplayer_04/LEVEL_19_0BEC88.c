/* LEVEL_19:0x0BEC88 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0BE170(void);
void func_0BEB58(void);
void func_0BE2F0(void);
void func_0BFE90(void);
extern int D_001B24B8;

void func_0BEC88(void)
{
    switch (D_001B24B8) {
    case 0:
        break;
    case 1:
        func_0BE170();
        break;
    case 2:
        func_0BEB58();
        break;
    case 3:
        func_0BE2F0();
        break;
    }
    func_0BFE90();
}
