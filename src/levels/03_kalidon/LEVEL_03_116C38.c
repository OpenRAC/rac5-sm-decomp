/* LEVEL_03:0x116C38 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_00230628[];
extern char D_00230630[];
extern char D_00230638[];
extern char D_00230640[];
extern char D_00230648[];
extern char D_00230650[];
extern int strcasecmp(const char *a, const char *b);
extern void func_116978(const char *src, char *buf);

int func_116C38(const char *src, char *out)
{
    char buf[0x200];

    func_116978(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_00230628) || !strcasecmp(buf, D_00230630) || !strcasecmp(buf, D_00230638)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_00230640) || !strcasecmp(buf, D_00230648) || !strcasecmp(buf, D_00230650))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
