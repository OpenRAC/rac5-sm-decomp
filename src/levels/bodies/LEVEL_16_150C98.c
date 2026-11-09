/* LEVEL_16:0x150C98 -- follows a link to a node, runs an optional check, then calls a finisher. */
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
extern void func_150F70(S *a0, Node *a1);

void func_150C98(S *a0)
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
    func_150F70(a0, n);
}
