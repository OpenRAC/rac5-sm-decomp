struct Obj {
    int f0;
    int f4;
};

void *func_11D298(unsigned int value);
int func_11D4D8(unsigned int);
int func_029A08(int, void *, void *);

int func_11D3D0(unsigned int value, void *a1, void *a2) {
    struct Obj *obj = func_11D298(value);
    if (obj != 0) {
        if (func_11D4D8(value) != 0) {
            if (func_029A08(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
