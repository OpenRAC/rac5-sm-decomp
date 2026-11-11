/* LEVEL_22:0x0F2F88 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_00174BA8[];
extern char D_00174BB0[];
extern char D_00174BB8[];
extern char D_00174BC0[];
extern char D_00174BC8[];
extern char D_00174BD0[];
extern int strcasecmp(const char *a, const char *b);
extern void func_0F2CC8(const char *src, char *buf);

int func_0F2F88(const char *src, char *out)
{
    char buf[0x200];

    func_0F2CC8(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_00174BA8) || !strcasecmp(buf, D_00174BB0) || !strcasecmp(buf, D_00174BB8)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_00174BC0) || !strcasecmp(buf, D_00174BC8) || !strcasecmp(buf, D_00174BD0))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
