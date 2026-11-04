
extern char D_002CDC58[];

void func_0AB348(char *);

void func_0AB1C8(void)
{
    char *p = D_002CDC58;
    char *end = p + 0xA8;

    do {
        func_0AB348(p);
        p += 0x18;
    } while (p < end);
}
