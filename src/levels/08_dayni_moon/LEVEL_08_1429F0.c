/* LEVEL_08:0x1429F0 -- forwards four floats of the global node to the shared
   renderer, with a fixed set of integer parameters.  The retail reaches the
   node pointer through the page symbol D_00250000 plus a -0x210 offset. */
typedef struct {
    char pad[0x14];
    float f5;
    float f6;
    float f7;
    float f8;
} Node;

extern char D_00250000[];

extern void func_088940(void *a, void *b, float c, float d, float e, float f,
                         int g, int h, int i, int j, int k, int l);

void func_1429F0(void *a0)
{
    Node *p = *(Node **)(D_00250000 - 0x210);
    if (p != 0) {
        func_088940(a0, p, p->f5, p->f6, p->f7, p->f8, 0, 0, 0, 0, 0, 1);
    }
}
