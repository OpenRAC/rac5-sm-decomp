extern int D_001C705C;
extern unsigned char D_001C7058;
extern void func_09A188(int);
extern void func_09A278(int);
extern void func_09A1A8(int);

void func_08CCA8(int state)
{
    D_001C705C = state;
    if (D_001C7058 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_09A188(5);
        func_09A278(1);
        break;
    case 1:
        func_09A188(5);
        func_09A278(0);
        break;
    case 2:
        func_09A1A8(5);
        break;
    }
}
