
extern char D_002A01D8[];

void func_0A0908(char *);

void func_0A0788(void)
{
    char *p = D_002A01D8;
    char *end = p + 0xA8;

    do {
        func_0A0908(p);
        p += 0x18;
    } while (p < end);
}
