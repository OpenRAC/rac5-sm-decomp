extern unsigned int func_0C5690(void);
extern unsigned char D_001A63A4;
extern unsigned char D_001A63A5;
extern void func_125458(int);
extern void func_10B098(int);
extern void func_125450(int);
extern void func_0C5968(int);
extern void func_018518(int, int);
extern void func_0C5BC0(int);

void func_0C48D0(void)
{
    switch (func_0C5690()) {
    case 2:
        func_0C5968(0);
        break;
    case 1:
        if (D_001A63A4 != 0) {
            func_125458(0);
        } else if (D_001A63A5 != 0) {
            func_10B098(0);
            func_125450(0);
        }
        func_0C5968(0);
        func_018518(4, 0);
        break;
    case 0:
    default:
        func_0C5BC0(2);
        break;
    }
}
