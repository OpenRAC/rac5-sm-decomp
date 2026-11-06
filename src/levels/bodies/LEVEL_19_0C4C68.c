extern unsigned int func_0C5A28(void);
extern unsigned char D_001B3F24;
extern unsigned char D_001B3F25;
extern void func_126348(int);
extern void func_10C1C0(int);
extern void func_126340(int);
extern void func_0C5D00(int);
extern void func_018898(int, int);
extern void func_0C5F58(int);

void func_0C4C68(void)
{
    switch (func_0C5A28()) {
    case 2:
        func_0C5D00(0);
        break;
    case 1:
        if (D_001B3F24 != 0) {
            func_126348(0);
        } else if (D_001B3F25 != 0) {
            func_10C1C0(0);
            func_126340(0);
        }
        func_0C5D00(0);
        func_018898(4, 0);
        break;
    case 0:
    default:
        func_0C5F58(2);
        break;
    }
}
