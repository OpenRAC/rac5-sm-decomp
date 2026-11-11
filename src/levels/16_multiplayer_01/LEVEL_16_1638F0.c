/* LEVEL_16:0x1638F0 -- walks a linked list from a global head, returning the first nonzero helper result. */
typedef struct Link Link;
typedef struct Node Node;

struct Node {
    char pad_00[0x58];
    Link *f_58;
};

struct Link {
    Node *f_00;
};

extern Node *D_001BDFA4;
extern int func_1639B8(Node *a0, void *a1);

int func_1638F0(void *a0)
{
    Node *s0;
    int r;

    s0 = D_001BDFA4;
    while (s0 != 0) {
        r = func_1639B8(s0, a0);
        if (r != 0) {
            return r;
        }
        s0 = s0->f_58->f_00;
    }
    return 0;
}
