struct Obj {
    int f0;
    int f4;
};

void *func_116268(unsigned int value);
int func_1164A8(void *);
int func_028340(int, void *, void *);

int func_1163A0(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_116268((unsigned int)a0);
    if (obj != 0) {
        if (func_1164A8(a0) != 0) {
            if (func_028340(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
