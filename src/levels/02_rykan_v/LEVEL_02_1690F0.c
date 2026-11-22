/* LEVEL_02:0x1690F0 -- state handler: when the object is active and the sender is not a type 11 or 13 holder, emits a marker and two effects, then sets a mode. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Fx;

typedef struct {
    char pad_00[0x30];
    float x_30;
    float y_34;
    float z_38;
    char pad_3C[9];
    unsigned char mode_45;
} Obj;

typedef struct {
    char pad_00[0x3F];
    unsigned char kind_3F;
} Info;

typedef struct {
    char pad_00[0x40];
    Info *info_40;
} Sender;

extern Fx *D_0021C51C;
extern Fx *D_0024A5EC;

extern void func_0F5AE0(unsigned int index, float *pos);
extern void func_0872A0(Obj *o, Fx *fx, int a2, int a3, int t0, int t1, int t2, int t3,
                        float f12, float f13, float f14, float f15);
extern void func_1698B8(Obj *o, int state, int code);

int func_1690F0(Obj *o, int a1, int a2, int a3, int a4, Sender *from)
{
    float pos[3];

    if (o->mode_45 == 0)
        return 1;
    if (from != 0) {
        if (from->info_40->kind_3F == 0xD || from->info_40->kind_3F == 0xB)
            return 1;
    }
    pos[0] = o->x_30;
    pos[2] = o->z_38;
    pos[1] = o->y_34 + 0.20000000298023224f;
    func_0F5AE0(0x17, pos);
    if (D_0021C51C != 0)
        func_0872A0(o, D_0021C51C, 0, 0, 0, 0, 0, 1, D_0021C51C->f_14, D_0021C51C->f_18,
                    D_0021C51C->f_1C, D_0021C51C->f_20);
    if (D_0024A5EC != 0)
        func_0872A0(o, D_0024A5EC, 0, 0, 0, 0, 0, 1, D_0024A5EC->f_14, D_0024A5EC->f_18,
                    D_0024A5EC->f_1C, D_0024A5EC->f_20);
    func_1698B8(o, o->mode_45, 0x17);
    return 3;
}
