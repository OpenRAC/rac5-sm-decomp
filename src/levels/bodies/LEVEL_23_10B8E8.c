struct Obj {
    int f0;
    int f4;
};

void *func_10B7B0(void);
int func_10B9F0(void *);
int func_027238(int, void *, void *);

int func_10B8E8(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_10B7B0();
    if (obj != 0) {
        if (func_10B9F0(a0) != 0) {
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
