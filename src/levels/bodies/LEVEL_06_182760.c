/* LEVEL_06.REL:0x182760 */
typedef struct {
    char pad0[0x34];
    float f_34;
    char pad1[0x46 - 0x38];
    signed char b_46;
    char pad2[0x54 - 0x47];
    void *p_54;
    char pad3[0x64 - 0x58];
    int f_64;
    char pad4[0x70 - 0x68];
    int f_70;
} Obj;

typedef struct {
    char pad0[4];
    int f_04;
    char pad1[0x34 - 0x08];
    signed char b_34;
    signed char b_35;
    char pad2[0xA8 - 0x36];
    float f_A8;
    int f_AC;
    char pad3[0xB4 - 0xB0];
    int f_B4;
} Sub;

void func_182760(Obj *a0)
{
    Sub *p = (Sub *)a0->p_54;
    float t = a0->f_34;

    p->b_34 = -1;
    p->f_A8 = t;
    p->f_AC = 0;
    a0->f_64 |= 0x800;
    p->f_B4 = 0;
    p->f_04 = 0;
    p->b_35 = 0;
    a0->f_70 = 0;
    a0->b_46 = 0;
}
