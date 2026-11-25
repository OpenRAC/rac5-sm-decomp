/* LEVEL_06:0x157620 -- placement copy of LEVEL_02_17BDB0.c: per-frame handler: clears a one-shot flag, otherwise tests the record's two hit volumes against the shared point and fires the matching sound. */
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

extern char D_00221EC0[];
extern int D_00209670;

extern int func_1B1F80(void *a, float *p);
extern void func_038CC0(int id);
extern int func_037958(void);
extern void func_05C930(void);

void func_157620(Obj *o)
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
        g = D_00221EC0;
        if (func_1B1F80(r->vol_b, (float *)(g + 0x30)) != 0) {
            return;
        }
    }
    fg = (float *)D_00221EC0;
    pos = fg + 12;
    if (pos[1] < r->limit) {
        func_038CC0(0x2C);
    }
    if (r->vol_a == 0) {
        return;
    }
    hit = func_1B1F80(r->vol_a, pos);
    if (hit != 0 ? r->flag == 0 : r->flag != 0) {
        return;
    }
    switch (o->mode) {
    case 0:
        if (D_00209670 != 0x17 || func_037958() != 0xD) {
            func_038CC0(0x2C);
        } else {
            func_05C930();
        }
        break;
    case 1:
        func_038CC0(0x2E);
        break;
    case 2:
        func_038CC0(0x2B);
        break;
    }
}
