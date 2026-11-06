extern unsigned int func_0D03B0(void);
extern unsigned char D_001D5B74;
extern unsigned char D_001D5B75;
extern void func_12B9C0(int);
extern void func_1247E0(int);
extern void func_12B9B8(int);
extern void func_0D0688(int);
extern void func_018E18(int, int);
extern void func_0D08E0(int);

void func_0CF5E8(void)
{
    switch (func_0D03B0()) {
    case 2:
        func_0D0688(0);
        break;
    case 1:
        if (D_001D5B74 != 0) {
            func_12B9C0(0);
        } else if (D_001D5B75 != 0) {
            func_1247E0(0);
            func_12B9B8(0);
        }
        func_0D0688(0);
        func_018E18(4, 0);
        break;
    case 0:
    default:
        func_0D08E0(2);
        break;
    }
}
