
extern char D_002C8D58[];

void func_0A8138(char *);

void func_0A7FB8(void)
{
    char *p = D_002C8D58;
    char *end = p + 0xA8;

    do {
        func_0A8138(p);
        p += 0x18;
    } while (p < end);
}
