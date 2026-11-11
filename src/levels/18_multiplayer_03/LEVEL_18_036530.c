extern int func_036520(void);

int func_036530(char *record)
{
    if (func_036520() != 0)
        return *(int *)(record + 0x540);
    return 0;
}
