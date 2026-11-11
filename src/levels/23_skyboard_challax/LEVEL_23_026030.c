extern char *D_001C73AC;

int func_026030(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_001C73AC + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
