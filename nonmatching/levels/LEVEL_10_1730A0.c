/* USA LEVEL_10.REL:0x1730A0, 136-byte candidate (14 November 2026).
 * Measured pinned: 15 differing words; first difference at 52.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x48];
    struct Fx *fx;
} Inner;

struct Fx {
    char pad00[8];
    float f08;
};

typedef struct {
    float a;
    int b;
    float c;
} Entry;

typedef struct {
    Inner *inner;
    char pad04[0xE4 - 4];
    int index;
    int b;
    float c;
} Obj;

extern Entry D_0022A4E8[];
extern void func_07D358(Inner *inner, int index, float second, float first, int a, int b);

void func_1730A0(Obj *o, int index, float first, float second)
{
    func_07D358(o->inner, index, second, first, 0, 1);
    o->index = index;
    o->inner->fx->f08 = D_0022A4E8[index].a;
    o->c = D_0022A4E8[index].c;
    o->b = D_0022A4E8[index].b;
}
