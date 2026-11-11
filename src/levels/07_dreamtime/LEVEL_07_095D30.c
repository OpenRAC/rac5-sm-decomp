extern int D_0020A6DC;
extern unsigned char D_0020A6D8;
extern void func_0A2910(int);
extern void func_0A2A00(int);
extern void func_0A2930(int);

void func_095D30(int state)
{
    D_0020A6DC = state;
    if (D_0020A6D8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0A2910(5);
        func_0A2A00(1);
        break;
    case 1:
        func_0A2910(5);
        func_0A2A00(0);
        break;
    case 2:
        func_0A2930(5);
        break;
    }
}
