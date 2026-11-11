/* LEVEL_19:0x003768 -- placement copy of LEVEL_01_003B58.c. */
typedef struct {
    char pad[0x164];
    float f164;
    char pad2[0];
    float f168;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_0019BE5C;

void func_003768(float a, float b)
{
    D_0019BE5C.p->f164 = a;
    D_0019BE5C.p->f168 = b;
}
