typedef struct { float x, y, z, w; } QUAT;
extern void func_101DC8(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_101F68(void *value, const QUAT *a, const QUAT *b, float t) {
    func_101DC8((QUAT *)value, a, b, t);
    return value;
}
