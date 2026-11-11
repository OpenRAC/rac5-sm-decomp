
extern char D_002BC858[];

void func_0A7250(char *);

void func_0A70D0(void)
{
    char *p = D_002BC858;
    char *end = p + 0xA8;

    do {
        func_0A7250(p);
        p += 0x18;
    } while (p < end);
}
