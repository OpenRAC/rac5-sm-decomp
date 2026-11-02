struct Obj {
    int f0;
    int f4;
};

void *func_0FA938(void);
int func_0FAB78(void *);
int func_027120(int, void *, void *);

int func_0FAA70(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0FA938();
    if (obj != 0) {
        if (func_0FAB78(a0) != 0) {
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
