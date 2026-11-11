void func_078370(char *object, int enabled)
{
    if (enabled != 0) {
        *(int *)(object + 0xC) = 2;
        return;
    }
    *(int *)(object + 0xC) = 0;
}
