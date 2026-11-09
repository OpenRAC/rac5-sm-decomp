/* LEVEL_05:0x114AE8 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_00206628[];
extern char D_00206630[];
extern char D_00206638[];
extern char D_00206640[];
extern char D_00206648[];
extern char D_00206650[];
extern int strcasecmp(const char *a, const char *b);
extern void func_114828(const char *src, char *buf);

int func_114AE8(const char *src, char *out)
{
    char buf[0x200];

    func_114828(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_00206628) || !strcasecmp(buf, D_00206630) || !strcasecmp(buf, D_00206638)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_00206640) || !strcasecmp(buf, D_00206648) || !strcasecmp(buf, D_00206650))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
