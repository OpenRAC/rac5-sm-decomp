/* LEVEL_19:0x18CF40 -- placement copy of LEVEL_01_1DB6F0.c: registers four edge planes of a box record with the shared constraint routine, each with its global handle, the record's value words and the object's two parameters (the last two also carry the object's first two words). */
typedef struct Box {
    float x0;
    float x1;
    int a_08;
    int a_0C;
    float y0;
    float y1;
    float w_18;
    int a_1C;
    int a_20;
} Box;

typedef struct Obj {
    int w_00;
    int w_04;
    int p_08;
    int p_0C;
    Box *box_10;
} Obj;

extern int D_001BF8D4;
extern int D_001BF8D8;
extern int D_001BF8DC;
extern int D_001BF8E0;
extern void func_0CC240(float f12, float pitch, int a0, int a1, int a2, void * pos, int t0, float f14, float f15, float f16);

void func_18CF40(Obj *o)
{
    Box *b = o->box_10;

    func_0CC240(b->x0, 0.0f, D_001BF8D4, b->a_08, o->p_0C, (void *)o->p_08, 0, -1.0f, 0.0f, 0.0f);
    func_0CC240(b->x0, b->x1, D_001BF8D8, b->a_0C, o->p_0C, (void *)o->p_08, 0, -1.0f, 0.0f, 0.0f);
    func_0CC240(b->y0, -b->w_18, D_001BF8DC, b->a_1C, o->p_0C, (void *)o->p_08, o->w_00, -1.0f, 0.0f, 0.0f);
    func_0CC240(b->y1, b->w_18, D_001BF8E0, b->a_20, o->p_0C, (void *)o->p_08, o->w_04, -1.0f, 0.0f, 0.0f);
}
