
extern char D_0026B328[];

void func_0942E0(char *);

void func_094130(void)
{
    char *p = D_0026B328;
    char *end = p + 0xA8;

    do {
        func_0942E0(p);
        p += 0x18;
    } while (p < end);
}
