struct Obj {
    int f0;
    int f4;
};

void *func_10B7B0(unsigned int value);
int func_10B9F0(unsigned int);
int func_027238(int, void *, void *);

int func_10B8E8(unsigned int value, void *a1, void *a2) {
    struct Obj *obj = func_10B7B0(value);
    if (obj != 0) {
        if (func_10B9F0(value) != 0) {
            if (func_027238(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
