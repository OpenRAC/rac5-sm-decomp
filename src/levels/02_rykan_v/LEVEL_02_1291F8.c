typedef struct { float x, y, z, w; } QUAT;
extern void func_129058(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_1291F8(void *value, const QUAT *a, const QUAT *b, float t) {
    func_129058((QUAT *)value, a, b, t);
    return value;
}
