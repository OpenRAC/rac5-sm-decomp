extern unsigned int func_0E1A18(void);
extern unsigned char D_0024DDB4;
extern unsigned char D_0024DDB5;
extern void func_1473C0(int);
extern void func_140218(int);
extern void func_1473B8(int);
extern void func_0E1CF0(int);
extern void func_01B1A0(int, int);
extern void func_0E1F48(int);

void func_0E0C50(void)
{
    switch (func_0E1A18()) {
    case 2:
        func_0E1CF0(0);
        break;
    case 1:
        if (D_0024DDB4 != 0) {
            func_1473C0(0);
        } else if (D_0024DDB5 != 0) {
            func_140218(0);
            func_1473B8(0);
        }
        func_0E1CF0(0);
        func_01B1A0(4, 0);
        break;
    case 0:
    default:
        func_0E1F48(2);
        break;
    }
}
