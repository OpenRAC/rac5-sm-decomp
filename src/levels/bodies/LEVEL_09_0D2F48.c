extern unsigned int func_0D3D08(void);
extern unsigned char D_001EECF4;
extern unsigned char D_001EECF5;
extern void func_12EEB8(int);
extern void func_127C78(int);
extern void func_12EEB0(int);
extern void func_0D3FE0(int);
extern void func_019C18(int, int);
extern void func_0D4238(int);

void func_0D2F48(void)
{
    switch (func_0D3D08()) {
    case 2:
        func_0D3FE0(0);
        break;
    case 1:
        if (D_001EECF4 != 0) {
            func_12EEB8(0);
        } else if (D_001EECF5 != 0) {
            func_127C78(0);
            func_12EEB0(0);
        }
        func_0D3FE0(0);
        func_019C18(4, 0);
        break;
    case 0:
    default:
        func_0D4238(2);
        break;
    }
}
