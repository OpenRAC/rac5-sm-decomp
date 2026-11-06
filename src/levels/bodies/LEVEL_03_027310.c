extern char *D_0020C62C;
extern void func_0A6CD8(void);

int func_027310(int force)
{
    char *record = D_0020C62C;
    if (record == 0) {
        return 0;
    }
    if ((*(unsigned int *)(record + 4) & 2) == 0 || force != 0) {
        *(unsigned int *)(record + 4) |= 2;
        func_0A6CD8();
        return 1;
    }
    return 0;
}
