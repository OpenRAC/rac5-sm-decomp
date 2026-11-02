struct Obj {
    int f0;
    int f4;
};

void *func_1183B8(void);
int func_1185F8(void *);
int func_0294C0(int, void *, void *);

int func_1184F0(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_1183B8();
    if (obj != 0) {
        if (func_1185F8(a0) != 0) {
            if (func_0294C0(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
