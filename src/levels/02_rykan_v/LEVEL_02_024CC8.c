extern char *func_024F88(unsigned int, long long);

void func_024CC8(void)
{
    unsigned int index = 0;
    do {
        char *item = func_024F88(index, -1LL);
        if (item != 0) {
            *(int *)(item + 0x44) = 0;
        }
        index++;
    } while (index < 25);
}
