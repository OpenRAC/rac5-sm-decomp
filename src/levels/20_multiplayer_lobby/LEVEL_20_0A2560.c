/* LEVEL_20:0x0A2560 -- placement copy of LEVEL_16_0B8030.c: formats a status line from two lookups and submits it. */
int func_0E3248(void);
int func_0E3270(void);
int func_0E2A40(int a);
char *func_0E2118(int a);
int sprintf(char *buf, const char *fmt, ...);
int func_0B0B78(int a, char *b, int c, char *d);
int func_0B0BB0(int a);
extern char D_0019D628[];

void func_0A2560(void)
{
    unsigned int s1;
    unsigned int t;
    char *s0;

    s1 = func_0E3248();
    if (s1 == 0xFFFFFFFFu) {
        t = func_0E3270();
    } else {
        t = s1;
    }
    s1 = t;
    if (func_0E2A40(0) == 0) {
        s1 = func_0E3270();
    }
    s0 = D_0019D628;
    sprintf(s0, func_0E2118(0x6E6), s1);
    s1 = (int)func_0E2118(0x30B);
    func_0B0B78(3, s0, s1, func_0E2118(0x218));
    func_0B0BB0(10);
}
