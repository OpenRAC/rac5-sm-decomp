/* LEVEL_10:0x15F420 -- placement copy of LEVEL_02_17BDB0.c: per-frame handler: clears a one-shot flag, otherwise tests the record's two hit volumes against the shared point and fires the matching sound. */
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

extern char D_0023E540[];
extern int D_00223780;

extern int func_1C82C0(void *a, float *p);
extern void func_03ACA0(int id);
extern int func_039918(void);
extern void func_05E938(void);

void func_15F420(Obj *o)
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
        g = D_0023E540;
        if (func_1C82C0(r->vol_b, (float *)(g + 0x30)) != 0) {
            return;
        }
    }
    fg = (float *)D_0023E540;
    pos = fg + 12;
    if (pos[1] < r->limit) {
        func_03ACA0(0x2C);
    }
    if (r->vol_a == 0) {
        return;
    }
    hit = func_1C82C0(r->vol_a, pos);
    if (hit != 0 ? r->flag == 0 : r->flag != 0) {
        return;
    }
    switch (o->mode) {
    case 0:
        if (D_00223780 != 0x17 || func_039918() != 0xD) {
            func_03ACA0(0x2C);
        } else {
            func_05E938();
        }
        break;
    case 1:
        func_03ACA0(0x2E);
        break;
    case 2:
        func_03ACA0(0x2B);
        break;
    }
}
