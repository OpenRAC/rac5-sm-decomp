/* LEVEL_09:0x1594E8 -- placement copy of LEVEL_02_17BDB0.c: per-frame handler: clears a one-shot flag, otherwise tests the record's two hit volumes against the shared point and fires the matching sound. */
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

extern char D_0021C8C0[];
extern int D_002043F0;

extern int func_1AC6A0(void *a, float *p);
extern void func_038A78(int id);
extern int func_037710(void);
extern void func_05C770(void);

void func_1594E8(Obj *o)
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
        g = D_0021C8C0;
        if (func_1AC6A0(r->vol_b, (float *)(g + 0x30)) != 0) {
            return;
        }
    }
    fg = (float *)D_0021C8C0;
    pos = fg + 12;
    if (pos[1] < r->limit) {
        func_038A78(0x2C);
    }
    if (r->vol_a == 0) {
        return;
    }
    hit = func_1AC6A0(r->vol_a, pos);
    if (hit != 0 ? r->flag == 0 : r->flag != 0) {
        return;
    }
    switch (o->mode) {
    case 0:
        if (D_002043F0 != 0x17 || func_037710() != 0xD) {
            func_038A78(0x2C);
        } else {
            func_05C770();
        }
        break;
    case 1:
        func_038A78(0x2E);
        break;
    case 2:
        func_038A78(0x2B);
        break;
    }
}
