extern unsigned int func_0C4F98(void);
extern unsigned char D_00164274;
extern unsigned char D_00164275;
extern void func_130C48(int);
extern void func_105968(int);
extern void func_130A30(int);
extern void func_0C5270(int);
extern void func_016E40(int, int);
extern void func_0C54C8(int);

void func_0C41D8(int unused)
{
    switch (func_0C4F98()) {
    case 2:
        func_0C5270(0);
        break;
    case 1:
        if (D_00164274 != 0) {
            func_130C48(0);
        } else if (D_00164275 != 0) {
            func_105968(0);
            func_130A30(0);
        }
        func_0C5270(0);
        func_016E40(4, 0);
        break;
    case 0:
    default:
        func_0C54C8(2);
        break;
    }
}
