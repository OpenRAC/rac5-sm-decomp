extern int func_1149B0(void);
extern int func_114BB8(void *record);

int func_114D80(void *record)
{
    int r = func_1149B0();

    if (r == -0x5431300)
        r = func_114BB8(record);
    return r;
}
