extern int D_001E575C;
extern unsigned char D_001E5758;
extern void func_09EEC0(int);
extern void func_09EFB0(int);
extern void func_09EEE0(int);

void func_0915A0(int state)
{
    D_001E575C = state;
    if (D_001E5758 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_09EEC0(5);
        func_09EFB0(1);
        break;
    case 1:
        func_09EEC0(5);
        func_09EFB0(0);
        break;
    case 2:
        func_09EEE0(5);
        break;
    }
}
