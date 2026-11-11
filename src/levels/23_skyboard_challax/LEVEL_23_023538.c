/* LEVEL_23:0x023538 -- placement copy of LEVEL_01_0254F0.c: formats a message with the value and posts it. */
extern char D_001DFBC0[];
extern char D_001DFBD0[];
extern int snprintf(char *, unsigned int, const char *, ...);
extern void func_0272F8(char *, int, int, int);

void func_023538(char *value)
{
    char buf[256];

    snprintf(buf, sizeof(buf), D_001DFBC0, D_001DFBD0, value);
    buf[255] = 0;
    func_0272F8(buf, 1, 0, 0);
}
