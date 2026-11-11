typedef struct { float x, y, z, w; } QUAT;
extern void func_0E86F8(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_0E8898(void *value, const QUAT *a, const QUAT *b, float t) {
    func_0E86F8((QUAT *)value, a, b, t);
    return value;
}
