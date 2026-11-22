/* USA LEVEL_01.REL:0x057D00, 284-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 3 differing words; first difference at 0x68.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Root {
    char pad_00[0x54];
    void *child;
} Root;

typedef struct Obj {
    char pad_000[0x30];
    Vec3 pos;
    char pad_3C[0xCC];
    unsigned short s_108;
    unsigned short s_10A;
    char pad_10C[0x114];
    float f_220;
    float f_224;
    float f_228;
    char pad_22C[0xA48];
    int w_C74;
    char pad_C78[0x10];
    int w_C88;
    float f_C8C;
    float f_C90;
    float f_C94;
    float f_C98;
    float f_C9C;
    float f_CA0;
    Root *root;
    Vec3 tgt;
    float f_CB4;
    float f_CB8;
    char pad_CBC[8];
    int w_CC4;
    int w_CC8;
    char pad_CCC[4];
    float f_CD0;
    char pad_CD4[4];
    float f_CD8;
    float f_CDC;
    char pad_CE0[4];
    int w_CE4;
    int w_CE8;
    int w_CEC;
} Obj;

extern Root *func_056BD0(Obj *o);
extern void func_04DA70(float, float, void *, int, int, int);
extern void func_0572E0(Obj *o, void *a);
extern void func_087DE8(unsigned int value);

void func_057D00(Obj *o)
{
    Root *root;
    void *child;
    Vec3 *src;
    Vec3 *dst;

    root = o->root;
    if (root == 0) {
        root = func_056BD0(o);
        if (root == 0) {
            return;
        }
    }
    child = root->child;
    o->s_108 = 1;
    o->s_10A = 1;
    o->w_C74 = 0;
    o->w_CC4 = 1;
    func_04DA70(0.4000000059604645f, 0.0f, o, 0x42, 0, 1);
    o->w_CC8 = -1;
    o->f_CD0 = 60.0f;
    src = &o->pos;
    dst = &o->tgt;
    dst->x = src->x;
    o->w_C88 = 0;
    o->f_C8C = 0.0f;
    o->f_C90 = 0.0f;
    o->f_C94 = 0.0f;
    o->f_CB8 = 0.0f;
    o->f_CB4 = 0.0f;
    o->f_CD8 = 0.0f;
    o->f_CDC = 0.0f;
    dst->y = src->y;
    dst->z = src->z;
    o->f_CA0 = 0.0f;
    o->f_C9C = 0.0f;
    o->f_C98 = 0.0f;
    o->f_228 = 0.0f;
    o->f_224 = 0.0f;
    o->f_220 = 0.0f;
    o->w_CE8 = 0;
    o->w_CEC = 0;
    o->w_CE4 = 0;
    func_0572E0(o, child);
    func_087DE8(0x1000);
}
