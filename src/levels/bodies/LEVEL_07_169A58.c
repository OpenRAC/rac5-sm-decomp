extern void func_16CAE0(int);

void func_169A58(char *unused, char *record)
{
    int value = *(int *)(record + 0xdc);
    if (value != 0) {
        func_16CAE0(value);
        *(int *)(record + 0xdc) = 0;
    }
}
