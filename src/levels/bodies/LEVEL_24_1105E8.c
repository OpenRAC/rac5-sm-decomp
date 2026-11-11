struct Obj {
    int f0;
    int f4;
};

void *func_1104B0(unsigned int value);
int func_1106F0(void *);
int func_026C08(int, void *, void *);

int func_1105E8(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_1104B0((unsigned int)a0);
    if (obj != 0) {
        if (func_1106F0(a0) != 0) {
            if (func_026C08(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
