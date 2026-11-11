
extern char D_0026AFA8[];

void func_0952D0(char *);

void func_095120(void)
{
    char *p = D_0026AFA8;
    char *end = p + 0xA8;

    do {
        func_0952D0(p);
        p += 0x18;
    } while (p < end);
}
