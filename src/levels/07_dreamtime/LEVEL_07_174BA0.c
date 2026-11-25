/* LEVEL_07:0x174BA0 -- placement copy of LEVEL_01_16C660.c: relocates the object's record fields by the global base, then checks the sound for the current mode and starts the object's state. */
typedef struct {
    int w0;
    char pad04[0x08];
    int wC;
    unsigned char b10;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char f45;
    unsigned char f46;
    char pad47[0x0D];
    Rec *rec;
    int *p58;
} Obj;

extern int D_0021B094;
extern int D_0022F4F0;
extern unsigned char D_0020A46C;
extern unsigned int func_027888(int index, unsigned int bit);
extern int func_025B08(int value);

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_0021B094 + *p;
    return 1;
}

int func_174BA0(Obj *o)
{
    Rec *r;
    int sel;
    unsigned phase;
    int *dst;

    r = o->rec;
    if (Fix(&r->w0) == 0) {
        return 0;
    }
    o->f46 = 0;
    Fix(&r->wC);
    if (r->b10 != 0) {
        sel = D_0022F4F0;
        phase = o->f45;
        if (sel == 0x16) {
            sel = 3;
        } else if (sel == 0x17) {
            sel = 6;
        }
        if (func_027888(sel * 2 + 2, phase) != 0) {
            return -1;
        }
    }
    if (D_0020A46C == 0) {
        return 1;
    }
    dst = o->p58;
    *dst = func_025B08(o->f45);
    return 1;
}
