typedef struct { float x, y, z, w; } QUAT;
extern void func_0DAF08(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_0DB0A8(void *value, const QUAT *a, const QUAT *b, float t) {
    func_0DAF08((QUAT *)value, a, b, t);
    return value;
}
