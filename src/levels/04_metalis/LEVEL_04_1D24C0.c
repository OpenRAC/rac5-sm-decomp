/* LEVEL_04:0x1D24C0 -- placement copy of LEVEL_01_1BF600.c: relocates the offset fields of the record behind the object's pointer by the global base (three of them are dropped when their target is invalid) after a record setup call. */
extern int D_002201B4;

typedef struct {
    int w00;
    char pad04[0x2C];
    int w30;
    int w34;
    int w38;
    int w3C;
    int w40;
    char pad44[0x4];
    int w48;
    char pad4C[0x4];
    int w50;
    int w54;
} Rec;

typedef struct {
    char pad00[0x54];
    Rec *rec;
} Owner;

extern void func_02F570(void *p);

void func_1D24C0(Owner *o)
{
    Rec *r;
    int t;

    r = o->rec;
    func_02F570((char *)r + 4);
    if (r->w34 != 0) {
        r->w34 = D_002201B4 + r->w34;
    }
    if (r->w38 != 0) {
        r->w38 = D_002201B4 + r->w38;
    }
    if (r->w3C != 0) {
        r->w3C = D_002201B4 + r->w3C;
    }
    if (r->w54 != 0) {
        r->w54 = D_002201B4 + r->w54;
    }
    if (r->w40 != 0) {
        r->w40 = D_002201B4 + r->w40;
    }
    if (r->w50 != 0) {
        r->w50 = D_002201B4 + r->w50;
    }
    if (r->w00 != 0) {
        t = D_002201B4 + r->w00;
        if (*(int *)(t + 0x40) == 0) {
            r->w00 = 0;
        } else {
            r->w00 = t;
        }
    }
    if (r->w48 != 0) {
        t = D_002201B4 + r->w48;
        if (*(int *)(t + 0x40) == 0) {
            r->w48 = 0;
        } else {
            r->w48 = t;
        }
    }
    if (r->w30 != 0) {
        t = D_002201B4 + r->w30;
        if (*(int *)(t + 0x40) == 0) {
            r->w30 = 0;
        } else {
            r->w30 = t;
        }
    }
}
