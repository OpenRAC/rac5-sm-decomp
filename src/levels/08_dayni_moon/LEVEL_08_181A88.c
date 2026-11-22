/* LEVEL_08:0x181A88 -- placement copy of LEVEL_04_176288.c: resolves the record's stored offset into a pointer (kept only when its target is valid), and on success, when a counter is below three, clears the object's work area, sets a flag bit, registers it through func_1F9D08, installs its hook, runs func_07FA60 and func_204068 and updates a field of the flag word; returns whether it ran. */
typedef struct {
    int w0;
    int w4;
} Rec;

typedef struct {
    char pad00[0x46];
    unsigned char b46;
    char pad47[0x48 - 0x47];
    char *w48;
    char pad4C[0x54 - 0x4C];
    Rec *rec;
    char *w58;
    char pad5C[0x64 - 0x5C];
    unsigned int w64;
    char pad68[0x74 - 0x68];
    unsigned short h74;
    unsigned short pad76;
    unsigned int w78;
} Obj;

typedef struct {
    char pad_00[0x64];
    int f_64;
} Target;

typedef void (*Hook)(Target *a0, int a1);

extern int D_0024FC54;
extern char D_003E5B00[];
extern char D_0026B768[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_1F9D08(char *a0, Obj *a1, char *a2, int a3);
extern void func_204068(Obj *o);
extern void func_07FA60(char *, int, int, int, char *);
extern void func_1820B8(void);

int func_181A88(Obj *o)
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
    if (rec->w4 >= 3)
        return 0;
    area = o->w58;
    memset(area, 0, 0x168);
    o->w64 = o->w64 | 0x1000;
    func_1F9D08((char *)rec->w0, o, D_003E5B00, 0);
    o->b46 = 0;
    *(int *)(o->w48 + 0xDC) = (int)func_1820B8;
    o->h74 = 2;
    func_07FA60(area + 0x110, 4, 0x44, 0x45, D_0026B768);
    o->w78 = (o->w78 & 0xFFF0FFFF) | 0x20000;
    func_204068(o);
    *(int *)(area + 0x15C) = 0;
    return 1;
}
