/* LEVEL_10:0x0197D8 -- copies four floats into a global record and sets a
   scale field to 0.6f.  The retail reaches the record on the 0x240000 page. */
typedef struct {
    float a;
    float b;
    float c;
    float d;
    char pad[0x70 - 0x10];
    float scale;
} Rec;

extern char D_00240000[];

void func_0197D8(Rec *src)
{
    Rec *dst = (Rec *)(D_00240000 - 0x70A0);

    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
    dst->scale = 0.6f;
}
