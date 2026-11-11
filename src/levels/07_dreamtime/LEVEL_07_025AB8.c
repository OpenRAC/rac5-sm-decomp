/* LEVEL_07:0x025AB8 -- placement copy of LEVEL_01_0254F0.c: formats a message with the value and posts it. */
extern char D_00221740[];
extern char D_00221750[];
extern int snprintf(char *, unsigned int, const char *, ...);
extern void func_029AC8(char *, int, int, int);

void func_025AB8(char *value)
{
    char buf[256];

    snprintf(buf, sizeof(buf), D_00221740, D_00221750, value);
    buf[255] = 0;
    func_029AC8(buf, 1, 0, 0);
}
