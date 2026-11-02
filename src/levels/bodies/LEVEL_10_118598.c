struct Obj {
    int f0;
    int f4;
};

void *func_118460(void);
int func_1186A0(void *);
int func_0294A0(int, void *, void *);

int func_118598(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_118460();
    if (obj != 0) {
        if (func_1186A0(a0) != 0) {
            if (func_0294A0(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
