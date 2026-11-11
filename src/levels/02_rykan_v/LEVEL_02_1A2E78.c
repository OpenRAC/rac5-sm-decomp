/* LEVEL_02:0x1A2E78 -- copies the live vector into the object and marks the
   node as started. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

typedef struct {
    char pad0[0x10];
    int f_10;
    char pad1[0x1C - 0x14];
    unsigned char b_1C;
} Node;

typedef struct {
    char pad0[0x30];
    float f_30;
    float f_34;
    float f_38;
    char pad1[0x54 - 0x3C];
    Node *p_54;
} Obj;

void func_1A2E78(Obj *self)
{
    Node *n = self->p_54;
    Vec *v = *(Vec **)(*(char **)n + 4);
    float *d = &self->f_30;

    d[0] = v->x;
    d[1] = v->y;
    d[2] = v->z;
    n->b_1C = 1;
    n->f_10 = 0;
}
