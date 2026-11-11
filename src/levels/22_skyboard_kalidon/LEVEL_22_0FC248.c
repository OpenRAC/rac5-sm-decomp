typedef struct { float x, y, z, w; } QUAT;
extern void func_0FC0A8(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_0FC248(void *value, const QUAT *a, const QUAT *b, float t) {
    func_0FC0A8((QUAT *)value, a, b, t);
    return value;
}
