extern unsigned int func_0D5000(void);
extern unsigned char D_001F4274;
extern unsigned char D_001F4275;
extern void func_131920(int);
extern void func_12A658(int);
extern void func_131918(int);
extern void func_0D52D8(int);
extern void func_019DC0(int, int);
extern void func_0D5530(int);

void func_0D4240(void)
{
    switch (func_0D5000()) {
    case 2:
        func_0D52D8(0);
        break;
    case 1:
        if (D_001F4274 != 0) {
            func_131920(0);
        } else if (D_001F4275 != 0) {
            func_12A658(0);
            func_131918(0);
        }
        func_0D52D8(0);
        func_019DC0(4, 0);
        break;
    case 0:
    default:
        func_0D5530(2);
        break;
    }
}
