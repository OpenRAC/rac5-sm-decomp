/* LEVEL_04:0x164528 -- resolves the record's stored offset into a pointer (kept only when its target is valid), and on success clears the object's work area, sets a flag bit, registers it through func_1D4D88, installs its hook, runs func_1DD0F0 and func_07AEE0 and updates a field of the flag word; returns whether the offset resolved. */
typedef struct {
    int w0;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0x48 - 0x46];
    int w48;
    char pad4C[0x54 - 0x4C];
    Rec *rec;
    char *w58;
    char pad5C[0x64 - 0x5C];
    unsigned int w64;
    char pad68[0x78 - 0x68];
    unsigned int w78;
} Obj;

typedef struct {
    void *f_00;
    void *f_04;
} TabRec;

typedef struct {
    TabRec f_00[8];
    void *f_40;
    unsigned char f_44;
    unsigned char f_45;
    unsigned char f_46;
} Tab;

typedef struct {
    char pad_00[0x58];
    Tab *f_58;
} Outer;

typedef struct {
    char pad_00[0x64];
    int f_64;
} Target;

typedef void (*Hook)(Target *a0, int a1);

extern int D_002201B4;
extern char D_003AE0C8[];
extern char D_00237940[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_1D4D88(Outer *a0, Target *a1, Hook *a2, int a3);
extern void func_1DD0F0(Obj *o);
extern void func_07AEE0(char *, int, int, int, char *);
extern void func_164CD8(void);

int func_164528(Obj *o)
{
    Rec *rec;
    char *area;
    int v;
    int t;
    int ok;

    rec = o->rec;
    v = rec->w0;
    if (v == 0) {
        ok = 0;
    } else {
        t = D_002201B4 + v;
        if (*(int *)(t + 0x40) == 0) {
            rec->w0 = 0;
            ok = 0;
        } else {
            rec->w0 = t;
            ok = 1;
        }
    }
    if (!ok)
        return 0;
    area = o->w58;
    memset(area, 0, 0x188);
    o->w64 = o->w64 | 0x1000;
    func_1D4D88((Outer *)rec->w0, (Target *)o, (Hook *)D_003AE0C8, 1);
    o->b45 = 0;
    *(int *)(o->w48 + 0xDC) = (int)func_164CD8;
    func_1DD0F0(o);
    func_07AEE0(area + 0x110, 4, 0x44, 0x45, D_00237940);
    o->w78 = (o->w78 & 0xFFF0FFFF) | 0x20000;
    return 1;
}
