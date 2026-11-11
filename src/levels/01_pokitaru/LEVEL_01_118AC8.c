/* LEVEL_01:0x118AC8 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_00217728[];
extern char D_00217730[];
extern char D_00217738[];
extern char D_00217740[];
extern char D_00217748[];
extern char D_00217750[];
extern int strcasecmp(const char *a, const char *b);
extern void func_118808(const char *src, char *buf);

int func_118AC8(const char *src, char *out)
{
    char buf[0x200];

    func_118808(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_00217728) || !strcasecmp(buf, D_00217730) || !strcasecmp(buf, D_00217738)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_00217740) || !strcasecmp(buf, D_00217748) || !strcasecmp(buf, D_00217750))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
