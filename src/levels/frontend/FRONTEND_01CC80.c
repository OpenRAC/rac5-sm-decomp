/* FRONTEND:0x01CC80 -- parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_00109538[];
extern char D_00109540[];
extern char D_00109548[];
extern char D_00109550[];
extern char D_00109558[];
extern char D_00109560[];
extern int strcasecmp(const char *a, const char *b);
extern void func_01C9C0(const char *src, char *buf);

int func_01CC80(const char *src, char *out)
{
    char buf[0x200];

    func_01C9C0(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_00109538) || !strcasecmp(buf, D_00109540) || !strcasecmp(buf, D_00109548)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_00109550) || !strcasecmp(buf, D_00109558) || !strcasecmp(buf, D_00109560))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
