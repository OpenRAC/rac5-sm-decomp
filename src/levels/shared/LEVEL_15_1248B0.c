/* LEVEL_15:0x1248B0 -- derives the projection constants of the record from its extents and writes them back. */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    int n14;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
} Rec;

void func_1248B0(Rec *r)
{
    float inv = 1.0f / (float)(r->n14 - 1);

    r->f20 = 1.0f / (r->f10 / r->f00);
    r->f24 = r->f10 / (r->f10 - r->f0C);
    r->f28 = (r->f18 - r->f04) * inv;
    r->f2C = (r->f1C / r->f10) * inv;
    r->f30 = r->f10 * r->f20;
    r->f34 = -1.0f / r->f10;
}
