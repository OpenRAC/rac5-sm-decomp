/* LEVEL_08:0x2300E8 -- initializes a record's vectors from two inputs and fills two random values. */
struct Rec {
    char pad00[0x30];
    float v30[3];
    float v3C[3];
    float v48[3];
    float v54[3];
    float r60[2];
};

extern int rand(void);
extern void func_115930(struct Rec *, char *, int);

void func_2300E8(struct Rec *o, char *a, float *p1, float *p2)
{
    unsigned int i;
    float *va;
    float *vb;
    float *vc;
    float *vd;

    func_115930(o, a + 0x10, 2);
    va = o->v30;
    vb = o->v3C;
    vc = o->v48;
    vd = o->v54;
    va[0] = p1[0];
    va[1] = p1[1];
    va[2] = p1[2];
    vb[0] = p2[0];
    vb[1] = p2[1];
    vb[2] = p2[2];
    vc[0] = va[0];
    vc[1] = va[1];
    vc[2] = va[2];
    vd[0] = vb[0];
    vd[1] = vb[1];
    vd[2] = vb[2];
    for (i = 0; i < 2; i++) {
        o->r60[i] = (float)rand() * 4.6566123179658803e-10f;
    }
}
