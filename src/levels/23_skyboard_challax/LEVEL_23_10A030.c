/* LEVEL_23:0x10A030 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_001EA8A8[];
extern char D_001EA8B0[];
extern char D_001EA8B8[];
extern char D_001EA8C0[];
extern char D_001EA8C8[];
extern char D_001EA8D0[];
extern int strcasecmp(const char *a, const char *b);
extern void func_109D70(const char *src, char *buf);

int func_10A030(const char *src, char *out)
{
    char buf[0x200];

    func_109D70(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_001EA8A8) || !strcasecmp(buf, D_001EA8B0) || !strcasecmp(buf, D_001EA8B8)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_001EA8C0) || !strcasecmp(buf, D_001EA8C8) || !strcasecmp(buf, D_001EA8D0))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
