/* LEVEL_01.REL:0x004B28: reviewed 432-byte candidate, held for ABI review.
 * Converts the stick input into the player's movement values.
 * gnu-ee-trial C with ps2eeas links 432/432 bytes and is byte-exact at this
 * and 19 other USA placements, but the prototypes disagree.
 * It declares func_087EB0 returning pointer with (int), but the accepted
 * LEVEL_01_087EB0.c defines it returning pointer with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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

extern Player *D_001EF254[];
#define BIT(n) ((unsigned char)(D_001EF254[0]->flags >> (n)) & 1)
extern Cfg *D_001F3FAC[];
extern int D_001F3FB8;
extern Input *func_087EB0(int a);
extern int func_02A3F0(int a);

void func_004B28(void)
{
    Input *in;
    float a;
    float b;

    in = func_087EB0(0x1802);
    if (BIT(19)) {
        D_001EF254[0]->f154 = 0;
        D_001EF254[0]->f230 = 1.0f;
    }
    if (BIT(10)) a = -in->x;
    else a = 0.0f;
    if (func_02A3F0(4)) a = -a;
    D_001EF254[0]->f27C = __builtin_fabsf(a);
    D_001EF254[0]->f274 = a * D_001F3FAC[0]->f28 * 0.055850543f;
    if (BIT(11)) {
        b = BIT(10) ? -in->y : 0.0f;
        D_001EF254[0]->f280 = __builtin_fabsf(b);
        D_001EF254[0]->f278 = b * D_001F3FAC[0]->f2C * 0.0069813179f;
    } else {
        D_001EF254[0]->f278 = 0;
    }
    if (in->x != 0.0f || in->y != 0.0f) {
        D_001EF254[0]->f284 = D_001F3FB8;
        D_001EF254[0]->flags |= 0x10;
    }
}
