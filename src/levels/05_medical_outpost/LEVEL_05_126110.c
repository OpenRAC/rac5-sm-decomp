extern int D_001F5E1C;
extern void func_10D0C8(int);
void func_126110(void)
{
    int value = D_001F5E1C;
    if (value != 0) {
        func_10D0C8(value);
        D_001F5E1C = 0;
    }
}