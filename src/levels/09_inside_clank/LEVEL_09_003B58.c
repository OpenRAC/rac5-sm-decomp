/* LEVEL_09:0x003B58 -- stores two angles into the two neighbouring slots of
   the shared record, re-reading the pointer for each store. */
typedef struct {
    char pad_00[0x164];
    float f_164;
    float f_168;
} G;

typedef struct {
    G *p;
} Holder;

extern Holder D_001D9054;

void func_003B58(float a, float b)
{
    D_001D9054.p->f_164 = a;
    D_001D9054.p->f_168 = b;
}
