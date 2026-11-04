
extern char D_0026B128[];

void func_094B60(char *);

void func_0949B0(void)
{
    char *p = D_0026B128;
    char *end = p + 0xA8;

    do {
        func_094B60(p);
        p += 0x18;
    } while (p < end);
}
