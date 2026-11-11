/* LEVEL_17:0x10D820 -- forwards four floats of the global node to the shared
   renderer, with a fixed set of integer parameters. */
typedef struct {
    char pad[0x14];
    float f5;
    float f6;
    float f7;
    float f8;
} Node;

extern Node *D_001A803C;

extern void func_073C48(void *a, void *b, float c, float d, float e, float f,
                         int g, int h, int i, int j, int k, int l);

void func_10D820(void *a0)
{
    Node *p = D_001A803C;
    if (p != 0) {
        func_073C48(a0, p, p->f5, p->f6, p->f7, p->f8, 0, 0, 0, 0, 0, 1);
    }
}
