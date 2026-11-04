int func_09A750(void);
void func_000000(int);

void func_09A760(void)
{
    int a = func_09A750();

    while (func_09A750() == a) {
        func_000000(1000);
    }
}
