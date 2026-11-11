typedef struct { float x, y, z, w; } QUAT;
extern void func_12EBE0(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_12ED80(void *value, const QUAT *a, const QUAT *b, float t) {
    func_12EBE0((QUAT *)value, a, b, t);
    return value;
}
