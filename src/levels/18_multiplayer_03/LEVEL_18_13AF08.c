/* LEVEL_18:0x13AF08 -- placement copy of LEVEL_16_13F618.c: finds or builds a chain of linked entries for an object and registers it. */
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

extern char D_001E4410[];
extern int func_1378F0(Obj *o, int a, int b);
extern void func_183B88(Obj *o);
extern char *func_111548(float *p, int a);
extern int func_111988(int id);
extern Ent *func_021758(int id, int f);
extern int func_18F2A8(unsigned int hash, int h, Obj *o);
extern void func_173380(int s0, int id);
extern void func_13AEC8(Obj *o, int a, int s0);
extern int func_13AD70(Obj *o, char *cfg, Arr8 *arr, int n);
extern void *memset(void *, int, unsigned int);

int func_13AF08(Obj *self, int a1, int a2)
{
    Arr8 A;
    Arr8 B;
    Info *info;
    char *cfg;
    int s0;
    int s1;
    unsigned char cnt;
    int n;

    info = self->info;
    if (!a2) {
        func_1378F0(self, 3, 0);
        func_183B88(self);
    }
    cfg = func_111548(self->pos, 0);
    if (!cfg)
        cfg = D_001E4410;
    if (info->id) {
        if (func_111988(info->id)) {
            s0 = func_18F2A8(0x27A1E117, func_021758(info->id, ((Cfg *)cfg)->f)->h, self);
            if (s0) {
                func_173380(s0, info->id);
                func_13AEC8(self, a1, s0);
                return 1;
            }
        }
    }
    memset(&B, 0, 0x20);
    B.w[0] = info->b10;
    B.w[1] = info->b11;
    A = B;
    for (cnt = 0; cnt < 6; cnt++) {
        n = cnt + 2;
        s1 = func_13AD70(self, cfg, &A, n);
        if (!s1)
            return 0;
        s0 = func_18F2A8(0x27A1E117, func_021758(s1, ((Cfg *)cfg)->f)->h, self);
        if (s0) {
            func_173380(s0, s1);
            func_13AEC8(self, a1, s0);
            return 1;
        }
        A.w[n] = s1;
    }
    return 0;
}
