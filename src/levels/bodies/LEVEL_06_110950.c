struct Obj {
    int f0;
    int f4;
};

void *func_110818(void);
int func_110A58(void *);
int func_027AB0(int, void *, void *);

int func_110950(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_110818();
    if (obj != 0) {
        if (func_110A58(a0) != 0) {
            if (func_027AB0(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
