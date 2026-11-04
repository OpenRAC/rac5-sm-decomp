int func_08F630(void);
void func_000000(int);

void func_08F640(void)
{
    int a = func_08F630();

    while (func_08F630() == a) {
        func_000000(1000);
    }
}
