/* LEVEL_01.REL:0x01D110 -- biased difference of two points against a sign. */
typedef struct { float x, y, z; } Vec3;

void func_01D110(Vec3 *out, Vec3 *alt, Vec3 *a, Vec3 *b, Vec3 *t, float s)
{
    if (t->x < 0.0f)
    {
        out->x = b->x - s;
        alt->x = a->x + s;
    }
    else
    {
        out->x = a->x - s;
        alt->x = b->x + s;
    }

    if (t->y < 0.0f)
    {
        out->y = b->y - s;
        alt->y = a->y + s;
    }
    else
    {
        out->y = a->y - s;
        alt->y = b->y + s;
    }

    if (t->z < 0.0f)
    {
        out->z = b->z - s;
        alt->z = a->z + s;
    }
    else
    {
        out->z = a->z - s;
        alt->z = b->z + s;
    }
}
