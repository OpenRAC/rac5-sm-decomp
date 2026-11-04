typedef struct {
    unsigned int color0;
    unsigned int color1;
    unsigned int color2;
    unsigned int color3;
    int first;
    int second;
    float f18;
    float f1C;
    float f20;
    float f24;
    float f28;
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
    float f40;
    float f44;
    unsigned char pad48;
    unsigned char tag49;
    unsigned char pad4A[2];
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_00184C80;
extern Record D_00184C90;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_02A050(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_00184C90;
        D_00184C80.a = 0;
        D_00184C80.b = 0;
        D_00184C80.c = 0;
        D_00184C80.d = 1.0f;
        memset(&local, 0, sizeof local);
        local.color0 = 0x80353231u;
        local.color1 = 0x808A817Cu;
        local.color2 = 0x00353231u;
        local.color3 = 0x008A817Cu;
        local.first = 15;
        local.second = 24;
        local.f18 = 0.05000000447034836f;
        local.f1C = 0.0833333358168602f;
        local.f24 = 0.05000000074505806f;
        local.f28 = 0.125f;
        local.f2C = 0.15000000596046448f;
        local.f30 = 0.30000001192092896f;
        local.f34 = 0.10471976548433304f;
        local.f38 = 0.20943953096866608f;
        local.f3C = 1.5707963705062866f;
        local.f40 = powf(0.9900000095367432f, 1.0f);
        local.f44 = powf(0.9950000047683716f, 1.0f);
        local.tag49 = 0x24;
        *destination = local;
    }
}
