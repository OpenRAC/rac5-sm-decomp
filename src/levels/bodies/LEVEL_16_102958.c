typedef struct { float x, y, z, w; } QUAT;
extern void func_1027B8(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_102958(void *value, const QUAT *a, const QUAT *b, float t) {
    func_1027B8((QUAT *)value, a, b, t);
    return value;
}
