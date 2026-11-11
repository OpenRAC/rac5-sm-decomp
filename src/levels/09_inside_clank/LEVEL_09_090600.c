extern int D_001E01DC;
extern unsigned char D_001E01D8;
extern void func_09DBC0(int);
extern void func_09DCB0(int);
extern void func_09DBE0(int);

void func_090600(int state)
{
    D_001E01DC = state;
    if (D_001E01D8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_09DBC0(5);
        func_09DCB0(1);
        break;
    case 1:
        func_09DBC0(5);
        func_09DCB0(0);
        break;
    case 2:
        func_09DBE0(5);
        break;
    }
}
