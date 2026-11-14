/* LEVEL_07:0x16B8B8 -- clears the frame's pending field and, when the global node exists and the field is still clear, starts the effect at the node's four floats; returns 1. */
typedef struct {
    char pad_00[0x14];
    float f[4];
} Node;

extern Node *D_0021BA24;
extern void func_082B38(char *object, Node *node, char *slot, int a, int b, int c, int d, int e,
                        float x, float y, float z, float w);

int func_16B8B8(char *object)
{
    Node *n;
    char *frame;

    *(int *)(*(char **)(object + 0x58) + 0x28) = 0;
    n = D_0021BA24;
    frame = *(char **)(object + 0x58);
    if (n) {
        if (*(int *)(frame + 0x28) == 0) {
            func_082B38(object, n, frame + 0x28, 0, 0, 0, 0, 1,
                        n->f[0], n->f[1], n->f[2], n->f[3]);
        }
    }
    return 1;
}
