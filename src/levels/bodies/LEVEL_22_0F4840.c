struct Obj {
    int f0;
    int f4;
};

void *func_0F4708(void);
int func_0F4948(void *);
int func_023C60(int, void *, void *);

int func_0F4840(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0F4708();
    if (obj != 0) {
        if (func_0F4948(a0) != 0) {
            if (func_023C60(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
