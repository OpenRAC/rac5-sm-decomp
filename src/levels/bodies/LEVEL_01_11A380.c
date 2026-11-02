struct Obj {
    int f0;
    int f4;
};

void *func_11A248(void);
int func_11A488(void *);
int func_0296C8(int, void *, void *);

int func_11A380(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_11A248();
    if (obj != 0) {
        if (func_11A488(a0) != 0) {
            if (func_0296C8(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
