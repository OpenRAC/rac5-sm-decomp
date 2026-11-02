struct Obj {
    int f0;
    int f4;
};

void *func_0DE5A8(void);
int func_0DE7E8(void *);
int func_022EA0(int, void *, void *);

int func_0DE6E0(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0DE5A8();
    if (obj != 0) {
        if (func_0DE7E8(a0) != 0) {
            if (func_022EA0(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
