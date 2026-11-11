typedef struct {
    char pad_00[0x14];
    float f[4];
} Node;

extern Node *D_002071D4;
extern void func_0809D0(int, Node *, char *, int, int, int, int, int,
                        float, float, float, float);

void func_145F28(int a0)
{
    Node *n = D_002071D4;
    char *frame = *(char **)(a0 + 0x58);

    if (n) {
        func_0809D0(a0, n, frame + 0x58, 0, 0, 0, 0, 1,
                    n->f[0], n->f[1], n->f[2], n->f[3]);
    }
}
