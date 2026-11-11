
extern char D_002B3458[];

void func_0A6138(char *);

void func_0A5FB8(void)
{
    char *p = D_002B3458;
    char *end = p + 0xA8;

    do {
        func_0A6138(p);
        p += 0x18;
    } while (p < end);
}
