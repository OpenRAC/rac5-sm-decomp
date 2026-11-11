struct Obj {
    int f0;
    int f4;
};

void *func_0F9170(unsigned int value);
int func_0F93B0(void *);
int func_0266D0(int, void *, void *);

int func_0F92A8(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0F9170((unsigned int)a0);
    if (obj != 0) {
        if (func_0F93B0(a0) != 0) {
            if (func_0266D0(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
