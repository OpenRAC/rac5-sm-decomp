/* LEVEL_18.REL:0x129D28 -- variant c: the raw frame pointer is loaded
   before the guard, its bias added inside. */
typedef struct {
    char pad_00[0x14];
    float f[4];
} Node;

extern Node *D_1BE9AC;
extern void func_072BC8(int, Node *, char *, int, int, int, int, int,
                        float, float, float, float);

void func_129D28(int a0)
{
    Node *n = D_1BE9AC;
    char *frame = *(char **)(a0 + 0x58);

    if (n) {
        func_072BC8(a0, n, frame + 0x58, 0, 0, 0, 0, 1,
                    n->f[0], n->f[1], n->f[2], n->f[3]);
    }
}
