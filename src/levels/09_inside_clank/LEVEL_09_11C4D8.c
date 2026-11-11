typedef struct { float x, y, z, w; } QUAT;
extern void func_11C338(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_11C4D8(void *value, const QUAT *a, const QUAT *b, float t) {
    func_11C338((QUAT *)value, a, b, t);
    return value;
}
