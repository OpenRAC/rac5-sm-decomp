struct Obj {
    int f0;
    int f4;
};

void *func_0F9F48(void);
int func_0FA188(void *);
int func_026AA0(int, void *, void *);

int func_0FA080(void *a0, void *a1, void *a2) {
    struct Obj *obj = func_0F9F48();
    if (obj != 0) {
        if (func_0FA188(a0) != 0) {
            if (func_026AA0(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
