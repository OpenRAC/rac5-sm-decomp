extern unsigned int func_0D8AB8(void);
extern unsigned char D_002191F4;
extern unsigned char D_002191F5;
extern void func_138F30(int);
extern void func_131CE0(int);
extern void func_138F28(int);
extern void func_0D8D90(int);
extern void func_01AEE8(int, int);
extern void func_0D8FE8(int);

void func_0D7CF8(int unused)
{
    switch (func_0D8AB8()) {
    case 2:
        func_0D8D90(0);
        break;
    case 1:
        if (D_002191F4 != 0) {
            func_138F30(0);
        } else if (D_002191F5 != 0) {
            func_131CE0(0);
            func_138F28(0);
        }
        func_0D8D90(0);
        func_01AEE8(4, 0);
        break;
    case 0:
    default:
        func_0D8FE8(2);
        break;
    }
}
