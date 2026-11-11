
extern char D_0025C2A8[];

void func_0947C8(char *);

void func_094618(void)
{
    char *p = D_0025C2A8;
    char *end = p + 0xA8;

    do {
        func_0947C8(p);
        p += 0x18;
    } while (p < end);
}
