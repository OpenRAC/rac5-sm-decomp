/* LEVEL_07:0x11BB18 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_0022C428[];
extern char D_0022C430[];
extern char D_0022C438[];
extern char D_0022C440[];
extern char D_0022C448[];
extern char D_0022C450[];
extern int strcasecmp(const char *a, const char *b);
extern void func_11B858(const char *src, char *buf);

int func_11BB18(const char *src, char *out)
{
    char buf[0x200];

    func_11B858(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_0022C428) || !strcasecmp(buf, D_0022C430) || !strcasecmp(buf, D_0022C438)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_0022C440) || !strcasecmp(buf, D_0022C448) || !strcasecmp(buf, D_0022C450))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
