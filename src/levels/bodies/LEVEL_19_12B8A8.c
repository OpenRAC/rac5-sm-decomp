typedef struct {
    char pad_00[0x14];
    float f[4];
} Node;

extern Node *D_001BE6AC;
extern void func_073660(int, Node *, char *, int, int, int, int, int,
                        float, float, float, float);

void func_12B8A8(int a0)
{
    Node *n = D_001BE6AC;
    char *frame = *(char **)(a0 + 0x58);

    if (n) {
        func_073660(a0, n, frame + 0x58, 0, 0, 0, 0, 1,
                    n->f[0], n->f[1], n->f[2], n->f[3]);
    }
}
