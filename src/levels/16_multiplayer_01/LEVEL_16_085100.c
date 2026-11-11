extern int D_001A440C;
extern unsigned char D_001A4408;
extern void func_08FBC8(int);
extern void func_08FCC0(int);
extern void func_08FBE8(int);

void func_085100(int state)
{
    D_001A440C = state;
    if (D_001A4408 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_08FBC8(5);
        func_08FCC0(1);
        break;
    case 1:
        func_08FBC8(5);
        func_08FCC0(0);
        break;
    case 2:
        func_08FBE8(5);
        break;
    }
}
