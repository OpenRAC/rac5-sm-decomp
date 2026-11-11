typedef struct { float x, y, z, w; } QUAT;
extern void func_102660(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_102800(void *value, const QUAT *a, const QUAT *b, float t) {
    func_102660((QUAT *)value, a, b, t);
    return value;
}
