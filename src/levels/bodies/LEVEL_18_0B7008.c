/* LEVEL_18:0x0B7008 -- placement copy of LEVEL_16_0B8030.c: formats a status line from two lookups and submits it. */
int func_10F110(void);
int func_10F138(void);
int func_10E908(int a);
char *func_10DFE0(int a);
int sprintf(char *buf, const char *fmt, ...);
int func_0C5620(int a, char *b, int c, char *d);
int func_0C5658(int a);
extern char D_0027A168[];

void func_0B7008(void)
{
    unsigned int s1;
    unsigned int t;
    char *s0;

    s1 = func_10F110();
    if (s1 == 0xFFFFFFFFu) {
        t = func_10F138();
    } else {
        t = s1;
    }
    s1 = t;
    if (func_10E908(0) == 0) {
        s1 = func_10F138();
    }
    s0 = D_0027A168;
    sprintf(s0, func_10DFE0(0x6E6), s1);
    s1 = (int)func_10DFE0(0x30B);
    func_0C5620(3, s0, s1, func_10DFE0(0x218));
    func_0C5658(10);
}
