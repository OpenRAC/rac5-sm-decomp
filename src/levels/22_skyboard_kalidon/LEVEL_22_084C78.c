extern int D_0015575C;
extern unsigned char D_00155758;
extern void func_08EF88(int);
extern void func_08F078(int);
extern void func_08EFA8(int);

void func_084C78(int state)
{
    D_0015575C = state;
    if (D_00155758 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_08EF88(5);
        func_08F078(1);
        break;
    case 1:
        func_08EF88(5);
        func_08F078(0);
        break;
    case 2:
        func_08EFA8(5);
        break;
    }
}
