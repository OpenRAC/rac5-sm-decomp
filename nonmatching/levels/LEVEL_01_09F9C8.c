/* LEVEL_01.REL:0x09F9C8: Ghidra body 128 bytes.
 * Pinned pure C links 128 bytes and first differs at +8.
 * Recheck indirect callback and list traversal registers. No matching credit.
 */
extern int *D_0029C670;
extern int D_0029C66C;
extern void func_09F8C0(int *);
extern int *func_09F898(int *);

void func_09F9C8(void)
{
    int *node = D_0029C670;
    if (node != &D_0029C66C) {
        int next = node[5];
        for (;;) {
            void (*callback)(int *) = *(void (**)(int *))(next + 0x14);
            if (callback != 0) {
                callback(node);
                func_09F8C0(node);
            }
            next = node[6];
            if (next == 0) {
                node = func_09F898(node);
            } else {
                node = (int *)node[1];
            }
            if (node == &D_0029C66C) {
                break;
            }
            next = node[5];
        }
    }
}
