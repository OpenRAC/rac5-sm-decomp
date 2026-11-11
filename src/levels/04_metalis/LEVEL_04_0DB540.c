extern unsigned int func_0DC308(void);
extern unsigned char D_0021E3B4;
extern unsigned char D_0021E3B5;
extern void func_1423C0(int);
extern void func_13B160(int);
extern void func_1423B8(int);
extern void func_0DC5E0(int);
extern void func_01A4A8(int, int);
extern void func_0DC838(int);

void func_0DB540(int unused)
{
    switch (func_0DC308()) {
    case 2:
        func_0DC5E0(0);
        break;
    case 1:
        if (D_0021E3B4 != 0) {
            func_1423C0(0);
        } else if (D_0021E3B5 != 0) {
            func_13B160(0);
            func_1423B8(0);
        }
        func_0DC5E0(0);
        func_01A4A8(4, 0);
        break;
    case 0:
    default:
        func_0DC838(2);
        break;
    }
}
