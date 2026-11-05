typedef struct { float x, y, z, w; } QUAT;
extern void func_100FF0(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_101190(void *value, const QUAT *a, const QUAT *b, float t) {
    func_100FF0((QUAT *)value, a, b, t);
    return value;
}
