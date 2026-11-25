/* LEVEL_08:0x0D3858 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_0037B010[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_146BB0(struct Obj *p);
extern char *func_1439E8(int id);
extern int func_144C58(void);
extern void func_0E1F10(int a, char *text, char *title, int c);
extern void func_0E1F48(int a);

void func_0D3858(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_146BB0(p);
    buf = D_0037B010;
    fmt = func_1439E8(0xA5B);
    a = func_144C58();
    b = func_144C58();
    sprintf(buf, fmt, a, b);
    func_0E1F10(2, buf, func_1439E8(0x218), 0);
    func_0E1F48(5);
}
