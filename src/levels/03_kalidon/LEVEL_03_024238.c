extern char *func_0244F8(unsigned int, long long);

void func_024238(void)
{
    unsigned int index = 0;
    do {
        char *item = func_0244F8(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
