/* LEVEL_18.REL:11E378 -- re-initialises the record hanging off the global
   D_001A2F34: three floats at one, two zero words, two 0xFF codes and a one.
   Every write reloads the global pointer. */
typedef struct {
    char pad_00[0x18];
    int f_18;
    int f_1C;
    char pad_20[0x4];
    int f_24;
    float f_28;
    char pad_2C[0x4];
    float f_30;
    float f_34;
    char pad_38[0x8];
    int f_40;
    int f_44;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_001A2F34;

void func_11E378(void)
{
    D_001A2F34.p->f_30 = 1.0f;
    D_001A2F34.p->f_34 = 1.0f;
    D_001A2F34.p->f_28 = 1.0f;
    D_001A2F34.p->f_24 = 0;
    D_001A2F34.p->f_40 = 0;
    D_001A2F34.p->f_18 = 0xFF;
    D_001A2F34.p->f_1C = 0xFF;
    D_001A2F34.p->f_44 = 1;
}
