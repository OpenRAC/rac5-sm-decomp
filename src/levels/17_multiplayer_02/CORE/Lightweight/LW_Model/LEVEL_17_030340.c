/* LEVEL_17:0x030340 -- stores two integers and a float into the caller's
   record and calls the level routine with one of its fields.  The body also
   holds the small helper that follows it. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    int i_00;
    int i_04;
    char pad1[0x10 - 0x08];
    V3 v;
    char pad2[0x80 - 0x1C];
    float f_80;
} Rec;

extern void func_030090(V3 *out, void *a1, void *a2);

void func_030340(Rec *a0, void *a1, void *a2, void *a3, int t0, int t1,
                 float f)
{
    a0->i_04 = t0;
    a0->f_80 = f;
    a0->i_00 = t1;
    func_030090(&a0->v, a2, a3);
}

int func_030378(int *a0, int *a1)
{
    return *a0 - *a1;
}
