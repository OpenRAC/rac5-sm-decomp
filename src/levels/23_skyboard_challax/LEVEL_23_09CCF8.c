
extern char D_00284898[];

void func_09CEA8(char *);

void func_09CCF8(void)
{
    char *p = D_00284898;
    char *end = p + 0xA8;

    do {
        func_09CEA8(p);
        p += 0x18;
    } while (p < end);
}
