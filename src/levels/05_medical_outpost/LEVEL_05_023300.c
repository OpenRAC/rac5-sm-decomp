extern char *func_0235C0(unsigned int, long long);

void func_023300(void)
{
    unsigned int index = 0;
    do {
        char *item = func_0235C0(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
