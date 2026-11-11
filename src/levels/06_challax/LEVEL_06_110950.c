struct Obj {
    int f0;
    int f4;
};

void *func_110818(unsigned int value);
int func_110A58(unsigned int);
int func_027AB0(int, void *, void *);

int func_110950(unsigned int value, void *a1, void *a2) {
    struct Obj *obj = func_110818(value);
    if (obj != 0) {
        if (func_110A58(value) != 0) {
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
