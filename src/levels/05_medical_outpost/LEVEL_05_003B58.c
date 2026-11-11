/* LEVEL_05.REL:0x003B58 -- writes two float slots of the
   current record. */
typedef struct {
    char pad[0x164];
    float f_164;
    float f_168;
} Obj;

typedef struct { Obj *p; } Holder;

extern Holder D_001DE5D4;

void func_003B58(float a, float b)
{
    D_001DE5D4.p->f_164 = a;
    D_001DE5D4.p->f_168 = b;
}
