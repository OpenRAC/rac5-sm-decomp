extern int func_111BC8(void);
extern char *D_001A2F34;

void func_0253D0(void)
{
    if (func_111BC8() != 0) {
        unsigned char *value = (unsigned char *)(D_001A2F34 + 0x1c7d);
        if (*value < 12) ++*value;
    }
}
