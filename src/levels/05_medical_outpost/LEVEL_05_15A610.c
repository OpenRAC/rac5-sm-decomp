/* LEVEL_05:0x15A610 -- placement copy of LEVEL_02_17BDB0.c: per-frame handler: clears a one-shot flag, otherwise tests the record's two hit volumes against the shared point and fires the matching sound. */
typedef struct Rec {
    void *vol_a;
    void *vol_b;
    unsigned char flag;
    char pad_09[3];
    float limit;
} Rec;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char mode;
    unsigned char once;
    char pad_47[0xD];
    Rec *rec;
} Obj;

extern char D_00220E40[];
extern int D_002096F0;

extern int func_1B55F8(void *a, float *p);
extern void func_03A198(int id);
extern int func_038E70(void);
extern void func_05D7D8(void);

void func_15A610(Obj *o)
{
    Rec *r;
    float *pos;
    char *g;
    float *fg;
    int hit;

    if (o->once != 0) {
        o->once = 0;
        return;
    }
    r = o->rec;
    if (r->vol_b != 0) {
        g = D_00220E40;
        if (func_1B55F8(r->vol_b, (float *)(g + 0x30)) != 0) {
            return;
        }
    }
    fg = (float *)D_00220E40;
    pos = fg + 12;
    if (pos[1] < r->limit) {
        func_03A198(0x2C);
    }
    if (r->vol_a == 0) {
        return;
    }
    hit = func_1B55F8(r->vol_a, pos);
    if (hit != 0 ? r->flag == 0 : r->flag != 0) {
        return;
    }
    switch (o->mode) {
    case 0:
        if (D_002096F0 != 0x17 || func_038E70() != 0xD) {
            func_03A198(0x2C);
        } else {
            func_05D7D8();
        }
        break;
    case 1:
        func_03A198(0x2E);
        break;
    case 2:
        func_03A198(0x2B);
        break;
    }
}
