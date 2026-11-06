extern int D_001F599C;
extern void func_107258(int);
void func_120DF0(void)
{
    int value = D_001F599C;
    if (value != 0) {
        func_107258(value);
        D_001F599C = 0;
    }
}