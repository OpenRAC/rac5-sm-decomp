int func_07A830(void);
void func_000000(int);

void func_07A840(void)
{
    int a = func_07A830();

    while (func_07A830() == a) {
        func_000000(1000);
    }
}
