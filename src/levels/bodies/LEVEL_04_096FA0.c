extern int D_0020F89C;
extern unsigned char D_0020F898;
extern void func_0A5B20(int);
extern void func_0A5C10(int);
extern void func_0A5B40(int);

void func_096FA0(int state)
{
    D_0020F89C = state;
    if (D_0020F898 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0A5B20(5);
        func_0A5C10(1);
        break;
    case 1:
        func_0A5B20(5);
        func_0A5C10(0);
        break;
    case 2:
        func_0A5B40(5);
        break;
    }
}
