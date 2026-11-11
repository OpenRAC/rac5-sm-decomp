/* LEVEL_18:0x08DC48 -- placement copy of LEVEL_01_09F948.c: walks a list calling per-node callbacks and cleanup. */
typedef struct List_29C650 {
    char pad_00[0x1C];
    int sentinel;
    int *first;
} List_29C650;

extern List_29C650 D_00254518;
extern void func_08DBC0(int *);
extern int func_08DB98(int *);

void func_08DC48(void)
{
    List_29C650 *list = &D_00254518;
    int *node = list->first;

    if (node != (int *)&list->sentinel) {
        int next = node[5];
        for (;;) {
            void (*callback)(int *) = *(void (**)(int *))(next + 0x10);
            if (callback != 0) {
                callback(node);
                func_08DBC0(node);
            }
            next = node[6];
            if (next == 0) {
                node = (int *)func_08DB98(node);
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
