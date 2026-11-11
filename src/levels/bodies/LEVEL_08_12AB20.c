struct Obj {
    int f0;
    int f4;
};

void *func_12A9E8(unsigned int value);
int func_12AC28(void *);
int func_029C40(int, void *, void *);

int func_12AB20(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_12A9E8((unsigned int)a0);
    if (obj != 0) {
        if (func_12AC28(a0) != 0) {
            if (func_029C40(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
