extern int D_00106AEC;
extern unsigned char D_00106AE8;
extern void func_07A2C8(int);
extern void func_07A3C0(int);
extern void func_07A2E8(int);

void func_072938(int state)
{
    D_00106AEC = state;
    if (D_00106AE8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_07A2C8(5);
        func_07A3C0(1);
        break;
    case 1:
        func_07A2C8(5);
        func_07A3C0(0);
        break;
    case 2:
        func_07A2E8(5);
        break;
    }
}
