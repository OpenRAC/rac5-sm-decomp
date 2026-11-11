/* LEVEL_20:0x0F13C0 -- resets eight fields of the record reached through the
   global pointer D_00104194, reloading the pointer after every write. */
typedef struct {
    char pad[0x18];
    int f_18;
    int f_1C;
    char pad2[0x4];
    int f_24;
    float f_28;
    float f_2C;
    float f_30;
    float f_34;
    char pad3[0x8];
    int f_40;
    int f_44;
} Rec;

typedef struct {
    Rec *p;
} Holder;

extern Holder D_00104194;

void func_0F13C0(void)
{
    D_00104194.p->f_30 = 1.0f;
    D_00104194.p->f_34 = 1.0f;
    D_00104194.p->f_28 = 1.0f;
    D_00104194.p->f_24 = 0;
    D_00104194.p->f_40 = 0;
    D_00104194.p->f_18 = 0xFF;
    D_00104194.p->f_1C = 0xFF;
    D_00104194.p->f_44 = 1;
}
