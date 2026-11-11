/* LEVEL_21:0x004680 -- placement copy of LEVEL_01_004B28.c: converts the stick input into the player's movement values. */
typedef struct Player {
    char pad0[0x40];
    unsigned long long flags;
    char pad48[0x10C];
    int f154;
    char pad158[0xD8];
    float f230;
    char pad234[0x40];
    float f274;
    float f278;
    float f27C;
    float f280;
    int f284;
} Player;

typedef struct Input { char pad0[0x38]; float x; float y; } Input;
typedef struct Cfg { char pad0[0x28]; float f28; float f2C; } Cfg;

extern Player *D_00143EBC[];
#define BIT(n) ((unsigned char)(D_00143EBC[0]->flags >> (n)) & 1)
extern Cfg *D_00148C2C[];
extern int D_00148C38;
extern Input *func_06C590(int a);
extern int func_023BC8(int a);

void func_004680(void)
{
    Input *in;
    float a;
    float b;

    in = func_06C590(0x1802);
    if (BIT(19)) {
        D_00143EBC[0]->f154 = 0;
        D_00143EBC[0]->f230 = 1.0f;
    }
    if (BIT(10)) a = -in->x;
    else a = 0.0f;
    if (func_023BC8(4)) a = -a;
    D_00143EBC[0]->f27C = __builtin_fabsf(a);
    D_00143EBC[0]->f274 = a * D_00148C2C[0]->f28 * 0.055850543f;
    if (BIT(11)) {
        b = BIT(10) ? -in->y : 0.0f;
        D_00143EBC[0]->f280 = __builtin_fabsf(b);
        D_00143EBC[0]->f278 = b * D_00148C2C[0]->f2C * 0.0069813179f;
    } else {
        D_00143EBC[0]->f278 = 0;
    }
    if (in->x != 0.0f || in->y != 0.0f) {
        D_00143EBC[0]->f284 = D_00148C38;
        D_00143EBC[0]->flags |= 0x10;
    }
}
