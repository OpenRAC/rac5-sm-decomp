/* LEVEL_17:0x0B7570 -- placement copy of LEVEL_16_0B8030.c: formats a status line from two lookups and submits it. */
int func_10F9D8(void);
int func_10FA00(void);
int func_10F1D0(int a);
char *func_10E8A8(int a);
int sprintf(char *buf, const char *fmt, ...);
int func_0C5B88(int a, char *b, int c, char *d);
int func_0C5BC0(int a);
extern char D_0026B0E8[];

void func_0B7570(void)
{
    unsigned int s1;
    unsigned int t;
    char *s0;

    s1 = func_10F9D8();
    if (s1 == 0xFFFFFFFFu) {
        t = func_10FA00();
    } else {
        t = s1;
    }
    s1 = t;
    if (func_10F1D0(0) == 0) {
        s1 = func_10FA00();
    }
    s0 = D_0026B0E8;
    sprintf(s0, func_10E8A8(0x6E6), s1);
    s1 = (int)func_10E8A8(0x30B);
    func_0C5B88(3, s0, s1, func_10E8A8(0x218));
    func_0C5BC0(10);
}
