typedef struct {
    float x;
    float y;
    float z;
} V3;

typedef struct {
    char pad0[0xE4];
    int vE4;
    int vE8;
    char pad1[0x1A4 - 0xEC];
    int v1A4;
} G;

extern G D_2F3D20;

void func_131C40(V3 *a0)
{
    G *g = &D_2F3D20;
    char *c = (char *)g->vE4;
    char *e = (char *)g->vE4 + g->vE8 * 0x70;
    float *p = (float *)((char *)c + 0x60);

    g->v1A4 = 0;
    while (c != e) {
        p[-15] = p[0] - a0->x;
        p[-14] = p[1] - a0->y;
        p[-13] = p[2] - a0->z;
        c += 0x70;
        p = (float *)((char *)p + 0x70);
    }
}
