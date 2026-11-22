/* USA LEVEL_02.REL:0x174490, 296-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0xD4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern float D_00236830;
extern char D_003ACB10[];
extern void func_1E2008(char *a);
extern char *func_0011D8(void);
extern void func_174628(Slot *s, float dt);

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

void func_174490(Obj *o)
{
    char *pl;
    float *pos;
    Slot *s;
    Slot *end;
    float r2;
    int near;
    int n;

    func_1E2008(D_003ACB10);
    pl = func_0011D8();
    if (pl != 0) {
        n = o->count;
        pos = (float *)(pl + 0x30);
        r2 = D_00236830 * D_00236830;
        s = o->slots;
        end = s + n;
        for (; s != end; s++) {
            if ((s->flags & 7) != 1) {
                continue;
            }
            near = Near(s->pt, pos, r2);
            if (near) {
                continue;
            }
            if (s->state == 1) {
                continue;
            }
            func_174628(s, 0.03333333507180214f);
        }
    }
}
