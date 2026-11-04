int func_08F9C8(void);
void func_000000(int);

void func_08F9D8(void)
{
    int a = func_08F9C8();

    while (func_08F9C8() == a) {
        func_000000(1000);
    }
}
