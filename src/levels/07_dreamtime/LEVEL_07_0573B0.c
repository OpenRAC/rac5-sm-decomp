/* LEVEL_07:0x0573B0 -- placement copy of LEVEL_01_056BD0.c: scans the pickup table for the first entry within reach of the object, and if one passes the overlap test latches it into the object. */

typedef struct {
    char pad_00[0xC];
    char a[0xC];
    char b[0xC];
    float pos[3];
    int w_30;
} Ent;

extern int D_00208B2C;
extern Ent *D_00208B30;
extern float D_0024E7F0;
extern char D_00223628[];
extern int func_03C910(char *object);
extern int func_120DF8(float *p, float f0, float f1, float *q, char *r, Ent *e, char *a, char *b);

int func_0573B0(char *o)
{
    Ent *e;
    Ent *end;
    float r2;
    float px;
    float py;
    float pz;
    float dx;
    float dy;
    float dz;
    unsigned char ok;

    if (*(short *)(o + 0x100) == 0x37) {
        return 0;
    }
    if (((int (*)(void))func_03C910)()) {
        return 0;
    }
    e = D_00208B30;
    end = e + D_00208B2C;
    r2 = D_0024E7F0 * D_0024E7F0;
    px = *(float *)(o + 0x30);
    py = *(float *)(o + 0x34);
    pz = *(float *)(o + 0x38);
    for (; e != end; e++) {
        dx = e->pos[0] - px;
        dy = e->pos[1] - py;
        dz = e->pos[2] - pz;
        if (dx * dx + dy * dy + dz * dz < r2) {
            ok = func_120DF8((float *)(o + 0x30), r2, 1.0f, e->pos, D_00223628, e, e->a, e->b);
            if (ok) {
                break;
            }
        }
    }
    if (e == end) {
        return 0;
    }
    *(short *)(o + 0x102) = 0x37;
    *(int *)(o + 0xCA4) = e->w_30;
    return 0;
}
