struct Obj {
    int f0;
    int f4;
};

void *func_0FAB60(unsigned int object);
int func_0FADA0(unsigned int);
int func_026CC8(int, void *, void *);

int func_0FAC98(unsigned int object, void *a1, void *a2) {
    struct Obj *obj = func_0FAB60(object);
    if (obj != 0) {
        if (func_0FADA0(object) != 0) {
            if (func_026CC8(obj->f0 - 1, a1, a2) != 0) {
                obj->f4 = 4;
            } else {
                obj->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
