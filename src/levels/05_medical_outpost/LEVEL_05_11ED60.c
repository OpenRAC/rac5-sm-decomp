typedef struct { float x, y, z, w; } QUAT;
extern void func_11EBC0(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_11ED60(void *value, const QUAT *a, const QUAT *b, float t) {
    func_11EBC0((QUAT *)value, a, b, t);
    return value;
}
