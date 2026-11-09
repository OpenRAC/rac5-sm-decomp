/* LEVEL_06:0x10F098 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_002065A8[];
extern char D_002065B0[];
extern char D_002065B8[];
extern char D_002065C0[];
extern char D_002065C8[];
extern char D_002065D0[];
extern int strcasecmp(const char *a, const char *b);
extern void func_10EDD8(const char *src, char *buf);

int func_10F098(const char *src, char *out)
{
    char buf[0x200];

    func_10EDD8(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_002065A8) || !strcasecmp(buf, D_002065B0) || !strcasecmp(buf, D_002065B8)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_002065C0) || !strcasecmp(buf, D_002065C8) || !strcasecmp(buf, D_002065D0))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
