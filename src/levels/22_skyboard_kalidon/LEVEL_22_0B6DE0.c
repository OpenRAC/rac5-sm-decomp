/* LEVEL_22:0x0B6DE0 -- placement copy of LEVEL_24_0C21F8.c: placement copy of LEVEL_01_0C8930.c: formats a message from a looked-up string and two generated numbers into a global buffer and shows it. */
struct Obj;

extern char D_00281950[];
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_10CB48(struct Obj *p);
extern char *func_109980(int id);
extern int func_10ABF0(void);
extern void func_0C5490(int a, char *text, char *title, int c);
extern void func_0C54C8(int a);

void func_0B6DE0(struct Obj *p)
{
    char *buf;
    char *fmt;
    int a;
    int b;

    func_10CB48(p);
    buf = D_00281950;
    fmt = func_109980(0xA5B);
    a = func_10ABF0();
    b = func_10ABF0();
    sprintf(buf, fmt, a, b);
    func_0C5490(2, buf, func_109980(0x218), 0);
    func_0C54C8(5);
}
