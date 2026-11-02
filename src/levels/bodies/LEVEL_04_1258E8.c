struct Obj {
    int f0;
    int f4;
};

void *func_1257B0(void);
int func_1259F0(void *);
int func_029170(int, void *, void *);

int func_1258E8(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_1257B0();
    if (obj != 0) {
        if (func_1259F0(a0) != 0) {
            if (func_029170(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
