
extern char D_00209018[];

void func_094748(char *);

void func_094598(void)
{
    char *p = D_00209018;
    char *end = p + 0xA8;

    do {
        func_094748(p);
        p += 0x18;
    } while (p < end);
}
