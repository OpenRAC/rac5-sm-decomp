extern int D_001A558C;
extern unsigned char D_001A5588;
extern void func_08F460(int);
extern void func_08F558(int);
extern void func_08F480(int);

void func_0855B0(int state)
{
    D_001A558C = state;
    if (D_001A5588 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_08F460(5);
        func_08F558(1);
        break;
    case 1:
        func_08F460(5);
        func_08F558(0);
        break;
    case 2:
        func_08F480(5);
        break;
    }
}
