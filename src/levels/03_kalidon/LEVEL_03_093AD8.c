extern int D_0020EA5C;
extern unsigned char D_0020EA58;
extern void func_0A0690(int);
extern void func_0A0780(int);
extern void func_0A06B0(int);

void func_093AD8(int state)
{
    D_0020EA5C = state;
    if (D_0020EA58 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0A0690(5);
        func_0A0780(1);
        break;
    case 1:
        func_0A0690(5);
        func_0A0780(0);
        break;
    case 2:
        func_0A06B0(5);
        break;
    }
}
