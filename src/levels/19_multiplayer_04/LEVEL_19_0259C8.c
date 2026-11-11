extern int func_1135B8(void);
extern char *D_001A2C34;

void func_0259C8(void)
{
    if (func_1135B8() != 0) {
        unsigned char *value = (unsigned char *)(D_001A2C34 + 0x1c7d);
        if (*value < 12) ++*value;
    }
}
