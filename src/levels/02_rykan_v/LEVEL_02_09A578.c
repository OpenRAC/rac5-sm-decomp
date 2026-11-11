extern int D_0020B39C;
extern unsigned char D_0020B398;
extern void func_0A7220(int);
extern void func_0A7310(int);
extern void func_0A7240(int);

void func_09A578(int state)
{
    D_0020B39C = state;
    if (D_0020B398 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0A7220(5);
        func_0A7310(1);
        break;
    case 1:
        func_0A7220(5);
        func_0A7310(0);
        break;
    case 2:
        func_0A7240(5);
        break;
    }
}
