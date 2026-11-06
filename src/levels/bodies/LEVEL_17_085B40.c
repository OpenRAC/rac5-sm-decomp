extern int D_00197A0C;
extern unsigned char D_00197A08;
extern void func_08F0C0(int);
extern void func_08F1B8(int);
extern void func_08F0E0(int);

void func_085B40(int state)
{
    D_00197A0C = state;
    if (D_00197A08 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_08F0C0(5);
        func_08F1B8(1);
        break;
    case 1:
        func_08F0C0(5);
        func_08F1B8(0);
        break;
    case 2:
        func_08F0E0(5);
        break;
    }
}
