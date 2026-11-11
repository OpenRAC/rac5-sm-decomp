extern int func_114140(void);
extern int func_114348(void *record);

int func_114510(void *record)
{
    int r = func_114140();

    if (r == -0x5431300)
        r = func_114348(record);
    return r;
}
