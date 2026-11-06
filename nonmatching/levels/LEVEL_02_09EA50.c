/* LEVEL_02.REL:0x09EA50, bounded 192-byte candidate.
 * Isolated pinned C object: 192 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail hoists 0x2C into $a2 in the prologue; the pinned chain saves registers first. Reopen with the division constant hoisted before the saves.
 */
extern int D_002AF79C[];
extern void func_0009E8C8(int a, int b);

typedef struct {
    int f00;
    int f04;
    int f08;
    int f0C;
    int f10;
    int f14;
    int f18;
    int f1C;
    int f20;
    int f24;
    int f28;
} Node;

void func_0009EA50(int *param_1, int *param_2)
{
    Node *node;
    int *p;

    *param_2 = (int)(param_1 + 1);
    param_2[1] = param_1[2];
    *(int **)param_1[2] = param_2;
    param_1[2] = (int)param_2;

    node = (Node *)((unsigned int)((char *)param_2 - (char *)param_1[3]) / sizeof(Node)
                    * sizeof(Node) + (unsigned int)param_1[3]);
    if (--node->f28 == 0) {
        p = (int *)(node + 1);
        while (p != (int *)(node + 9)) {
            *(int *)(p[0] + 4) = p[1];
            *(int *)p[1] = p[0];
            p += 4;
        }
        func_0009E8C8((int)D_002AF79C, node->f00);
        *((int *)node + 9) = param_1[0];
        param_1[0] = (int)node;
    }
}
