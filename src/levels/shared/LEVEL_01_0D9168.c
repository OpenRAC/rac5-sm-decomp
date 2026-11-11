/* LEVEL_01:0x0D9168 -- writes one float of a record. */
typedef struct {
    float f[9];
    float g;
} Rec;

void func_0D9168(Rec *p, float v)
{
    p->g = v;
}
