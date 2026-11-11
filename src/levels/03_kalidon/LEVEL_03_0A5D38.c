
extern char D_002CE2D8[];

void func_0A5EB8(char *);

void func_0A5D38(void)
{
    char *p = D_002CE2D8;
    char *end = p + 0xA8;

    do {
        func_0A5EB8(p);
        p += 0x18;
    } while (p < end);
}
