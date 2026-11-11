/* USA LEVEL_05.REL:0x1C1080. Two-record initialization hypothesis. */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    u32 reserved18;
    u32 reserved1C;
    float f20;
    float f24;
    u32 color28;
    float f2C;
    float f30;
    u8 active34;
    u8 padding35[3];
} Record56;

typedef struct {
    u32 color0;
    u32 color4;
    u32 color8;
    u32 colorC;
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
} Record64;

extern Head D_0038FED8;
extern Record56 D_0038FEE8;
extern Record64 D_0038FF20;
extern void *memset(void *destination, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_1C1080(void *object, int mode)
{
    Record56 first;
    Record64 second __attribute__((aligned(16)));

    if (mode == 0xFFFF && object != 0) {
        Record56 *first_destination = &D_0038FEE8;
        Record64 *second_destination = &D_0038FF20;
        D_0038FED8.a = 0;
        D_0038FED8.b = 0;
        D_0038FED8.c = 0;
        D_0038FED8.d = 1.0f;

        memset(&first, 0, sizeof first);
        first.f00 = 0.05000000074505806f;
        first.f04 = 0.15000000596046448f;
        first.f08 = 0.25f;
        first.f0C = 0.30000001192092896f;
        first.f10 = 5.0000996589660645f;
        first.f14 = 6.000119209289551f;
        first.f20 = 0.0020000000949949026f;
        first.f24 = 0.10471976548433304f;
        first.color28 = 0x22FFFF89u;
        first.f2C = powf(0.8999999761581421f, 1.0f);
        first.f30 = powf(1.0f, 1.0f);
        first.active34 = 1;
        *first_destination = first;

        memset(&second, 0, sizeof second);
        second.color0 = 0x22FFFF89u;
        second.color4 = 0x88FFFFBCu;
        second.color8 = 0x00FFFF89u;
        second.colorC = 0x00FFFFBCu;
        second.first = 10;
        second.second = 12;
        second.f18 = -0.009999999776482582f;
        second.f1C = -0.019999999552965164f;
        second.f20 = 0.05000000074505806f;
        second.f24 = 0.15000000596046448f;
        second.f28 = 0.25f;
        second.f2C = 0.30000001192092896f;
        second.f30 = 0.05235988274216652f;
        second.f34 = 0.10471976548433304f;
        second.f38 = powf(0.9900000095367432f, 1.0f);
        second.f3C = powf(0.9950000047683716f, 1.0f);
        *second_destination = second;
    }
}
