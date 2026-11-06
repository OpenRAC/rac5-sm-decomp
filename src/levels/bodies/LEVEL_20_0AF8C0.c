extern unsigned int func_0B0680(void);
extern unsigned char D_00115484;
extern unsigned char D_00115485;
extern void func_0F7B18(int);
extern void func_0E0E28(int);
extern void func_0F7B10(int);
extern void func_0B0958(int);
extern void func_016950(int, int);
extern void func_0B0BB0(int);

void func_0AF8C0(void)
{
    switch (func_0B0680()) {
    case 2:
        func_0B0958(0);
        break;
    case 1:
        if (D_00115484 != 0) {
            func_0F7B18(0);
        } else if (D_00115485 != 0) {
            func_0E0E28(0);
            func_0F7B10(0);
        }
        func_0B0958(0);
        func_016950(4, 0);
        break;
    case 0:
    default:
        func_0B0BB0(2);
        break;
    }
}
