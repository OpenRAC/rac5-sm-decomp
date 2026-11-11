/* LEVEL_19:0x0F93E0 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_001CD7E8[];
extern char D_001CD7F0[];
extern char D_001CD7F8[];
extern char D_001CD800[];
extern char D_001CD808[];
extern char D_001CD810[];
extern int strcasecmp(const char *a, const char *b);
extern void func_0F9120(const char *src, char *buf);

int func_0F93E0(const char *src, char *out)
{
    char buf[0x200];

    func_0F9120(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_001CD7E8) || !strcasecmp(buf, D_001CD7F0) || !strcasecmp(buf, D_001CD7F8)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_001CD800) || !strcasecmp(buf, D_001CD808) || !strcasecmp(buf, D_001CD810))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
