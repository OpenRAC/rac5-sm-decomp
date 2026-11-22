/* USA LEVEL_01.REL:0x12BB38, 440-byte candidate (22 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Sub {
    unsigned short n;
    unsigned short pad02;
    unsigned short idx[8];
    unsigned short out[8];
    char pad24[0x18];
} Sub;

typedef struct Rec {
    char pad00[0x60];
    int f60;
    int pad64[2];
    unsigned cnt;
    Sub subs[2];
    char pade8[0x10];
} Rec;

typedef struct Ent {
    void *first;
    char pad04[0x10];
} Ent;

typedef struct Img {
    int pad00[2];
    unsigned count;
    Rec *recs;
    int pad10;
    Ent *tbl;
} Img;

typedef struct Obj {
    int pad00;
    char pad04[0x64];
    int f68;
    char pad6c[0xC];
    int loaded;
    char pad7c[0x44];
    Img img;
} Obj;

extern int func_12B9A0(Img *img, void *p);
extern void func_10F630(int a, int b);
extern void *func_12A4B8(void *p, int n);
extern unsigned short func_0A32E8(void *p);

int func_12BB38(Obj *o, Img **out)
{
    Img *img;
    unsigned i;
    unsigned j;
    int k;

    if (o == 0) {
        return 0;
    }
    if (1) {
        img = &o->img;
        if (o->loaded == 0) {
            if (func_12B9A0(img, (char *)o + 4) == 0) {
                return 0;
            }
            o->loaded = 1;
        }
        func_10F630(6, o->f68);
        for (i = 0; i < img->count; i++) {
            img->recs[i].f60 = 0;
            for (j = 0; j < img->recs[i].cnt; j++) {
                for (k = 0; k < img->recs[i].subs[j].n; k++) {
                    img->recs[i].subs[j].out[k] = func_0A32E8(func_12A4B8(img->tbl[img->recs[i].subs[j].idx[k]].first, 8));
                }
            }
        }
        *out = img;
        return 1;
    }

}
