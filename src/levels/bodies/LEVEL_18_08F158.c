int func_08F148(void);
void func_000000(int);

void func_08F158(void)
{
    int a = func_08F148();

    while (func_08F148() == a) {
        func_000000(1000);
    }
}
