typedef struct {
    char pad0[4];
    float v4;
} A;

typedef struct {
    char pad0[0x6C];
    int v6C;
    float v70;
} B;

typedef struct {
    char pad0[0x2E0];
    float v2E0;
    char pad1[0x59C - 0x2E4];
    int v59C;
} C;

extern C D_235140;
extern B D_22FB60;

void func_01A278(void);

void func_01A338(A *a0)
{
    func_01A278();

    {
        C *p = &D_235140;
        if (D_22FB60.v6C == p->v59C) {
            a0->v4 = p->v2E0;
        }
    }
    a0->v4 = a0->v4 + D_22FB60.v70;
}
