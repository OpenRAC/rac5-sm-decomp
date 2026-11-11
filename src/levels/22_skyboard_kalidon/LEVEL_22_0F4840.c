struct Obj {
    int f0;
    int f4;
};

void *func_0F4708(unsigned int value);
int func_0F4948(unsigned int);
int func_023C60(int, void *, void *);

int func_0F4840(unsigned int value, void *a1, void *a2) {
    struct Obj *obj = func_0F4708(value);
    if (obj != 0) {
        if (func_0F4948(value) != 0) {
            if (func_023C60(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
