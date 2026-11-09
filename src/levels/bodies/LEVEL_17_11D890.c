/* LEVEL_17:0x11D890 -- placement copy of LEVEL_16_11DE68.c: returns early on two status checks, otherwise runs a short setup sequence. */

extern int func_0249E0(int a, int b);
extern int func_112410(void);
extern void func_0A4590(int a);
extern char *func_10E8A8(int id);
extern void func_0C5B88(int a, char *b, int c, int d);
extern void func_0C5BC0(int a);
extern void func_0249B0(int a, int b, int c);

void func_11D890(void)
{
    char *s;

    if (func_0249E0(0, 0xFF) != 0) {
        return;
    }
    if (func_112410() == 0) {
        return;
    }
    func_0A4590(1);
    s = func_10E8A8(0x6C5);
    func_0C5B88(0, s, 0, 0);
    func_0C5BC0(0x5A);
    func_0249B0(0, 1, 0xFF);
}
