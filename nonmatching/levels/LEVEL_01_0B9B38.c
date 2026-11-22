/* USA LEVEL_01.REL:0x0B9B38, 212-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 4 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Obj {
    char pad_00[8];
    int f_08;
    float scale_0C;
    float scale_10;
    int count_14;
    char pad_18[0x24 - 0x18];
    int start_24;
    int cur_28;
    int end_2C;
    int zero_30;
    int zero_34;
    int zero_38;
    unsigned int id_3C;
    char pad_40[0x48 - 0x40];
    int mode_48;
    char pad_4C[0x64 - 0x4C];
    unsigned int id_64;
    int zero_68;
    int id_6C;
    int id_70;
} Obj;

extern void func_0B9A88(Obj *o, unsigned int v);
extern void func_0B9A68(Obj *o, float a, float b);
extern void func_0B9A78(Obj *o, int a, int b);
extern void func_0B9E90(Obj *o, int a, int b, int w, int h);

int func_0B9B38(Obj *o, int start, int len)
{
    o->zero_30 = 0;
    o->zero_34 = 0;
    o->zero_38 = 0;
    o->f_08 = 0;
    o->end_2C = start;
    o->start_24 = start;
    o->cur_28 = start + len;
    func_0B9A88(o, 0xFFFFFFFF);
    func_0B9A68(o, 1.0f, 1.0f);
    o->mode_48 = 2;
    func_0B9A78(o, 1, 1);
    func_0B9E90(o, 0, 0, 0x1E0, 0x110);
    o->id_3C = 0xFFFFFFFF;
    o->zero_68 = 0;
    o->scale_0C = 1.0f;
    o->scale_10 = 1.0f;
    o->id_6C = -1;
    o->id_70 = -1;
    o->id_64 = 0xFFFFFFFF;
    o->count_14 = 10;
    return 1;
}
