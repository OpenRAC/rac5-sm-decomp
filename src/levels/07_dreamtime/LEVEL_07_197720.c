/* LEVEL_07:0x197720 -- rebases the four resource offsets of the record into pointers, flags the last one, then rotates the second and third by a half turn. */
typedef struct Res {
    char pad_00[0x40];
    int field_40;
    char pad_44[0x20];
    unsigned int flags;
} Res;

typedef struct Rec {
    int first;
    int second;
    int third;
    int fourth;
} Rec;

typedef struct Obj {
    char pad_00[0x54];
    Rec *rec;
    char pad_58[4];
    int other;
} Obj;

extern int D_0021B094;

extern int func_028A50(int other);
extern void func_127410(void *out, float *in, float angle);
extern void func_1289F8(float *dst, float *src, float *m);

static __inline__ int Fixup(int *slot)
{
    Res *res;

    if (*slot == 0)
        return 0;
    res = (Res *)(D_0021B094 + *slot);
    if (res->field_40 == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (int)res;
    return 1;
}

int func_197720(Obj *self)
{
    Rec *rec = self->rec;
    float m[12];
    float *second;

    if (!Fixup(&rec->first))
        return 0;
    if (!Fixup(&rec->second))
        return 0;
    if (!Fixup(&rec->third))
        return 0;
    if (!Fixup(&rec->fourth))
        return 0;
    ((Res *)rec->fourth)->flags |= 0x10;
    if (func_028A50(self->other)) {
        second = (float *)rec->second;
        func_127410(m, second + 4, 3.1415927f);
        func_1289F8(second, second, m);
        func_1289F8((float *)rec->third, (float *)rec->third, m);
    }
    return 1;
}
