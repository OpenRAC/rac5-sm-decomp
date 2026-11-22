/* USA LEVEL_02.REL:0x1B5228, 296-byte candidate (21 November 2026).
 * Measured pinned: 12 differing words; first difference at 0x44.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    char pad_00[0x20];
    float f_20;
    char pad_24[0x10 - 4];
} Entry;

typedef struct Obj {
    char pad_00[0x20];
    char vel_20[0x10];
    char pos_30[0x15];
    unsigned char kind_45;
} Obj;

extern char D_0022ED80[];
extern int D_0022F770;
extern float func_083378(Obj *o);
extern int func_014DA0(Obj *o, float a, float b);
extern int func_028A78(Obj *o);
extern void func_01AE10(float f, float g, int a, int b, void *pos, void *vel, Obj *o);
extern int func_0833A0(Obj *o, int a);
extern int func_1B4470(Obj *o);
extern void func_1B3F68(Obj *o, int kind, int code);

void func_1B5228(Obj *o)
{
    float t;
    int idx;
    int r;
    char *p;

    t = func_083378(o);
    if (0.56666666269302368f <= t && t < 0.7f && func_014DA0(o, 1.0f, 2.0f) != 0) {
        p = D_0022ED80;
        idx = func_028A78(o);
        p += idx * 16;
        p += (D_0022F770 - 1) * 64;
        func_01AE10(*(float *)(p + 0x20), 0.5f, 2, 1, o->pos_30, o->vel_20, o);
    }
    if (func_0833A0(o, 0) != 0) {
        r = func_1B4470(o);
        if (r == 14)
            func_1B3F68(o, o->kind_45, 15);
        else
            func_1B3F68(o, o->kind_45, r & 0xFF);
    }
}
