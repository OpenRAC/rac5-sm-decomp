extern int D_001F089C;
extern void func_10A078(int);
void func_123730(void)
{
    int value = D_001F089C;
    if (value != 0) {
        func_10A078(value);
        D_001F089C = 0;
    }
}