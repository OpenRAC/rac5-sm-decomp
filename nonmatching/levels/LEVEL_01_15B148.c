/* USA LEVEL_01.REL:0x15B148, 296-byte candidate (21 November 2026).
 * Measured pinned: 13 differing words; first difference at 0x74.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad0[0x44];
    float f44;
} Cfg;

typedef struct {
    char pad0[0x60];
    int counter;
} Rec;

typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0xA];
    char pad50[4];
    Cfg *cfg;
    Rec *rec;
} Obj;

typedef struct {
    float f[4];
} Ent;

typedef struct {
    Ent e[4];
} Row;

typedef struct {
    char pad0[0x20];
    float f;
} Item;

extern Row D_00219E00[];
extern int D_0021A7F0;

extern int func_014358(Obj *o, float a, float b, float c);
extern int func_028290(Obj *o);
extern void func_01A4B0(float f, int a, int b, void *pos, int c, Obj *o, float g);
extern int func_07CAB8(Obj *o, int a);
extern int func_15C960(Obj *o);
extern void func_15C260(Obj *o, int a, int b);

void func_15B148(Obj *o)
{
    Rec *rec;
    Cfg *cfg;
    int r;
    Row *fx;

    rec = o->rec;
    cfg = o->cfg;
    rec->counter = rec->counter + 1;
    if (27.0f <= (float)rec->counter) {
        if (func_014358(o, cfg->f44 * 1.2f, cfg->f44 + cfg->f44, 0.8660254f) != 0) {
            fx = D_00219E00;
            r = func_028290(o);
            func_01A4B0(fx[D_0021A7F0 - 1].e[r + 2].f[0], 2, 1, (char *)o + 0x30, 0, o, 0.5f);
        }
    }
    if (func_07CAB8(o, 0) != 0) {
        r = func_15C960(o);
        if (r == 13) {
            func_15C260(o, o->b45, 14);
        } else {
            func_15C260(o, o->b45, r & 0xFF);
        }
    }
}
