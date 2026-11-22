/* USA LEVEL_10.REL:0x176AD8, 336-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 20 differing words; first difference at 0x7C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int idx;
    float f4;
} Cursor;

typedef struct {
    int id;
    char pad_04[8];
    float f0C;
    float f10;
} Row;

typedef struct {
    int w[7];
} Block;

typedef struct {
    char pad_00[4];
    Cursor *cursor;
    int mode;
    int w0C;
    unsigned char b10;
    char pad_11[3];
    float f14;
    float f18;
    float f1C;
    float f20;
} Motion;

typedef struct {
    char pad_00[0xA4];
    Block block;
} Target;

typedef struct Obj Obj;

extern Cursor D_0022A4B0;
extern Row D_0022A470[];
extern Block D_0039F260;

extern void func_1730A0(float a, float b, Target *t, int id);
extern float func_173168(Target *t, int id);
extern void func_173898(int *object);
extern void func_173850(Obj *obj);

void func_176AD8(Motion *m, Target *t)
{
    Row *row;
    float r;
    float a;
    float b;
    float k;
    float c;

    m->cursor = &D_0022A4B0;
    m->mode = 3;
    m->w0C = 0;
    row = &D_0022A470[D_0022A4B0.idx];
    func_1730A0(0.2f, 0.15f, t, row->id);
    r = func_173168(t, row->id);
    a = r * row->f0C;
    m->f1C = a;
    b = r * row->f10;
    m->f20 = b;
    m->b10 = 0;
    k = 1.0f / (b - a);
    c = (m->cursor->f4 + m->cursor->f4) * k;
    m->f14 = c * 0.033333335f;
    m->f18 = -c * k * 0.033333335f * 0.033333335f;
    func_173898((int *)t);
    t->block = D_0039F260;
    func_173850((Obj *)t);
}
