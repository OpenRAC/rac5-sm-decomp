struct Obj {
    int f0;
    int f4;
};

void *func_0FA938(unsigned int value);
int func_0FAB78(unsigned int);
int func_027120(int, void *, void *);

int func_0FAA70(unsigned int value, void *a1, void *a2) {
    struct Obj *obj = func_0FA938(value);
    if (obj != 0) {
        if (func_0FAB78(value) != 0) {
            if (func_027120(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
