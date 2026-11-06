extern unsigned int func_0D7E98(void);
extern unsigned char D_0020DEF4;
extern unsigned char D_0020DEF5;
extern void func_133D78(int);
extern void func_12CB40(int);
extern void func_133D70(int);
extern void func_0D8170(int);
extern void func_019EA8(int, int);
extern void func_0D83C8(int);

void func_0D70D8(void)
{
    switch (func_0D7E98()) {
    case 2:
        func_0D8170(0);
        break;
    case 1:
        if (D_0020DEF4 != 0) {
            func_133D78(0);
        } else if (D_0020DEF5 != 0) {
            func_12CB40(0);
            func_133D70(0);
        }
        func_0D8170(0);
        func_019EA8(4, 0);
        break;
    case 0:
    default:
        func_0D83C8(2);
        break;
    }
}
