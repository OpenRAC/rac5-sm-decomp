/* LEVEL_01.REL:0x033430 -- tests on which side of the two-component edge of
   the +0x10 pair the record a0 lies, seen from a2.  The two components live in
   a two-slot array and are written in subscript order: swapped, the compiler
   gives the roles to the other float registers. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

typedef struct {
    unsigned char pad0[0x10];
    float m4;
    float m5;
} Mat;

int func_033430(Vec *a0, Mat *a1, Vec *a2)
{
    float d[2];
    float t;

    d[0] = a2->x - a0->x;
    d[1] = a2->z - a0->z;
    t = d[1] * a1->m4 - d[0] * a1->m5;
    return t < 0.0f;
}
