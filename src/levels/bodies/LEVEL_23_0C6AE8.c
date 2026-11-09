/* LEVEL_23:0x0C6AE8 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0C5FD0(void);
void func_0C69B8(void);
void func_0C6150(void);
void func_0C7CF0(void);
extern int D_001D6888;

void func_0C6AE8(void)
{
    switch (D_001D6888) {
    case 0:
        break;
    case 1:
        func_0C5FD0();
        break;
    case 2:
        func_0C69B8();
        break;
    case 3:
        func_0C6150();
        break;
    }
    func_0C7CF0();
}
