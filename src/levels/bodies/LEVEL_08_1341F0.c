typedef struct { float x, y, z, w; } QUAT;
extern void func_134050(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_1341F0(void *value, const QUAT *a, const QUAT *b, float t) {
    func_134050((QUAT *)value, a, b, t);
    return value;
}
