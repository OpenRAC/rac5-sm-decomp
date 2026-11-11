
extern char D_002CA958[];

void func_0ACA48(char *);

void func_0AC8C8(void)
{
    char *p = D_002CA958;
    char *end = p + 0xA8;

    do {
        func_0ACA48(p);
        p += 0x18;
    } while (p < end);
}
