typedef struct { float x, y, z, w; } QUAT;
extern void func_121160(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_121300(void *value, const QUAT *a, const QUAT *b, float t) {
    func_121160((QUAT *)value, a, b, t);
    return value;
}
