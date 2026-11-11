extern unsigned int func_0DD3E8(void);
extern unsigned char D_00219EB4;
extern unsigned char D_00219EB5;
extern void func_13C338(int);
extern void func_135090(int);
extern void func_13C330(int);
extern void func_0DD6C0(int);
extern void func_01B188(int, int);
extern void func_0DD918(int);

void func_0DC628(int unused)
{
    switch (func_0DD3E8()) {
    case 2:
        func_0DD6C0(0);
        break;
    case 1:
        if (D_00219EB4 != 0) {
            func_13C338(0);
        } else if (D_00219EB5 != 0) {
            func_135090(0);
            func_13C330(0);
        }
        func_0DD6C0(0);
        func_01B188(4, 0);
        break;
    case 0:
    default:
        func_0DD918(2);
        break;
    }
}
