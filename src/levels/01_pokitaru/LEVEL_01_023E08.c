/* LEVEL_01:0x023E08 -- writes a display name into a buffer: a plain copy for the first four kinds, a formatted template for kinds 4 to 7. */

struct Rec023E08 {
    char pad00[0x10];
    int name10;
};

struct Obj023E08 {
    char pad00[0xF8];
    int id;
};

extern struct Rec023E08 *func_024670(int cat, int id);
extern struct Rec023E08 *func_0246D0(int cat, int sel, int id);
extern char *func_1324B0(int id);
extern char *strncpy(char *dst, const char *src, unsigned int n);
extern int sprintf(char *dst, const char *fmt, ...);

void func_023E08(struct Obj023E08 *o, char *buf, int cat, unsigned int kind, int len)
{
    struct Rec023E08 *r;

    if (kind < 4) {
        r = func_024670(cat, o->id);
        strncpy(buf, func_1324B0(r->name10), len);
        return;
    }
    r = func_0246D0(cat, 3, o->id);
    switch (kind) {
    case 4:
        sprintf(buf, func_1324B0(0x319), func_1324B0(r->name10), len);
        break;
    case 5:
        sprintf(buf, func_1324B0(0x31A), func_1324B0(r->name10), len);
        break;
    case 6:
        sprintf(buf, func_1324B0(0x31B), func_1324B0(r->name10), len);
        break;
    case 7:
        sprintf(buf, func_1324B0(0x31C), func_1324B0(r->name10), len);
        break;
    }
}
