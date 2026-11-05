/* USA LEVEL_01.REL:0x068DB8. Provisional state initialization.
 * Pinned GNU EE links 872 bytes against the 912-byte candidate body;
 * the first difference is at body byte 282 in local float allocation.
 * Record fields and helper prototypes remain provisional.
 */
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct { u32 words[9]; } Block36;
typedef struct { u32 words[16]; } Block64;
typedef struct { float yaw, pitch; } Angles;
typedef struct { float x, y, z; } Vec3;
typedef struct { unsigned char pad[0x20]; Vec3 v; } Other;
typedef struct { unsigned char pad[0xE58]; Vec3 row[3]; } Obj;

extern Block64 *func_0011A8(int kind);
extern void func_06AE40(void *state, int mode);
extern void func_03BE20(void *state);
extern void func_068C28(Obj *state, float *yaw, float *pitch,
                        Other *record);
extern int func_038A38(const void *global);
extern void func_04DA70(void *state, int a, int b, int c,
                        float first, float second);
extern void func_001088(int mode, const void *data, void *state);

extern unsigned char D_00235140[];
extern float D_0020DE48;
extern float D_0020DE4C;
extern unsigned char D_00001378[];

#define WORD(base, offset) (*(u32 *)((base) + (offset)))
#define FLOAT(base, offset) (*(float *)((base) + (offset)))

void func_068DB8(unsigned char *state, const Block36 *initial)
{
    Block64 *record;
    u32 *record_tail;
    Angles angles;
    float factor;

    WORD(state, 0xE7C) = 1;
    *(Block36 *)(state + 0xE58) = *initial;
    func_06AE40(state, 0);
    func_03BE20(state);
    record = func_0011A8(0);
    *(Block64 *)(state + 0xDD8) = *record;
    func_068C28((Obj *)state, &angles.yaw, &angles.pitch, (Other *)record);
    record_tail = &record->words[12];
    *(Block64 *)(state + 0xE18) = *(Block64 *)(state + 0xDD8);

    FLOAT(state, 0xF34) = angles.pitch;
    WORD(state, 0xF38) = 0;
    WORD(state, 0xF14) = record_tail[0];
    WORD(state, 0xF18) = record_tail[1];
    WORD(state, 0xF1C) = record_tail[2];
    WORD(state, 0xF30) = 0;
    WORD(state, 0xF40) = 0;
    WORD(state, 0xF48) = 0xBDE38E39u;
    FLOAT(state, 0xF44) = 1.0f;
    FLOAT(state, 0xF2C) = angles.yaw;
    FLOAT(state, 0xF3C) = angles.pitch;

    factor = func_038A38(D_00235140) ? 0.6f : 1.1f;
    FLOAT(state, 0xF20) = FLOAT(state, 0x30)
                         + FLOAT(state, 0xE64) * factor;
    FLOAT(state, 0xF24) = FLOAT(state, 0x34)
                         + FLOAT(state, 0xE68) * factor;
    FLOAT(state, 0xF28) = FLOAT(state, 0x38)
                         + FLOAT(state, 0xE6C) * factor;
    if (func_038A38(D_00235140)) {
        FLOAT(state, 0xF20) += FLOAT(state, 0x20) * -0.3f;
        FLOAT(state, 0xF24) += FLOAT(state, 0x24) * -0.3f;
        FLOAT(state, 0xF28) += FLOAT(state, 0x28) * -0.3f;
    }

    FLOAT(state, 0xF64) = -0.25f;
    (*(u64 *)(state + 0xF10)) &= ~2ULL;
    (*(u64 *)(state + 0xF10)) &= ~0x40ULL;
    FLOAT(state, 0xF68) = -0.5f;
    FLOAT(state, 0xF6C) = 0.0f;
    WORD(state, 0xF50) = 0;
    WORD(state, 0xEFC) = 0;
    WORD(state, 0xF8C) = 0;
    WORD(state, 0xF90) = 0;
    WORD(state, 0xF58) = 0;
    FLOAT(state, 0xF5C) = D_0020DE4C;
    FLOAT(state, 0xF60) = D_0020DE48;
    WORD(state, 0xF54) = 0xC0490FDBu;
    func_04DA70(state, 0, 0, 1, 0.12f, 0.0f);
    func_001088(0, D_00001378, state + 0xF00);
}

#undef WORD
#undef FLOAT
