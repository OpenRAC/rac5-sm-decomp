extern int D_0023F29C;
extern unsigned char D_0023F298;
extern void func_0AB208(int);
extern void func_0AB2F8(int);
extern void func_0AB228(int);

void func_09BDC8(int state)
{
    D_0023F29C = state;
    if (D_0023F298 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0AB208(5);
        func_0AB2F8(1);
        break;
    case 1:
        func_0AB208(5);
        func_0AB2F8(0);
        break;
    case 2:
        func_0AB228(5);
        break;
    }
}
