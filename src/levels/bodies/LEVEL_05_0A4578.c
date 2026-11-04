
extern char D_0029F318[];

void func_0A46F8(char *);

void func_0A4578(void)
{
    char *p = D_0029F318;
    char *end = p + 0xA8;

    do {
        func_0A46F8(p);
        p += 0x18;
    } while (p < end);
}
