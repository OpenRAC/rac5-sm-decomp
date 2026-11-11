/* LEVEL_16.REL:0x11F2C0 -- resets the shared emitter state. */
typedef struct {
    char pad_00[0x18];
    int i_18;
    int i_1C;
    char pad_20[0x04];
    int i_24;
    float f_28;
    char pad_2C[0x04];
    float f_30;
    float f_34;
    char pad_38[0x08];
    int i_40;
    int i_44;
} Obj;

typedef struct {
    Obj *p;
} Holder;

extern Holder D_1A1AB4;

void func_11F2C0(void)
{
    D_1A1AB4.p->f_30 = 1.0f;
    D_1A1AB4.p->f_34 = 1.0f;
    D_1A1AB4.p->f_28 = 1.0f;
    D_1A1AB4.p->i_24 = 0;
    D_1A1AB4.p->i_40 = 0;
    D_1A1AB4.p->i_18 = 0xFF;
    D_1A1AB4.p->i_1C = 0xFF;
    D_1A1AB4.p->i_44 = 1;
}
