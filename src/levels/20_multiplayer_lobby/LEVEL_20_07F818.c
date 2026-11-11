
extern char D_0018E7E8[];

void func_07F9C8(char *);

void func_07F818(void)
{
    char *p = D_0018E7E8;
    char *end = p + 0xA8;

    do {
        func_07F9C8(p);
        p += 0x18;
    } while (p < end);
}
