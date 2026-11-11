/* LEVEL_16:0x1673D0 -- placement copy of LEVEL_16_150C98.c: follows a link to a node, runs an optional check, then calls a finisher. */
typedef struct {
    char pad_00[0xF4];
    int f_F4;
} Node;

typedef struct {
    Node *f_00;
} Mid;

typedef struct {
    char pad_00[0x58];
    Mid *f_58;
} S;

extern int func_0383A8(Node *a0);
extern void func_1663E8(S *a0, Node *a1);

void func_1673D0(S *a0)
{
    Node *n;

    n = a0->f_58->f_00;
    if (n == 0) {
        return;
    }
    if (n->f_F4 != 0) {
        if (func_0383A8(n) == 0) {
            return;
        }
    }
    func_1663E8(a0, n);
}
