/* LEVEL_08:0x1E3510 -- placement copy of LEVEL_04_1BC778.c: registers the pending effect set once, then (when the object has a first-slot owner) hooks it up, resets its record to the idle state (timer 35), raises a flag in its model entry and installs the follow-up handler. */
struct Set_1CC228;

typedef struct Outer Outer;
typedef struct Target Target;
typedef void (*Hook)(Target *a0, int a1);

typedef struct {
    char pad_00[4];
    char *ents;
} Model;

typedef struct {
    char pad_00[0x160];
    unsigned int flags160;
} Q;

typedef struct {
    char pad_00[0xC];
    Q *p0C;
} P;

typedef struct {
    char pad_00[4];
    P *p04;
} Ent;

typedef struct {
    char pad_00[0xDC];
    void (*fn)(void);
} Vt;

typedef struct {
    Outer *first;
} Pair;

typedef struct {
    int w0;
    int w4;
    int w8;
    int wC;
    int w10;
    int w14;
    char pad18[0xC];
    int w24;
    float f28;
} Rec;

struct Target {
    char pad_00[0x40];
    Model *model;
    unsigned char b44;
    char pad_45[3];
    Vt *vt;
    char pad_4C[8];
    Pair *pair;
    Rec *rec;
    char pad_5C[8];
    int f_64;
};

extern unsigned char D_002524CC;
extern char D_003EA370[];
extern char D_003EA3A8[];
extern char D_00274C48[];
extern Hook D_00274D70;
extern void func_1E1090(char *a0, char *a1, struct Set_1CC228 *set);
extern void func_0FB190(int index);
extern void func_1F9D08(Outer *a0, Target *a1, Hook *a2, int a3);
extern void func_21AEA0(char *object);
extern void func_1E3F80(void);

int func_1E3510(Target *o)
{
    Outer *first;
    Rec *rec;
    Ent *ent;
    unsigned int off;

    if (D_002524CC == 0) {
        D_002524CC = 1;
        func_1E1090(D_003EA370, D_003EA3A8, (struct Set_1CC228 *)D_00274C48);
    }
    func_0FB190(0);
    first = o->pair->first;
    if (first == 0) {
        return 0;
    }
    func_1F9D08(first, o, &D_00274D70, 0);
    rec = o->rec;
    func_21AEA0((char *)rec + 0x18);
    rec->f28 = 35.0f;
    rec->w4 = 0;
    rec->w8 = 0;
    rec->wC = 0;
    rec->w10 = 0;
    rec->w14 = 0;
    rec->w24 = 0;
    rec->w0 = 0;
    off = o->b44 * 0x34;
    off += (int)o->model->ents;
    ent = (Ent *)off;
    ent->p04->p0C->flags160 |= 0x40;
    o->vt->fn = func_1E3F80;
    return 1;
}
