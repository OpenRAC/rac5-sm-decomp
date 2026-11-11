extern int D_001E52DC;
extern unsigned char D_001E52D8;
extern void func_09B0E0(int);
extern void func_09B1D0(int);
extern void func_09B100(int);

void func_08CAF8(int state)
{
    D_001E52DC = state;
    if (D_001E52D8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_09B0E0(5);
        func_09B1D0(1);
        break;
    case 1:
        func_09B0E0(5);
        func_09B1D0(0);
        break;
    case 2:
        func_09B100(5);
        break;
    }
}
