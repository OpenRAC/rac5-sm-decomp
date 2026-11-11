/* FRONTEND:0x003918 -- placement copy of LEVEL_01_028300.c. */
extern char *D_00027E9C;

int func_003918(void)
{
    int fallback[4];
    int *value;
    fallback[0] = 3;
    value = (int *)(D_00027E9C + 0x1c78);
    if (*value > 2)
        value = fallback;
    return *value;
}
