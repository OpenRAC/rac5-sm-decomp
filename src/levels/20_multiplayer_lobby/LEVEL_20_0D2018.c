/* LEVEL_20:0x0D2018 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_0012D668[];
extern char D_0012D670[];
extern char D_0012D678[];
extern char D_0012D680[];
extern char D_0012D688[];
extern char D_0012D690[];
extern int strcasecmp(const char *a, const char *b);
extern void func_0D1D58(const char *src, char *buf);

int func_0D2018(const char *src, char *out)
{
    char buf[0x200];

    func_0D1D58(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_0012D668) || !strcasecmp(buf, D_0012D670) || !strcasecmp(buf, D_0012D678)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_0012D680) || !strcasecmp(buf, D_0012D688) || !strcasecmp(buf, D_0012D690))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
