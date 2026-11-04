int func_08F4E8(void);
void func_000000(int);

void func_08F4F8(void)
{
    int a = func_08F4E8();

    while (func_08F4E8() == a) {
        func_000000(1000);
    }
}
