/* USA LEVEL_01.REL:0x041178, 340-byte candidate (21 November 2026).
 * Measured pinned -fno-gcse: 20 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad_00[0x20];
    float pos_20[3];
    float x_2C;
    float x_30;
    float pad_34;
    float z_38;
    char pad_3C[0x530];
    float y_56C;
    char pad_570[0x2C];
    void *obj_59C;
} Obj;

extern int D_001F45F0;
extern int D_001F45F8;
extern char D_00217E88[];
extern char D_002350A0[];
extern char D_002350F0[];

extern int rand(void);
extern void func_07D098(void *obj, float *vec, int id);
extern void func_1B2880(float *vec, char *tbl, int flags, float a, float b, float c, float d);
extern void func_10B908(int a, float *vec, float *pos, char *tbl);
extern void func_10A370(int a, float *vec, char *tbl, float f0, float f1);

static __inline__ float RandRange(float lo, float range)
{
    return lo + (float)rand() * 4.656612873077393e-10f * range;
}

void func_041178(Obj *o, int id)
{
    float v[4];
    float w[3];
    int i;

    v[3] = 1.0f;
    func_07D098(o->obj_59C, v, id);
    v[1] = o->y_56C;
    i = 0;
    do {
        i++;
        func_1B2880(v, D_00217E88, 0, 0.15000000596046448f,
                    RandRange(0.06666667014360428f, 0.01666666567325592f),
                    0.3490658700466156f, 0.4363323152065277f);
    } while ((unsigned int)i < 4);
    func_10B908(D_001F45F0, v, o->pos_20, D_002350F0);
    w[0] = o->x_30;
    w[2] = o->z_38;
    w[1] = o->y_56C;
    func_10A370(D_001F45F8, w, D_002350A0, 1.0471975803375244f, 1.483529806137085f);
}
