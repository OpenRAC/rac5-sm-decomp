/* LEVEL_17:0x149D70 -- placement copy of LEVEL_16_150C98.c: follows a link to a node, runs an optional check, then calls a finisher. */
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

extern int func_037C08(Node *a0);
extern void func_14A048(S *a0, Node *a1);

void func_149D70(S *a0)
{
    Node *n;

    n = a0->f_58->f_00;
    if (n == 0) {
        return;
    }
    if (n->f_F4 != 0) {
        if (func_037C08(n) == 0) {
            return;
        }
    }
    func_14A048(a0, n);
}
