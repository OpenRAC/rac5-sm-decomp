/* LEVEL_03:0x159A88 -- placement copy of LEVEL_02_174490.c: per-frame pass over the object's 128-byte slots: slots of kind 1 are advanced by a fixed step when their tracked point lies inside the player's squared radius or when they are not already in state 1. */
typedef struct Pt {
    int pad_00;
    float x;
    float y;
    float z;
} Pt;

typedef struct Slot {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x4C - 0x46];
    Pt *pt;
    char pad_50[0x64 - 0x50];
    unsigned int flags;
    char pad_68[0x80 - 0x68];
} Slot;

typedef struct Obj {
    char pad_00[0xC];
    Slot *slots;
    char pad_10[0x30 - 0x10];
    int count;
} Obj;

extern float D_002382F8;
extern char D_003AFBD0[];
extern void func_1DDB08(char *a);
extern char *func_001200(void);
extern void func_159C20(Slot *s, float dt);

static __inline__ float Dist2(float *a, float *b)
{
    float dx = a[0] - b[0];
    float dy = a[1] - b[1];
    float dz = a[2] - b[2];

    return dx * dx + dy * dy + dz * dz;
}

static __inline__ int Near(Pt *p, float *pos, float r2)
{
    if (p == 0) {
        return 0;
    }
    return Dist2(pos, &p->x) < r2;
}

void func_159A88(Obj *o)
{
    char *pl;
    float *pos;
    Slot *s;
    Slot *end;
    float r2;
    int near;
    int n;

    func_1DDB08(D_003AFBD0);
    pl = func_001200();
    if (pl != 0) {
        n = o->count;
        pos = (float *)(pl + 0x30);
        r2 = D_002382F8 * D_002382F8;
        s = o->slots;
        end = s + n;
        for (; s != end; s++) {
            if ((s->flags & 7) != 1) {
                continue;
            }
            near = Near(s->pt, pos, r2);
            if (near || s->state != 1) {
                func_159C20(s, 0.03333333507180214f);
            }
        }
    }
}
