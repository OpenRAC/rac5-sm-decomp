extern char *func_024628(unsigned int, long long);

void func_024368(void)
{
    unsigned int index = 0;
    do {
        char *item = func_024628(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
