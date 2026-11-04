
extern char D_001CB498[];

void func_086A00(char *);

void func_086880(void)
{
    char *p = D_001CB498;
    char *end = p + 0xA8;

    do {
        func_086A00(p);
        p += 0x18;
    } while (p < end);
}
