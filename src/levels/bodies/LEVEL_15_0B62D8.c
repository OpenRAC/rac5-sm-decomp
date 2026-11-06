extern unsigned int func_0B7098(void);
extern unsigned char D_00159B74;
extern unsigned char D_00159B75;
extern void func_0F4E88(int);
extern void func_0F00D0(int);
extern void func_0F4E80(int);
extern void func_0B7370(int);
extern void func_016A10(int, int);
extern void func_0B75C8(int);

void func_0B62D8(void)
{
    switch (func_0B7098()) {
    case 2:
        func_0B7370(0);
        break;
    case 1:
        if (D_00159B74 != 0) {
            func_0F4E88(0);
        } else if (D_00159B75 != 0) {
            func_0F00D0(0);
            func_0F4E80(0);
        }
        func_0B7370(0);
        func_016A10(4, 0);
        break;
    case 0:
    default:
        func_0B75C8(2);
        break;
    }
}
