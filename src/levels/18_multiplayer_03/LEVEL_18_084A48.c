extern int D_001A588C;
extern unsigned char D_001A5888;
extern void func_08EBE0(int);
extern void func_08ECD8(int);
extern void func_08EC00(int);

void func_084A48(int state)
{
    D_001A588C = state;
    if (D_001A5888 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_08EBE0(5);
        func_08ECD8(1);
        break;
    case 1:
        func_08EBE0(5);
        func_08ECD8(0);
        break;
    case 2:
        func_08EC00(5);
        break;
    }
}
