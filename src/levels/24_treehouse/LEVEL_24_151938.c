/* LEVEL_24:0x151938 -- placement copy of LEVEL_02_17BDB0.c: per-frame handler: clears a one-shot flag, otherwise tests the record's two hit volumes against the shared point and fires the matching sound. */
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

extern char D_00201040[];
extern int D_001EB570;

extern int func_19A9F8(void *a, float *p);
extern void func_035580(int id);
extern int func_034258(void);
extern void func_0591C0(void);

void func_151938(Obj *o)
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
        g = D_00201040;
        if (func_19A9F8(r->vol_b, (float *)(g + 0x30)) != 0) {
            return;
        }
    }
    fg = (float *)D_00201040;
    pos = fg + 12;
    if (pos[1] < r->limit) {
        func_035580(0x2C);
    }
    if (r->vol_a == 0) {
        return;
    }
    hit = func_19A9F8(r->vol_a, pos);
    if (hit != 0 ? r->flag == 0 : r->flag != 0) {
        return;
    }
    switch (o->mode) {
    case 0:
        if (D_001EB570 != 0x17 || func_034258() != 0xD) {
            func_035580(0x2C);
        } else {
            func_0591C0();
        }
        break;
    case 1:
        func_035580(0x2E);
        break;
    case 2:
        func_035580(0x2B);
        break;
    }
}
