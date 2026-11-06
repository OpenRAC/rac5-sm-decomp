extern unsigned int func_0C5128(void);
extern unsigned char D_001B4224;
extern unsigned char D_001B4225;
extern void func_124AA8(int);
extern void func_10A7D0(int);
extern void func_124AA0(int);
extern void func_0C5400(int);
extern void func_0181E0(int, int);
extern void func_0C5658(int);

void func_0C4368(void)
{
    switch (func_0C5128()) {
    case 2:
        func_0C5400(0);
        break;
    case 1:
        if (D_001B4224 != 0) {
            func_124AA8(0);
        } else if (D_001B4225 != 0) {
            func_10A7D0(0);
            func_124AA0(0);
        }
        func_0C5400(0);
        func_0181E0(4, 0);
        break;
    case 0:
    default:
        func_0C5658(2);
        break;
    }
}
