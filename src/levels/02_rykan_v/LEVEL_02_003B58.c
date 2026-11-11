/* LEVEL_02.REL:0x003B58 -- writes two floats through the reloadable global
   pointer D_203ED4. */
typedef struct {
    char pad_00[0x164];
    float f_164;
    float f_168;
} Node;

typedef struct {
    Node *p;
} Holder;

extern Holder D_203ED4;

void func_003B58(float a0, float a1)
{
    D_203ED4.p->f_164 = a0;
    D_203ED4.p->f_168 = a1;
}
