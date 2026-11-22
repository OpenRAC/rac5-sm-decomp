/* LEVEL_09:0x141040 -- placement copy of LEVEL_01_148060.c: for an object with the expected tag, runs a per-element test over an array and reports whether any element passed, notifying the owner when one did. */
typedef struct {
    char pad00[0x24];
    unsigned int tag;
} Cfg;

typedef struct {
    int w00;
    char pad04[0xF4];
    int w_F8;
} Link;

typedef struct {
    char pad00[0x3C];
    int w3C;
} Info;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    char pad44[0x14];
    Link **link;
} Obj;

extern Info *func_023920(int a, int b);
extern int func_141308(Obj *o, char *elem, char *out, int w);
extern void func_1413B8(Obj *o, char kind, char n);

int func_141040(Obj *o, char *elems_in, char *out, char kind, unsigned int n)
{
    Info *info;
    unsigned int i;
    int found;

    if (o->cfg->tag != 0xE997AD78) {
        return 0;
    }
    found = 0;
    info = func_023920(2, (*o->link)->w_F8);
    for (i = 0; i < n; i++) {
        if (func_141308(o, elems_in + i * 16, out + kind * 16, info->w3C) != 0) {
            found = 1;
        }
    }
    if (found) {
        func_1413B8(o, kind, n);
    }

    return found;
}
