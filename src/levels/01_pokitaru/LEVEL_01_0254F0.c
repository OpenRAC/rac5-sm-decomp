/* LEVEL_01:0x0254F0 -- formats a message with the value and posts it. */
extern char D_0020CA40[];
extern char D_0020CA50[];
extern int snprintf(char *, unsigned int, const char *, ...);
extern void func_029788(char *, int, int, int);

void func_0254F0(char *value)
{
    char buf[256];

    snprintf(buf, sizeof(buf), D_0020CA40, D_0020CA50, value);
    buf[255] = 0;
    func_029788(buf, 1, 0, 0);
}
