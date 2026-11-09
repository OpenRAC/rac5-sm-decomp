/* LEVEL_18:0x14F410 -- placement copy of LEVEL_16_150C98.c: follows a link to a node, runs an optional check, then calls a finisher. */
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

extern int func_036BE8(Node *a0);
extern void func_14F6E8(S *a0, Node *a1);

void func_14F410(S *a0)
{
    Node *n;

    n = a0->f_58->f_00;
    if (n == 0) {
        return;
    }
    if (n->f_F4 != 0) {
        if (func_036BE8(n) == 0) {
            return;
        }
    }
    func_14F6E8(a0, n);
}
