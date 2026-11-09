/* LEVEL_06:0x0223A8 -- placement copy of LEVEL_01_023E08.c: writes a display name into a buffer: a plain copy for the first four kinds, a formatted template for kinds 4 to 7. */

struct Rec023E08 {
    char pad00[0x10];
    int name10;
};

struct Obj023E08 {
    char pad00[0xF8];
    int id;
};

extern struct Rec023E08 *func_022D78(int cat, int id);
extern struct Rec023E08 *func_022DD8(int cat, int sel, int id);
extern char *func_128B80(int id);
extern char *strncpy(char *dst, const char *src, unsigned int n);
extern int sprintf(char *dst, const char *fmt, ...);

void func_0223A8(struct Obj023E08 *o, char *buf, int cat, unsigned int kind, int len)
{
    struct Rec023E08 *r;

    if (kind < 4) {
        r = func_022D78(cat, o->id);
        strncpy(buf, func_128B80(r->name10), len);
        return;
    }
    r = func_022DD8(cat, 3, o->id);
    switch (kind) {
    case 4:
        sprintf(buf, func_128B80(0x319), func_128B80(r->name10), len);
        break;
    case 5:
        sprintf(buf, func_128B80(0x31A), func_128B80(r->name10), len);
        break;
    case 6:
        sprintf(buf, func_128B80(0x31B), func_128B80(r->name10), len);
        break;
    case 7:
        sprintf(buf, func_128B80(0x31C), func_128B80(r->name10), len);
        break;
    }
}
