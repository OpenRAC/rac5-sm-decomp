extern unsigned int func_0CD888(void);
extern unsigned char D_001D82F4;
extern unsigned char D_001D82F5;
extern void func_17D928(int);
extern void func_11FC10(int);
extern void func_17D710(int);
extern void func_0CDB60(int);
extern void func_019338(int, int);
extern void func_0CDDB8(int);

void func_0CCAC8(void)
{
    switch (func_0CD888()) {
    case 2:
        func_0CDB60(0);
        break;
    case 1:
        if (D_001D82F4 != 0) {
            func_17D928(0);
        } else if (D_001D82F5 != 0) {
            func_11FC10(0);
            func_17D710(0);
        }
        func_0CDB60(0);
        func_019338(4, 0);
        break;
    case 0:
    default:
        func_0CDDB8(2);
        break;
    }
}
