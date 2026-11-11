/* LEVEL_20:0x079538 -- placement copy of LEVEL_01_09F948.c: walks a list calling per-node callbacks and cleanup. */
typedef struct List_29C650 {
    char pad_00[0x1C];
    int sentinel;
    int *first;
} List_29C650;

extern List_29C650 D_001779D8;
extern void func_0794B0(int *);
extern int func_079488(int *);

void func_079538(void)
{
    List_29C650 *list = &D_001779D8;
    int *node = list->first;

    if (node != (int *)&list->sentinel) {
        int next = node[5];
        for (;;) {
            void (*callback)(int *) = *(void (**)(int *))(next + 0x10);
            if (callback != 0) {
                callback(node);
                func_0794B0(node);
            }
            next = node[6];
            if (next == 0) {
                node = (int *)func_079488(node);
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
