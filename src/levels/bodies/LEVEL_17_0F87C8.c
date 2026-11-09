/* LEVEL_17:0x0F87C8 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_001BFA68[];
extern char D_001BFA70[];
extern char D_001BFA78[];
extern char D_001BFA80[];
extern char D_001BFA88[];
extern char D_001BFA90[];
extern int strcasecmp(const char *a, const char *b);
extern void func_0F8508(const char *src, char *buf);

int func_0F87C8(const char *src, char *out)
{
    char buf[0x200];

    func_0F8508(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_001BFA68) || !strcasecmp(buf, D_001BFA70) || !strcasecmp(buf, D_001BFA78)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_001BFA80) || !strcasecmp(buf, D_001BFA88) || !strcasecmp(buf, D_001BFA90))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
