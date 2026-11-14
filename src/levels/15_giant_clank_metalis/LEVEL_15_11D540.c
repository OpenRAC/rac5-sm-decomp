/* LEVEL_15:0x11D540 -- forwards its arguments to the shared initialiser together with a one-bit mask derived from the record's kind byte, a fixed table and the record's two floats. */
typedef struct {
    float x, y, z;
} V3;

typedef struct {
    float f[6];
} V6;

typedef struct Obj Obj;

typedef struct {
    char pad00[0x0C];
    float f0C;
    float f10;
    unsigned char kind;
} Rec;

extern char D_0016C5D8[];

extern void func_11D218(Obj *o, V6 *v, int a2, int a3, V3 *t0, V3 *t1, float fa, float fb, V3 *t2);

void func_11D540(Obj *o, V6 *v, int a2, int a3, Rec *rec)
{
    func_11D218(o, v, a2, a3, (V3 *)(1 << (rec->kind | 0x10)), (V3 *)D_0016C5D8, rec->f0C, rec->f10, (V3 *)rec);
}
