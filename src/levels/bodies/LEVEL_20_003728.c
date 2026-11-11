/* LEVEL_20:0x003728 -- placement copy of LEVEL_01_003B58.c. */
typedef struct {
    char pad[0x164];
    float f164;
    char pad2[0];
    float f168;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_000FD3C4;

void func_003728(float a, float b)
{
    D_000FD3C4.p->f164 = a;
    D_000FD3C4.p->f168 = b;
}
