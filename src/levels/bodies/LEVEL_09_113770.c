struct Obj {
    int f0;
    int f4;
};

void *func_113638(void);
int func_113878(void *);
int func_028530(int, void *, void *);

int func_113770(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_113638();
    if (obj != 0) {
        if (func_113878(a0) != 0) {
            if (func_028530(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
