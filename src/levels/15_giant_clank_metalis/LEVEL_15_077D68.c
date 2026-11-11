extern int D_0014B05C;
extern unsigned char D_0014B058;
extern void func_081270(int);
extern void func_081360(int);
extern void func_081290(int);

void func_077D68(int state)
{
    D_0014B05C = state;
    if (D_0014B058 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_081270(5);
        func_081360(1);
        break;
    case 1:
        func_081270(5);
        func_081360(0);
        break;
    case 2:
        func_081290(5);
        break;
    }
}
