/* LEVEL_08:0x178AB8 -- placement copy of LEVEL_02_17BDB0.c: per-frame handler: clears a one-shot flag, otherwise tests the record's two hit volumes against the shared point and fires the matching sound. */
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

extern char D_002843D0[];
extern int D_00264470;

extern int func_1F7EC8(void *a, float *p);
extern void func_0416A0(int id);
extern int func_0402B8(void);
extern void func_065398(void);

void func_178AB8(Obj *o)
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
        g = D_002843D0;
        if (func_1F7EC8(r->vol_b, (float *)(g + 0x30)) != 0) {
            return;
        }
    }
    fg = (float *)D_002843D0;
    pos = fg + 12;
    if (pos[1] < r->limit) {
        func_0416A0(0x2C);
    }
    if (r->vol_a == 0) {
        return;
    }
    hit = func_1F7EC8(r->vol_a, pos);
    if (hit != 0 ? r->flag == 0 : r->flag != 0) {
        return;
    }
    switch (o->mode) {
    case 0:
        if (D_00264470 != 0x17 || func_0402B8() != 0xD) {
            func_0416A0(0x2C);
        } else {
            func_065398();
        }
        break;
    case 1:
        func_0416A0(0x2E);
        break;
    case 2:
        func_0416A0(0x2B);
        break;
    }
}
