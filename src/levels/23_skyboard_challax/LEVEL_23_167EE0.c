/* LEVEL_23:0x167EE0 -- placement copy of LEVEL_01_17CB88.c: per-step update of an object with a timed linked record: in state 1 it finishes the pending action once the check passes; with the record timer running it clears the handle, honours the global busy mask and counts the timer down; with the timer at zero it starts the effect (handle, sound state and the three follow-up calls). */
typedef struct Sub {
    char pad00[0x14];
    unsigned int w14;
} Sub;

typedef struct Ent {
    char pad00[0xC0];
    Sub sub;
} Ent;

typedef struct Rec {
    Ent *f00;
    void *f04;
    float f08;
    int w0C;
    char sub10[0x10];
} Rec;

typedef struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x12];
    Rec *f58;
} Obj;

typedef struct Glob {
    char pad00[0x24];
    int w24;
} Glob;

extern Glob *D_001C73AC;
extern unsigned char D_001C7A30;

extern int func_073ED0(char *a0, int a1);
extern void func_074128(Obj *o, float a, float b, int c, int d, int e);
extern void *func_05F3F0(Ent *e, int flag);
extern void func_0352A0(void *obj);
extern void func_077BB0(void *h, float *v, int a, int b);
extern void func_06F608(char *object, int enabled, int mode, int value);
extern void func_06F878(char *object, float *v, int a, int b);

void func_167EE0(Obj *o, float dt)
{
    float v[4];
    Rec *rec = o->f58;
    Ent *e = rec->f00;
    void *h;
    unsigned int hit;
    Sub *sub;

    if (o->b45 == 1) {
        if (func_073ED0((char *)o, 0) != 0) {
            func_074128(o, 0.1f, 0.0f, 0, 0, 1);
            o->b45 = 0;
        }
    }
    if (rec->f08 != 0.0f) {
        rec->f04 = 0;
        if (rec->w0C != 0) {
            sub = &e->sub;
            if (D_001C73AC->w24 == 2) {
                hit = sub->w14 & 0x2200;
            } else {
                hit = sub->w14 & 0x2000;
            }
            if (hit != 0) {
                return;
            }
            rec->w0C = 0;
        }
        rec->f08 = rec->f08 - dt;
        if (rec->f08 <= 0.0f) {
            rec->f08 = 0.0f;
        }
    } else {
        h = func_05F3F0(e, 1);
        rec->f04 = h;
        if ((D_001C7A30 ^ 1) != 0) {
            if (h != 0) {
                func_0352A0(e);
                func_077BB0(rec->f04, v, 1, 0);
                func_06F608(rec->sub10, 1, (int)rec->f04, 1);
                func_06F878(rec->sub10, v, 0, 0);
            }
        }
    }
}
