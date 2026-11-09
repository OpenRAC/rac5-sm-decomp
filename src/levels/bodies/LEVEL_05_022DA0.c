/* LEVEL_05:0x022DA0 -- placement copy of LEVEL_01_023E08.c: writes a display name into a buffer: a plain copy for the first four kinds, a formatted template for kinds 4 to 7. */

struct Rec023E08 {
    char pad00[0x10];
    int name10;
};

struct Obj023E08 {
    char pad00[0xF8];
    int id;
};

extern struct Rec023E08 *func_023608(int cat, int id);
extern struct Rec023E08 *func_023668(int cat, int sel, int id);
extern char *func_12DE28(int id);
extern char *strncpy(char *dst, const char *src, unsigned int n);
extern int sprintf(char *dst, const char *fmt, ...);

void func_022DA0(struct Obj023E08 *o, char *buf, int cat, unsigned int kind, int len)
{
    struct Rec023E08 *r;

    if (kind < 4) {
        r = func_023608(cat, o->id);
        strncpy(buf, func_12DE28(r->name10), len);
        return;
    }
    r = func_023668(cat, 3, o->id);
    switch (kind) {
    case 4:
        sprintf(buf, func_12DE28(0x319), func_12DE28(r->name10), len);
        break;
    case 5:
        sprintf(buf, func_12DE28(0x31A), func_12DE28(r->name10), len);
        break;
    case 6:
        sprintf(buf, func_12DE28(0x31B), func_12DE28(r->name10), len);
        break;
    case 7:
        sprintf(buf, func_12DE28(0x31C), func_12DE28(r->name10), len);
        break;
    }
}
