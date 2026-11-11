/* LEVEL_17.REL:0x148C70 -- packs the two caller vectors and the half weight
   into the eight-word block and hands it to func_0D8DE0. */
typedef struct {
    float v[3];
} V3;

typedef struct {
    V3 a;
    V3 b;
    float k;
    int flag;
} Blk;

void func_0D8DE0(void *a0, Blk *blk, int a2);

void func_148C70(void *a0, V3 *a1, V3 *a2)
{
    Blk t;

    t.a.v[0] = a1->v[0];
    t.a.v[1] = a1->v[1];
    t.a.v[2] = a1->v[2];
    t.b.v[0] = a2->v[0];
    t.b.v[1] = a2->v[1];
    t.b.v[2] = a2->v[2];
    t.k = 0.5f;
    t.flag = 0;
    func_0D8DE0(a0, &t, 0);
}
