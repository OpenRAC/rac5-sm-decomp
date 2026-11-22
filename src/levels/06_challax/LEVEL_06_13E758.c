/* LEVEL_06:0x13E758 -- placement copy of LEVEL_01_148060.c: for an object with the expected tag, runs a per-element test over an array and reports whether any element passed, notifying the owner when one did. */
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

extern Info *func_022D30(int a, int b);
extern int func_13EA20(Obj *o, char *elem, char *out, int w);
extern void func_13EAD0(Obj *o, char kind, char n);

int func_13E758(Obj *o, char *elems_in, char *out, char kind, unsigned int n)
{
    Info *info;
    unsigned int i;
    int found;

    if (o->cfg->tag != 0xE997AD78) {
        return 0;
    }
    found = 0;
    info = func_022D30(2, (*o->link)->w_F8);
    for (i = 0; i < n; i++) {
        if (func_13EA20(o, elems_in + i * 16, out + kind * 16, info->w3C) != 0) {
            found = 1;
        }
    }
    if (found) {
        func_13EAD0(o, kind, n);
    }

    return found;
}
