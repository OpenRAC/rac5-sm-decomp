typedef struct { float x, y, z, w; } QUAT;
extern void func_122D10(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_122EB0(void *value, const QUAT *a, const QUAT *b, float t) {
    func_122D10((QUAT *)value, a, b, t);
    return value;
}
