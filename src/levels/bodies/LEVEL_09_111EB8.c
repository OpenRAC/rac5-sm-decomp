/* LEVEL_09:0x111EB8 -- placement copy of FRONTEND_01CC80.c: parses a boolean word from a string into a byte; returns 1 when recognised. */
extern char D_00201328[];
extern char D_00201330[];
extern char D_00201338[];
extern char D_00201340[];
extern char D_00201348[];
extern char D_00201350[];
extern int strcasecmp(const char *a, const char *b);
extern void func_111BF8(const char *src, char *buf);

int func_111EB8(const char *src, char *out)
{
    char buf[0x200];

    func_111BF8(src, buf);
    if (buf[0] == 't' || buf[0] == 'y' || buf[0] == '1')
        goto yes;
    if (buf[0] == 'f' || buf[0] == '0' || buf[0] == 'o' || buf[0] == 'n' || buf[0] == '!')
        goto no;
    if (!strcasecmp(buf, D_00201328) || !strcasecmp(buf, D_00201330) || !strcasecmp(buf, D_00201338)) {
yes:
        *out = 1;
        return 1;
    }
    if (!strcasecmp(buf, D_00201340) || !strcasecmp(buf, D_00201348) || !strcasecmp(buf, D_00201350))
        goto no;
    *out = 0;
    return 0;
no:
    *out = 0;
    return 1;
}
