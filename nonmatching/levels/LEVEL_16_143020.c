/* USA LEVEL_16.REL:0x143020, 324-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 8 differing words; first difference at 0xCC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x14];
    float val_14;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state_45;
    unsigned char sub_46;
    char pad47[0x11];
    Rec *rec_58;
    char pad5C[8];
    unsigned int flags_64;
    int w68;
    char pad6C[4];
    float spin_70;
} Obj;

extern int D_001D3688;
extern int D_001D368C;
extern float D_001D3694;
extern float D_001D369C;
extern int rand(void);

void func_143020(Obj *o, int mode)
{
    Rec *r;
    float lo;
    float span;
    float k;
    float range;

    switch (mode) {
    case 1:
        range = 4.0f;
        o->flags_64 |= 0x40;
        o->w68 = D_001D3688;
        o->spin_70 = (float)rand() * 4.656613e-10f * range + 2.0f;
        break;
    case 3:
        r = o->rec_58;
        k = 4.656613e-10f;
        o->flags_64 |= 0x40;
        o->spin_70 = (float)rand() * k + 0.5f;
        o->w68 = D_001D368C;
        o->sub_46 = 1;
        lo = D_001D3694;
        span = D_001D369C - lo;
        r->val_14 = lo + span * ((float)rand() * k);
        break;
    default:
        break;
    }
    o->state_45 = mode;
}
