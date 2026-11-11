/* LEVEL_05:0x0CE260 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0CD748(void);
void func_0CE130(void);
void func_0CD8C8(void);
void func_0CF468(void);
extern int D_001F2808;

void func_0CE260(void)
{
    switch (D_001F2808) {
    case 0:
        break;
    case 1:
        func_0CD748();
        break;
    case 2:
        func_0CE130();
        break;
    case 3:
        func_0CD8C8();
        break;
    }
    func_0CF468();
}
