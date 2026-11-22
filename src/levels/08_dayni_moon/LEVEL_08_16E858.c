/* LEVEL_08:0x16E858 -- per-frame update of a timed effect object: counts its timers down, runs the effect's follow-up calls, and reports the elapsed time to the camera and the sound hook. */
typedef struct Obj Obj;

typedef struct {
    char pad_00[0x28];
    unsigned short h_28;
    char pad_2A;
    unsigned char b_2B;
    int w_2C;
    char pad_30[0xC];
    float t_3C;
} Part;

typedef struct {
    float f_00;
    char pad_04[0x44];
    char sub_48[0x54];
    char sub_9C[0x28];
    char sub_C4[8];
} Eff;

typedef struct {
    int w_00;
} Cell;

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0xE];
    Cell *cell_54;
    Part *part_58;
    char pad_5C[0x14];
    float f_70;
};

typedef struct {
    char pad_0000[0x96C];
    float f_96C;
    float f_970;
} Game;

extern Game D_002843D0;
extern unsigned int D_00268E50;
extern char D_00279F78[];
extern char D_00279F48[];

extern void func_1FAAF8(int cell);
extern int func_1CB070(Obj *o, int w, void *timer, void *dir);
extern void func_034FD0(void *a, Obj *o, void *c, float x, float y);
extern void func_035208(Obj *o, int flag);
extern void func_220310(void *p, int n);
extern void func_21FF38(void *p);
extern void func_0358F8(void *a, Obj *o, void *c);
extern int func_08FFD8(int a);
extern void func_21DED0(Part *p, Obj *o, int cell, int flag, unsigned int *tick);
extern float func_0849E8(Obj *o);
extern float func_084A18(Obj *o);
extern void func_0BC650(int a, int b, float f0, float f1);
extern void func_1FAB38(int cell, Obj *o);
extern int func_1FABB8(int cell, Obj *o, void *cb, int v);
extern void func_20EE98(void *a, Obj *o, int cell, float t);
extern void func_16EED0(void);

void func_16E858(Obj *o)
{
    Cell *cell;
    Part *p;
    float t;
    float a;
    Game *g = &D_002843D0;

    o->f_70 = o->f_70 - 1.0f;
    if (g->f_96C == 0.0f) {
        func_035208(o, 0);
        return;
    }
    cell = o->cell_54;
    p = o->part_58;
    func_1FAAF8(cell->w_00);
    if (o->b_45 != 0) {
        if (func_1CB070(o, p->w_2C, (char *)p + 0x3C, D_00279F78) != 0) {
            o->b_45 = 0;
        } else {
            func_034FD0(p, o, D_00279F48, 0.0f, 0.0f);
            func_035208(o, 0);
            return;
        }
    } else {
        p->t_3C = p->t_3C - 1.0f;
    }
    func_220310((char *)p + 0xC4, 1);
    func_21FF38((char *)p + 0x9C);
    func_0358F8(p, o, D_00279F48);
    func_21DED0(p, o, cell->w_00, (func_08FFD8(16) & 0xC000) != 0, &D_00268E50);
    func_035208(o, 0);
    if (p->b_2B == 3) {
        a = func_0849E8(o);
        func_0BC650(1, 0x5A, a, a - func_084A18(o));
    } else {
        func_0BC650(0, 0x5A, (float)D_00268E50, (float)(D_00268E50 - p->h_28));
    }
    if (g->f_96C < g->f_970)
        func_1FAB38(cell->w_00, o);
    func_1FABB8(cell->w_00, o, (void *)func_16EED0, *((unsigned char *)p + 0x71));
    func_20EE98((char *)p + 0x48, o, cell->w_00, *(float *)p);
}
