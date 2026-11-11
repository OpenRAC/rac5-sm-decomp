
extern char D_003026D8[];

void func_0B0A30(char *);

void func_0B08B0(void)
{
    char *p = D_003026D8;
    char *end = p + 0xA8;

    do {
        func_0B0A30(p);
        p += 0x18;
    } while (p < end);
}
