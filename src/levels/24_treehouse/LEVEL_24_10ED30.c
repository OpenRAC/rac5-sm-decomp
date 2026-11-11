/* LEVEL_24:0x10ED30 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_001E84A8[];
extern char D_001E84B0[];
extern char D_001E84B8[];
extern char D_001E84C0[];
extern char D_001E84C8[];
extern char D_001E84D0[];
extern int strcasecmp(const char *a, const char *b);
extern void func_10EA70(const char *src, char *buf);

int func_10ED30(const char *src, char *out)
{
    char buf[0x200];

    func_10EA70(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_001E84A8) || !strcasecmp(buf, D_001E84B0) || !strcasecmp(buf, D_001E84B8)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_001E84C0) || !strcasecmp(buf, D_001E84C8) || !strcasecmp(buf, D_001E84D0))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
