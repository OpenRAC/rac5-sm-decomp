struct Obj {
    int f0;
    int f4;
};

void *func_0D3798(void);
int func_0D39D8(void *);
int func_023C28(int, void *, void *);

int func_0D38D0(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0D3798();
    if (obj != 0) {
        if (func_0D39D8(a0) != 0) {
            if (func_023C28(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
