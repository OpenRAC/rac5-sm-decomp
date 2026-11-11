/* LEVEL_02:0x0D6648 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0D5B30(void);
void func_0D6518(void);
void func_0D5CB0(void);
void func_0D7850(void);
extern int D_00218448;

void func_0D6648(void)
{
    switch (D_00218448) {
    case 0:
        break;
    case 1:
        func_0D5B30();
        break;
    case 2:
        func_0D6518();
        break;
    case 3:
        func_0D5CB0();
        break;
    }
    func_0D7850();
}
