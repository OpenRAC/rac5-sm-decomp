/* LEVEL_03:0x0253C0 -- placement copy of LEVEL_01_0254F0.c: formats a message with the value and posts it. */
extern char D_00225940[];
extern char D_00225950[];
extern int snprintf(char *, unsigned int, const char *, ...);
extern void func_029580(char *, int, int, int);

void func_0253C0(char *value)
{
    char buf[256];

    snprintf(buf, sizeof(buf), D_00225940, D_00225950, value);
    buf[255] = 0;
    func_029580(buf, 1, 0, 0);
}
