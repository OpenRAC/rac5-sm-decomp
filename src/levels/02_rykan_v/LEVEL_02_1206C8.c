struct Obj {
    int f0;
    int f4;
};

void *func_120590(unsigned int value);
int func_1207D0(void *);
int func_029E90(int, void *, void *);

int func_1206C8(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_120590((unsigned int)a0);
    if (obj != 0) {
        if (func_1207D0(a0) != 0) {
            if (func_029E90(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
