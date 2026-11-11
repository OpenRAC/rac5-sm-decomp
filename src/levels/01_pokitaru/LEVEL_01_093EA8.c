extern int D_001F63DC;
extern unsigned char D_001F63D8;
extern void func_0A0908(int);
extern void func_0A09F8(int);
extern void func_0A0928(int);

void func_093EA8(int state)
{
    D_001F63DC = state;
    if (D_001F63D8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0A0908(5);
        func_0A09F8(1);
        break;
    case 1:
        func_0A0908(5);
        func_0A09F8(0);
        break;
    case 2:
        func_0A0928(5);
        break;
    }
}
