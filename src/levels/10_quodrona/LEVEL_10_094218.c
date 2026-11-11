extern int D_001FF3DC;
extern unsigned char D_001FF3D8;
extern void func_0A1A28(int);
extern void func_0A1B18(int);
extern void func_0A1A48(int);

void func_094218(int state)
{
    D_001FF3DC = state;
    if (D_001FF3D8 != 0) {
        if (state == 0) {
            state = 1;
        } else if (state == 1) {
            state = 0;
        }
    }
    switch (state) {
    case 0:
        func_0A1A28(5);
        func_0A1B18(1);
        break;
    case 1:
        func_0A1A28(5);
        func_0A1B18(0);
        break;
    case 2:
        func_0A1A48(5);
        break;
    }
}
