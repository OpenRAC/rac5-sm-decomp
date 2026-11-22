/* USA LEVEL_01.REL:0x0CD618, 232-byte candidate (21 November 2026).
 * Measured pinned: 24 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Res {
    int base;
} Res;

typedef struct Model {
    int pad0;
    int off;
    Res *res;
} Model;

typedef struct Link {
    char pad00[4];
    Model *model;
} Link;

typedef struct Rec {
    char pad00[0x40];
    Link *link;
} Rec;

extern Rec *D_002356F0;
extern Rec *D_0032C2C0;
extern Model *D_0032C2C4;
extern char D_0032C360[];
extern char D_0032C388[];
extern char D_0032C300[];

extern void func_089B60(Res *res, unsigned int a, int off, char *dst);
extern void func_089BE8(int base, char *dst);
extern void func_088F68(char *obj);
extern void func_088B20(char *obj, char *src, float f);

void func_0CD618(void)
{
    D_0032C2C0 = D_002356F0;
    D_0032C2C4 = D_0032C2C0->link->model;
    func_089B60(D_0032C2C4->res, 0xFFFFFFFF, D_0032C2C4->off + 0x20, D_0032C360);
    func_089BE8(D_0032C2C4->res->base + 0x13C0, D_0032C360);
    func_089B60(D_0032C2C4->res, 0xFFFFFFFF, D_0032C2C4->off + 0x20, D_0032C388);
    func_089BE8(D_0032C2C4->res->base + 0x13C0, D_0032C388);
    func_088F68(D_0032C300);
    func_088B20(D_0032C300, D_0032C360, 0.0f);
}
