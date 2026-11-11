typedef struct {
    float m[12];
} Mat;

typedef struct {
    int f00;
    unsigned count;
    char pad[4];
    char *f0C;
    unsigned char *f10;
} Obj;

extern Mat D_001858B0[];

int func_0706A0(Obj *o, unsigned char *a1, Mat *out, unsigned idx, int flag)
{
    unsigned i;

    if (idx < o->count) {
        if (o->f10 != 0)
            return 0;
    }
    for (i = 0; i < o->count; i++) {
        int k = o->f10[i];

        if (a1 != 0)
            k = a1[k];
        if (flag != 0 && i < 2) {
            out[i].m[0] = 0.0f;
            out[i].m[1] = 0.0f;
            out[i].m[2] = 0.0f;
            out[i].m[3] = 1.0f;
            out[i].m[8] = 0.0f;
            out[i].m[9] = 0.0f;
            out[i].m[10] = 0.0f;
            out[i].m[4] = 1.0f;
            out[i].m[5] = 1.0f;
            out[i].m[6] = 1.0f;
        } else if (k >= 0) {
            out[i] = D_001858B0[k];
        } else {
            out[i] = *(Mat *)(o->f0C + i * 0x30);
        }
    }
    return 1;
}
