/* FRONTEND:0x018968 -- formats a localized message into the shared text buffer from a looked-up string and the current value, then shows it with two further looked-up strings. */
struct Obj;

extern char D_001973B8[];

extern void func_022938(struct Obj *p);
extern char *func_01F778(int id);
extern int func_0210B0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0140E0(int mode, char *buf, char *a, char *b);
extern void func_014118(int mode);

void func_018968(struct Obj *p)
{
    char *buf;
    char *fmt;
    char *title;

    func_022938(p);
    buf = D_001973B8;
    fmt = func_01F778(0xA7F);
    sprintf(buf, fmt, func_0210B0());
    title = func_01F778(0x30B);
    func_0140E0(3, buf, title, func_01F778(0x218));
    func_014118(5);
}
