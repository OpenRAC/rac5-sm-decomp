/* LEVEL_04:0x0D5550 -- placement copy of LEVEL_01_0CFCB8.c: dispatches on a state word to one of three helpers, then calls the common finisher. */

void func_0D4A38(void);
void func_0D5420(void);
void func_0D4BB8(void);
void func_0D6758(void);
extern int D_0021C948;

void func_0D5550(void)
{
    switch (D_0021C948) {
    case 0:
        break;
    case 1:
        func_0D4A38();
        break;
    case 2:
        func_0D5420();
        break;
    case 3:
        func_0D4BB8();
        break;
    }
    func_0D6758();
}
