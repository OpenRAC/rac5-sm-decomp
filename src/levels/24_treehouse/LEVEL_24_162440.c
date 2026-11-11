extern void func_162418(int);
void func_162440(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_162418(value);
        *slot = 0;
    }
}