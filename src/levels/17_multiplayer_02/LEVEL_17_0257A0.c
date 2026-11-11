extern int func_1125A0(void);
extern char *D_001950B4;

void func_0257A0(void)
{
    if (func_1125A0() != 0) {
        unsigned char *value = (unsigned char *)(D_001950B4 + 0x1c7d);
        if (*value < 12) ++*value;
    }
}
