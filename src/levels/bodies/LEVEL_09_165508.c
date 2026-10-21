/* LEVEL_09:0x165508 -- same shape as LEVEL_04:0x17F100. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    V3 a;
    V3 b;
    float c;
    int d;
} Args;

extern void func_0E90D8(char *a0, Args *a1, int a2);

void func_165508(char *a0, V3 *a1, V3 *a2)
{
    Args t;

    t.a.x = a1->x;
    t.a.y = a1->y;
    t.a.z = a1->z;
    t.b.x = a2->x;
    t.b.y = a2->y;
    t.b.z = a2->z;
    t.c = 0.5f;
    t.d = 0;
    func_0E90D8(a0, &t, 0);
}
