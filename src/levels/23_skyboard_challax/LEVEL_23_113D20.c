typedef struct { float x, y, z, w; } QUAT;
extern void func_113B80(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_113D20(void *value, const QUAT *a, const QUAT *b, float t) {
    func_113B80((QUAT *)value, a, b, t);
    return value;
}
