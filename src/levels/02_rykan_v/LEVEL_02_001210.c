/* LEVEL_02:0x001210 -- writes the two level fields of the global record,
   reloading the record pointer between them. */
typedef struct {
    char pad0[0x10C];
    float f10C;
    float f110;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_00203EC8;

void func_001210(float f12, float f13)
{
    D_00203EC8.p->f10C = f12;
    D_00203EC8.p->f110 = f13;
}
