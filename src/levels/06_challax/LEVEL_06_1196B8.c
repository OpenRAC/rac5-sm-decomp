typedef struct { float x, y, z, w; } QUAT;
extern void func_119518(QUAT *out, const QUAT *a, const QUAT *b, float t);

void *func_1196B8(void *value, const QUAT *a, const QUAT *b, float t) {
    func_119518((QUAT *)value, a, b, t);
    return value;
}
