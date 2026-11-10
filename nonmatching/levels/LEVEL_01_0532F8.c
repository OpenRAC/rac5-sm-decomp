/* USA LEVEL_01.REL:0x0532F8. Retained C hypothesis, not a match.
 * The gnu-ee-trial profile links 428 bytes against a 428-byte candidate
 * body; the first difference is at body byte 48. Equivalent head-store
 * orders did not resolve the scheduling difference around memset.
 * See docs/contributing/matching-blockers.md. */
typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
    float f10;
    float f14;
    float f18;
    float f1C;
    float f20;
    float f24;
    unsigned int color28;
    float f2C;
    float f30;
    float f34;
} Record;

typedef struct {
    int a;
    int b;
    int c;
    float d;
} Head;

extern Head D_00238D00;
extern Record D_00238D10;
extern void *memset(void *dst, int value, unsigned int size);
extern float powf(float value, float exponent);

void func_0532F8(void *object, int mode) {
    Record local;

    if (mode == 0xFFFF && object != 0) {
        Record *destination = &D_00238D10;
        D_00238D00.a = 0;
        D_00238D00.c = 0;
        D_00238D00.d = 1.0f;
        D_00238D00.b = 0;
        memset(&local, 0, sizeof local);
        local.color28 = 0xFF5FB3BFu;
        local.f00 = 0.10000000149011612f;
        local.f04 = 0.20000000298023224f;
        local.f08 = 0.30000001192092896f;
        local.f0C = 0.4000000059604645f;
        local.f10 = 15.0f;
        local.f14 = 22.5f;
        local.f18 = 0.03333333507180214f;
        local.f1C = 0.10000000894069672f;
        local.f20 = 0.0011111112544313073f;
        local.f24 = 0.20943953096866608f;
        local.f2C = powf(0.949999988079071f, 1.0f);
        local.f30 = powf(0.9700000286102295f, 1.0f);
        *destination = local;
    }
}
