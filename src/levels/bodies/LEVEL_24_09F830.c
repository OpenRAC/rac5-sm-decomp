
extern char D_0027F318[];

void func_09F9B0(char *);

void func_09F830(void)
{
    char *p = D_0027F318;
    char *end = p + 0xA8;

    do {
        func_09F9B0(p);
        p += 0x18;
    } while (p < end);
}
