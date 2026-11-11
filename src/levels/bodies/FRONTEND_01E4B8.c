struct Obj {
    int f0;
    int f4;
};

void *func_01E380(unsigned int value);
int func_01E5C0(unsigned int);
int func_002620(int, void *, void *);

int func_01E4B8(unsigned int value, void *a1, void *a2)
{
    struct Obj *o = func_01E380(value);

    if (o != 0) {
        if (func_01E5C0(value) != 0) {
            if (func_002620(o->f0 - 1, a1, a2) != 0) {
                o->f4 = 4;
            } else {
                o->f4 = 2;
                return 1;
            }
        }
    }
    return 0;
}
