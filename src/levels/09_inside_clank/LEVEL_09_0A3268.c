
extern char D_0029ABD8[];

void func_0A33E8(char *);

void func_0A3268(void)
{
    char *p = D_0029ABD8;
    char *end = p + 0xA8;

    do {
        func_0A33E8(p);
        p += 0x18;
    } while (p < end);
}
