
extern char D_001230C8[];

void func_00ACA8(char *);

void func_00AB28(void)
{
    char *p = D_001230C8;
    char *end = p + 0xA8;

    do {
        func_00ACA8(p);
        p += 0x18;
    } while (p < end);
}
