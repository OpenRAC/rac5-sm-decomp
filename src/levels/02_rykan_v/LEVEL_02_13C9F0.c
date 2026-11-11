/* LEVEL_02:0x13C9F0 -- hands the global record's four floats to func_0872A0
   when it exists, then always marks the owner's sub-record. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Obj;

typedef struct {
    char pad[0x58];
    int i_58;
} Flagged;

typedef struct {
    char pad[0x58];
    Flagged *p_58;
} Owner;

extern Obj *D_0021C090;

extern void func_0872A0(Owner *a0, Obj *a1, int zero, float x, int r1, float y,
                        int r2, float z, int r3, float w, int r4, int one);

void func_13C9F0(Owner *a0)
{
    Obj *p = D_0021C090;
    Flagged *s = a0->p_58;

    if (p != 0)
        func_0872A0(a0, p, 0, p->f_14, 0, p->f_18, 0, p->f_1C, 0, p->f_20, 0, 1);
    s->i_58 |= 1;
}
