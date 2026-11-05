typedef struct { float x, y, z, w; } QUAT;
extern void func_118CD0(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_118E70(void *value, const QUAT *a, const QUAT *b, float t) {
    func_118CD0((QUAT *)value, a, b, t);
    return value;
}
