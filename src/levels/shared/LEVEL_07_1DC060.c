int func_1DC060(int unused, const int *values)
{
    unsigned int i;
    for (i = 0; i < 4; i++) {
        if (values[i] != 0)
            return 0;
    }
    return 1;
}
