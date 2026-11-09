/* LEVEL_15:0x0DCE28 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_0016BEA8[];
extern char D_0016BEB0[];
extern char D_0016BEB8[];
extern char D_0016BEC0[];
extern char D_0016BEC8[];
extern char D_0016BED0[];
extern int strcasecmp(const char *a, const char *b);
extern void func_0DCB68(const char *src, char *buf);

int func_0DCE28(const char *src, char *out)
{
    char buf[0x200];

    func_0DCB68(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_0016BEA8) || !strcasecmp(buf, D_0016BEB0) || !strcasecmp(buf, D_0016BEB8)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_0016BEC0) || !strcasecmp(buf, D_0016BEC8) || !strcasecmp(buf, D_0016BED0))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
