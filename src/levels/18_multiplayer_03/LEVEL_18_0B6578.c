/* LEVEL_18:0x0B6578 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_0027A050[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_1109F8(struct Obj *p);
extern char *func_10DFE0(int id);
extern int func_10F138(void);
extern void func_0C5620(int a, char *text, char *title, int c);
extern void func_0C5658(int a);

void func_0B6578(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_1109F8(p);
    buf = D_0027A050;
    fmt = func_10DFE0(0xA5B);
    a = func_10F138();
    b = func_10F138();
    sprintf(buf, fmt, a, b);
    func_0C5620(2, buf, func_10DFE0(0x218), 0);
    func_0C5658(5);
}
