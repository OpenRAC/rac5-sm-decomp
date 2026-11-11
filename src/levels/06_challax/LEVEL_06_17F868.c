/* LEVEL_06:0x17F868 -- picks a random ring offset and a random spray direction around two anchors. */
typedef struct V3 { float x; float y; float z; } V3;

extern V3 D_00206D28;
extern V3 D_00206D08;
extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern float sqrtf(float x);

void func_17F868(int unused, float *a, float *b)
{
    float ang;
    float phi;
    float c;
    float s;
    float t;

    ang = (float)rand() * 4.656612873077393e-10f;
    ang = ang + ang;
    ang = ang * 3.1415927410125732f;
    a[0] = cosf(ang);
    a[2] = sinf(ang);
    a[0] = D_00206D28.x + a[0] * 0.10000000149011612f;
    a[2] = D_00206D28.z + a[2] * 0.10000000149011612f;
    a[0] = a[0] * 0.75f;
    a[1] = 0.07500000298023224f;
    a[2] = a[2] * 0.75f;
    b[2] = (float)rand() * 9.313225746154785e-10f - 1.0f;
    phi = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
    c = cosf(phi);
    s = sqrtf(1.0f - c * c);
    if (phi < 0.0f) s = -s;
    t = sqrtf(1.0f - b[2] * b[2]);
    b[0] = c * t;
    b[1] = s * t;
    b[0] = D_00206D08.x + a[0] * 0.10000000149011612f;
    b[2] = D_00206D08.z + a[2] * 0.10000000149011612f;
}
