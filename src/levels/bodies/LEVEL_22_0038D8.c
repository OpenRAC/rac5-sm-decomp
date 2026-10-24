/* LEVEL_22:0x0038D8 -- writes the two level fields of the global record,
   reloading the record pointer between them. */
typedef struct {
    char pad0[0x164];
    float f164;
    float f168;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_0014E5D4;

void func_0038D8(float f12, float f13)
{
    D_0014E5D4.p->f164 = f12;
    D_0014E5D4.p->f168 = f13;
}
