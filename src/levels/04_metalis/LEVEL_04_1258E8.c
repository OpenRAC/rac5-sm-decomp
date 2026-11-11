struct Obj {
    int f0;
    int f4;
};

void *func_1257B0(unsigned int object);
int func_1259F0(unsigned int);
int func_029170(int, void *, void *);

int func_1258E8(unsigned int object, void *a1, void *a2) {
    struct Obj *obj = func_1257B0(object);
    if (obj != 0) {
        if (func_1259F0(object) != 0) {
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
