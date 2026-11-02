struct Obj {
    int f0;
    int f4;
};

void *func_0FAB60(void);
int func_0FADA0(void *);
int func_026CC8(int, void *, void *);

int func_0FAC98(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0FAB60();
    if (obj != 0) {
        if (func_0FADA0(a0) != 0) {
            if (func_026CC8(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
