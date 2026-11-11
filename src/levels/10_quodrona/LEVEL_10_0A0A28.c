/* LEVEL_10:0x0A0A28 -- placement copy of LEVEL_01_09F948.c: walks a list calling per-node callbacks and cleanup. */
typedef struct List_29C650 {
    char pad_00[0x1C];
    int sentinel;
    int *first;
} List_29C650;

extern List_29C650 D_002A5A50;
extern void func_0A09A0(int *);
extern int func_0A0978(int *);

void func_0A0A28(void)
{
    List_29C650 *list = &D_002A5A50;
    int *node = list->first;

    if (node != (int *)&list->sentinel) {
        int next = node[5];
        for (;;) {
            void (*callback)(int *) = *(void (**)(int *))(next + 0x10);
            if (callback != 0) {
                callback(node);
                func_0A09A0(node);
            }
            next = node[6];
            if (next == 0) {
                node = (int *)func_0A0978(node);
            } else {
                node = (int *)node[1];
            }
            if (node == (int *)&list->sentinel) {
                break;
            }
            next = node[5];
        }
    }
}
