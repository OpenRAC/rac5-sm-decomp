extern unsigned int func_0D6840(void);
extern unsigned char D_0021D574;
extern unsigned char D_0021D575;
extern void func_134300(int);
extern void func_12CFE0(int);
extern void func_1342F8(int);
extern void func_0D6B18(int);
extern void func_01A590(int, int);
extern void func_0D6D70(int);

void func_0D5A80(void)
{
    switch (func_0D6840()) {
    case 2:
        func_0D6B18(0);
        break;
    case 1:
        if (D_0021D574 != 0) {
            func_134300(0);
        } else if (D_0021D575 != 0) {
            func_12CFE0(0);
            func_1342F8(0);
        }
        func_0D6B18(0);
        func_01A590(4, 0);
        break;
    case 0:
    default:
        func_0D6D70(2);
        break;
    }
}
