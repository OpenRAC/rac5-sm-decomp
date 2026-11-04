/* USA LEVEL_01.REL:0x040F28. Retained C hypothesis, not a match.
 * The gnu-ee-trial profile links 592 bytes against a 592-byte body;
 * first difference at body byte 184. */
typedef unsigned char u8;
typedef unsigned long long u64;

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

extern void *memset(void *dst, int value, unsigned int size);
extern void func_03BE20(void *object);
extern void func_003380(void *object);
extern int func_03C360(void *object);
extern void func_0034D0(void *position, int value);
extern void func_003170(float value, const Vec3 *position, int mode);
extern void func_0033D0(float first, float second);
extern void func_0033E8(int first, int second, int third);
extern void func_003568(int value);
extern void func_003340(void *object);
extern void func_003B48(float value);
extern void func_04BC00(void *object);
extern u8 D_001F4834;

void func_040F28(void *object)
{
    char *self = object;
    char *resource;
    Vec3 *current;
    Vec3 position;
    Vec3 alternate;
    float first;
    float second;
    float scale;
    short mode;
    u64 flags;

    func_03BE20(object);
    if (*(void **)(self + 0xDD4)) {
        void **callback = *(void ***)(self + 0xDD4);
        ((void (*)(void *))callback[2])(object);
        return;
    }

    if (!*(char **)(self + 0x59C))
        return;

    memset(&position, 0, sizeof position);
    first = *(float *)(self + 0xDC);
    second = *(float *)(self + 0xE0);
    mode = *(short *)(self + 0x100);
    if (mode != 2) {
        first = 0.0f;
        second = 0.0f;
    }

    flags = *(u64 *)(self + 0x960);
    if (flags & 0x1000000000ULL) {
        if (flags & 0x40000000000ULL)
            func_04BC00(object);
        return;
    }

    current = (Vec3 *)(self + 0x30);
    if (mode == 0x29)
        return;

    resource = *(char **)(self + 0x59C);
    scale = *(float *)(self + 0xFB0);
    position.x = current->x + *(float *)(resource + 0x10) * scale;
    position.y = current->y + *(float *)(resource + 0x14) * scale;
    position.z = current->z + *(float *)(resource + 0x18) * scale;
    func_003380(self + 0x20);
    if (func_03C360(object))
        func_0034D0(*(char **)(self + 0x59C) + 0x10, 0);

    mode = *(short *)(self + 0x100);
    if (mode == 0x1B) {
        alternate.x = position.x;
        alternate.y = *(float *)(self + 0x2E0) + 0.1f;
        alternate.z = position.z;
        func_003170(0.0f, &alternate, 0);
    } else if (mode != 0x37 && mode != 0xD) {
        func_003170(0.0f, &position, 0);
    }

    flags = *(u64 *)(self + 0x960);
    if ((flags & 0x10000000000000ULL) != 0 &&
        *(short *)(self + 0x100) != 0x1A) {
        int value = 1;
        if (*(short *)(self + 0x100) == 0x37 && D_001F4834)
            value = 0;
        func_0033E8(value, 1, 0);
        func_003568(1);
    } else {
        func_0033D0(first, second);
    }

    func_003340(self + 0xFB4);
    func_003B48(1.0f - *(float *)(self + 0xFC0));
    if (*(u64 *)(self + 0x960) & 0x40000000000ULL)
        func_04BC00(object);
    *(float *)(self + 0xFB0) = 0.8f;
}
