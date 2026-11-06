extern int func_0E5980(void);
extern char *D_00104194;

void func_022940(void)
{
    if (func_0E5980() != 0) {
        unsigned char *value = (unsigned char *)(D_00104194 + 0x1c7d);
        if (*value < 12) ++*value;
    }
}
