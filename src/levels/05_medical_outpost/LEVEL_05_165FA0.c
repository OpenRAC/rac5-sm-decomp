/* LEVEL_05:0x165FA0 -- packs the two argument vectors and a half into an
   eight-float record and hands it to func_0E9338. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    float a;
    float b;
    float c;
    float d;
    float e;
    float f;
    float g;
    float h;
} V8;

extern void func_0E9338(void *p, V8 *q, int r);

void func_165FA0(void *p, V3 *a1, V3 *a2)
{
    V8 t;
    t.a = a1->x;
    t.b = a1->y;
    t.c = a1->z;
    t.d = a2->x;
    t.e = a2->y;
    t.f = a2->z;
    t.g = 0.5f;
    t.h = 0.0f;
    func_0E9338(p, &t, 0);
}
