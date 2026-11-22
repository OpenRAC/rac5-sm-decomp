/* USA LEVEL_16.REL:0x13F618, 468-byte candidate (22 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w[8];
} Arr8;
typedef struct {
    char pad0[0x10];
    unsigned char b10;
    unsigned char b11;
    unsigned char id;
} Info;
typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad3C[0x18];
    Info *info;
} Obj;
typedef struct {
    char padF8[0xF8];
    int f;
} Cfg;
typedef struct {
    char pad0[0x44];
    int h;
} Ent;

extern char D_001E4090[];
extern void func_13C000(Obj *o, int a, int b);
extern void func_183550(Obj *o);
extern char *func_112898(float *p, int a);
extern int func_112BD0(int id);
extern Ent *func_022110(int id, int f);
extern int func_18DE08(unsigned int hash, int h, Obj *o);
extern void func_16E688(int s0, int id);
extern void func_13F5D8(Obj *o, int a, int s0);
extern int func_13F480(Obj *o, char *cfg, Arr8 *arr, int n);
extern void *memset(void *, int, unsigned int);

int func_13F618(Obj *self, int a1, int a2)
{
    Arr8 A;
    Arr8 B;
    Info *info;
    char *cfg;
    int s0;
    int s1;
    unsigned char idv;
    unsigned int cnt;
    int n;

    info = self->info;
    if (!a2)
        func_13C000(self, 3, 0);
    func_183550(self);
    cfg = func_112898(self->pos, 0);
    if (!cfg)
        cfg = D_001E4090;
    if (info->id) {
        if (func_112BD0(info->id)) {
            s0 = func_18DE08(0x27A1E117, func_022110(info->id, ((Cfg *)cfg)->f)->h, self);
            if (s0) {
                idv = info->id;
                goto found;
            alt:
                idv = s1;
            found:
                func_16E688(s0, idv);
                func_13F5D8(self, a1, s0);
                return 1;
            }
        }
    }
    memset(&B, 0, 0x20);
    cnt = 0;
    B.w[0] = info->b10;
    B.w[1] = info->b11;
    A = B;
    do {
        n = cnt + 2;
        s1 = func_13F480(self, cfg, &A, n);
        if (!s1)
            return 0;
        s0 = func_18DE08(0x27A1E117, func_022110(s1, ((Cfg *)cfg)->f)->h, self);
        if (s0) {
            goto alt;
        }
        A.w[n] = s1;
        cnt = (cnt + 1) & 0xFF;
    } while (cnt < 6);
    return 0;
}
