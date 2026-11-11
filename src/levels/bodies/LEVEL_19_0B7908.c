/* LEVEL_19:0x0B7908 -- placement copy of LEVEL_16_0B8030.c: formats a status line from two lookups and submits it. */
int func_110B00(void);
int func_110B28(void);
int func_1102F8(int a);
char *func_10F9D0(int a);
int sprintf(char *buf, const char *fmt, ...);
int func_0C5F20(int a, char *b, int c, char *d);
int func_0C5F58(int a);
extern char D_00279F68[];

void func_0B7908(void)
{
    unsigned int s1;
    unsigned int t;
    char *s0;

    s1 = func_110B00();
    if (s1 == 0xFFFFFFFFu) {
        t = func_110B28();
    } else {
        t = s1;
    }
    s1 = t;
    if (func_1102F8(0) == 0) {
        s1 = func_110B28();
    }
    s0 = D_00279F68;
    sprintf(s0, func_10F9D0(0x6E6), s1);
    s1 = (int)func_10F9D0(0x30B);
    func_0C5F20(3, s0, s1, func_10F9D0(0x218));
    func_0C5F58(10);
}
