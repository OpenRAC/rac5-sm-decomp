/* LEVEL_02.REL:0x16BF48 -- walks into entry a1 (stride 0x1C) of the +0x54
   table, follows its +0x4 link and copies the +0x8/+0xC floats out. */
typedef struct {
    unsigned char pad0[8];
    float v_8;
    float v_C;
} Src;

typedef struct {
    unsigned char pad0[4];
    Src *p_4;
    unsigned char pad1[0x1C - 8];
} Ent;

typedef struct {
    unsigned char pad0[0x54];
    Ent *tab_54;
} Rec;

typedef struct {
    float x;
    float y;
} Vec2;

void func_16BF48(Rec *a0, unsigned char idx, Vec2 *a2)
{
    Ent *e = &a0->tab_54[idx];
    Src *s = e->p_4;

    a2->x = s->v_8;
    a2->y = s->v_C;
}
