extern char *func_01E990(unsigned int, long long);

void func_01E6D0(void)
{
    unsigned int index = 0;
    do {
        char *item = func_01E990(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
