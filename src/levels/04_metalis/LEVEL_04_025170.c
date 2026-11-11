/* LEVEL_04:0x025170 -- placement copy of LEVEL_01_0254F0.c: formats a message with the value and posts it. */
extern char D_002263C0[];
extern char D_002263D0[];
extern int snprintf(char *, unsigned int, const char *, ...);
extern void func_029230(char *, int, int, int);

void func_025170(char *value)
{
    char buf[256];

    snprintf(buf, sizeof(buf), D_002263C0, D_002263D0, value);
    buf[255] = 0;
    func_029230(buf, 1, 0, 0);
}
