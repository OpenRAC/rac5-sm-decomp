/* LEVEL_15:0x10ABD8 -- tears down a scene: two local resets, a walk over the
   registered slots, four table registrations, then the inverse of the scale. */
typedef struct {
    char pad00[0xC8];
    char *first;
    int count;
} Reg;

typedef struct {
    char pad00[0x8];
    float f8;
    char pad0C[0x100];
    float f10C;
} Obj;

extern Reg D_002EF92C;
extern char D_0016FEC8;
extern char D_0015C808[];
extern char D_0015C9E8[];
extern char D_002EF6E0[];
extern char D_002EFA00[];
extern char D_002EFA20[];

void func_10C490(void *p);
void func_10BB08(void *p);
void func_11D580(void *p, void *q);
void func_13E970(void *p);
void func_129D90(void *p, void *q);
void func_11DBB0(void *p);
void func_11DD98(void *p, void *q);

void func_10ABD8(int a0, Obj *s2)
{
    char *p;
    char *end;
    char *q;

    func_10C490((char *)s2 + 0x34);
    func_10BB08((char *)s2 + 0x14);
    q = &D_0016FEC8;
    p = D_002EF92C.first;
    end = p + D_002EF92C.count * 0x118;
    while (p != end) {
        func_11D580(p, q);
        p += 0x118;
    }
    func_13E970(D_0015C808);
    func_129D90(D_002EFA00, D_002EF6E0);
    func_11DBB0(D_0015C9E8);
    func_11DD98(D_002EFA20, D_0015C9E8);
    s2->f10C = 1.0f / s2->f8;
}
