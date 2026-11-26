/* LEVEL_19:0x15AA88 -- initializes an entity's matrices/state, registers callbacks, and links it into the active list. */
typedef struct Vec4 {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct Mat4 {
    Vec4 r0;
    Vec4 r1;
    Vec4 r2;
    Vec4 r3;
} Mat4;

typedef struct Obj15AA88 Obj15AA88;

typedef struct State58 {
    int x00;
    unsigned char pad04[0xA];
    unsigned char b0E;
    unsigned char pad0F[1];
    Obj15AA88 *owner10;
    int x14;
    Mat4 m18;
    Mat4 m58;
    int x98;
    Obj15AA88 *next9C;
    int xA0;
    int xA4;
    unsigned char bA8;
    unsigned char bA9;
    unsigned char padAA[2];
    float fAC;
    unsigned char bB0;
} State58;

typedef struct Init54 {
    unsigned int x00;
} Init54;

struct Obj15AA88 {
    Mat4 mat;
    void *cfg40;
    unsigned char pad44[0x10];
    Init54 *p54;
    State58 *p58;
};

typedef struct Head15AA88 {
    Obj15AA88 *head;
} Head15AA88;

extern char *D_001B5A24;
extern Mat4 D_001CDE80;
extern char D_0015AE80[];
extern char D_0015B160[];
extern Obj15AA88 *D_001BEFF0;
extern Head15AA88 D_001BEFEC;

extern unsigned int func_1135A8(void);
extern void func_169F90(void *a, void *b, void *key, void *d);
extern void func_15B170(Obj15AA88 *o, int a, int b);

static __inline__ int ResolvePtr(unsigned int *p)
{
    unsigned int off = *p;
    int ok;

    if (off == 0) {
        ok = 0;
    } else {
        char *target = D_001B5A24 + off;
        if (*(int *)(target + 0x40) == 0) {
            *p = 0;
            ok = 0;
        } else {
            *p = (unsigned int)target;
            ok = 1;
        }
    }
    return ok;
}

static __inline__ void CopyMat4(Mat4 *dst, Mat4 *src)
{
    dst->r2.x = src->r2.x;
    dst->r2.y = src->r2.y;
    dst->r2.z = src->r2.z;
    dst->r2.w = src->r2.w;
    dst->r0.x = src->r0.x;
    dst->r0.y = src->r0.y;
    dst->r0.z = src->r0.z;
    dst->r0.w = src->r0.w;
    dst->r1.x = src->r1.x;
    dst->r1.y = src->r1.y;
    dst->r1.z = src->r1.z;
    dst->r1.w = src->r1.w;
    dst->r3.x = src->r3.x;
    dst->r3.y = src->r3.y;
    dst->r3.z = src->r3.z;
    dst->r3.w = src->r3.w;
}

int func_15AA88(Obj15AA88 *o)
{
    State58 *s;
    unsigned int m = func_1135A8();

    if (m == 1 || m == 2) {
        return -1;
    }
    if (!ResolvePtr(&o->p54->x00)) {
        return 0;
    }

    s = o->p58;
    s->b0E = 2;
    s->owner10 = o;
    s->x14 = 0;
    s->x00 = 0;
    CopyMat4(&s->m18, &o->mat);
    CopyMat4(&s->m58, &D_001CDE80);
    s->fAC = 1.0f;
    s->x98 = 0;
    s->next9C = 0;
    s->xA0 = 0;
    s->xA4 = 0;
    s->bA8 = 0;
    s->bA9 = 0;
    s->bB0 = 0;
    func_169F90(D_0015AE80, D_0015B160, o->cfg40, 0);

    if (D_001BEFF0 == 0) {
        D_001BEFF0 = o;
    } else {
        D_001BEFF0->p58->next9C = o;
    }
    s->next9C = D_001BEFEC.head;
    if (D_001BEFEC.head != 0) {
        func_15B170(D_001BEFEC.head, 0, 1);
    }
    D_001BEFEC.head = o;
    func_15B170(o, 1, 1);
    return 1;
}
