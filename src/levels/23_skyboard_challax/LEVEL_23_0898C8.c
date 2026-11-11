extern int D_001C97DC;
extern unsigned char D_001C97D8;
extern void func_097650(int);
extern void func_097740(int);
extern void func_097670(int);

void func_0898C8(int state)
{
    D_001C97DC = state;
    if (D_001C97D8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_097650(5);
        func_097740(1);
        break;
    case 1:
        func_097650(5);
        func_097740(0);
        break;
    case 2:
        func_097670(5);
        break;
    }
}
