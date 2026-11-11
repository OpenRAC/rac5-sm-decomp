/* LEVEL_24.REL:0x12FFF0 -- draws one effect on the node's slot at +0x30,
   with the angle taken from the live or the resting field of the record. */
typedef struct {
    char pad[0x6C];
    int f_6C;
    char pad2[0xD8 - 0x70];
    float f_D8;
    float f_DC;
} Rec;

typedef struct {
    char pad[0x58];
    Rec *f_58;
} Obj;

extern void func_01AC18(void *a0, void *a1, void *a2, int a3, int t0, int t1,
                        int t2, float f12);

void func_12FFF0(Obj *a0, void *a1, void *a2)
{
    Rec *v = a0->f_58;
    float f;

    if (v->f_6C)
        f = v->f_DC;
    else
        f = v->f_D8;
    func_01AC18(a1, a2, (char *)a0 + 0x30, 0x529, 0x101, 2, 1, f);
}
