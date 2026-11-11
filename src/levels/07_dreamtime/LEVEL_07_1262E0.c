typedef struct { float x, y, z, w; } QUAT;
extern void func_126140(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_1262E0(void *value, const QUAT *a, const QUAT *b, float t) {
    func_126140((QUAT *)value, a, b, t);
    return value;
}
