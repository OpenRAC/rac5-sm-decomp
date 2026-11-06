extern int func_112E10(void);
extern char *D_001A1AB4;

void func_025E20(void)
{
    if (func_112E10() != 0) {
        unsigned char *value = (unsigned char *)(D_001A1AB4 + 0x1c7d);
        if (*value < 12) ++*value;
    }
}
