/* LEVEL_08:0x16B2B8 -- placement copy of LEVEL_04_164528.c: resolves the record's stored offset into a pointer (kept only when its target is valid), and on success clears the object's work area, sets a flag bit, registers it through func_1F9D08, installs its hook, runs func_204068 and func_07FA60 and updates a field of the flag word; returns whether the offset resolved. */
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

extern int D_0024FC54;
extern char D_003E2C48[];
extern char D_002683D0[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_1F9D08(Outer *a0, Target *a1, Hook *a2, int a3);
extern void func_204068(Obj *o);
extern void func_07FA60(char *, int, int, int, char *);
extern void func_16BA68(void);

int func_16B2B8(Obj *o)
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
        t = D_0024FC54 + v;
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
    func_1F9D08((Outer *)rec->w0, (Target *)o, (Hook *)D_003E2C48, 1);
    o->b45 = 0;
    *(int *)(o->w48 + 0xDC) = (int)func_16BA68;
    func_204068(o);
    func_07FA60(area + 0x110, 4, 0x44, 0x45, D_002683D0);
    o->w78 = (o->w78 & 0xFFF0FFFF) | 0x20000;
    return 1;
}
