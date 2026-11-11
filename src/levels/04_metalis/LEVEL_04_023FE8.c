extern char *func_0242A8(unsigned int, long long);

void func_023FE8(void)
{
    unsigned int index = 0;
    do {
        char *item = func_0242A8(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
