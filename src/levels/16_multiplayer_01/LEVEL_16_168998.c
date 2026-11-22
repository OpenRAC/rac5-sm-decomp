/* LEVEL_16:0x168998 -- advances a table-driven offset animation: writes the object's matrix to the output with its translation moved by the current table entry, steps the counter and runs the state-change checks. */
typedef struct { float x, y, z; } Vec3;
typedef struct { float x, y, z, w; } Vec4;
typedef struct { Vec4 r[4]; } Mat4;

typedef struct {
    char pad00[0x64];
    int f64;
    unsigned char index;
    unsigned char value;
    char pad6A;
    unsigned char b6B;
} State;

typedef struct {
    Vec4 r[4];
    char pad40[0x54 - 0x40];
    int *owner;
    State *state;
    char pad5C[0x70 - 0x5C];
    int f70;
} Obj;

extern Vec3 D_001D6900[][3];
extern unsigned char D_001D68F8[];
extern char D_001D6878[];

extern int func_112E48(void);
extern void func_11D978(float a, float b, int c);
extern int func_168B80(Obj *obj);
extern int func_1161E0(int index);
extern void func_0A7F48(int index, int previous, int id);

static __inline__ void Add3(Vec4 *d, Vec4 *a, Vec3 *b)
{
    d->x = a->x + b->x;
    d->y = a->y + b->y;
    d->z = a->z + b->z;
}

static __inline__ void Copy4(Vec4 *d, Vec4 *s)
{
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    d->w = s->w;
}

void func_168998(Obj *obj, Mat4 *out)
{
    State *st;
    int *owner;
    int rec;

    st = obj->state;
    owner = obj->owner;
    Add3(&out->r[3], &obj->r[3], &D_001D6900[st->index][st->value]);
    Copy4(&out->r[1], &obj->r[1]);
    Copy4(&out->r[0], &obj->r[0]);
    Copy4(&out->r[2], &obj->r[2]);
    st->value = st->value + 1;
    if (func_112E48() != 0 || *owner == 0)
        func_11D978((float)st->value, (float)D_001D68F8[st->index], st->f64);
    if (func_168B80(obj) != 0) {
        if (func_112E48() == 0) {
            if (*owner != 0)
                return;
            st->b6B = 0;
        } else {
            st->b6B = 0;
        }
        rec = func_1161E0(*owner);
        if (rec != 0) {
            do {
                func_0A7F48(*(int *)(rec + 0xF4) - 1, (int)D_001D6878, 0x680);
            } while (0);
        }
        if (D_001D68F8[st->index] == 2) {
            obj->f70 = 0;
            st->b6B = 1;
        }
    }
}
