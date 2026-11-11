extern void func_16ED60(int);
void func_16ED88(int *slot)
{
    int value = *slot;
    if (value != 0) {
        func_16ED60(value);
        *slot = 0;
    }
}