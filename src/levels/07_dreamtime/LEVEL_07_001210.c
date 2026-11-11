/* LEVEL_07:0x001210 -- stores two angles into the two neighbouring slots of
   the shared record, re-reading the pointer for each store. */
typedef struct {
    char pad_00[0x10C];
    float f_10C;
    float f_110;
} G;

typedef struct {
    G *p;
} Holder;

extern Holder D_00203548;

void func_001210(float a, float b)
{
    D_00203548.p->f_10C = a;
    D_00203548.p->f_110 = b;
}
