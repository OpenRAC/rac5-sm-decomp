/* Candidate for LEVEL_01.REL:0x00AE08.
 * Initializes animation and motion fields of the current scene object.
 * Field names and the caller-side aliasing are provisional.
 * Pinned GNU EE links 952 bytes against a 948-byte candidate;
 * the first difference is at body byte 0. This is not a match.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u64 b0 : 1; u64 b1 : 1; u64 b2 : 1; u64 b3 : 1;
    u64 unused4_8 : 5; u64 b9 : 1;
    u64 b10 : 1; u64 b11 : 1; u64 b12 : 1; u64 b13 : 1;
    u64 unused14_17 : 4;
    u64 b18 : 1; u64 b19 : 1; u64 b20 : 1;
    u64 rest : 43;
} FlagBits;

typedef struct {
    u8 pad0[0x40];
    FlagBits flags;
    u8 pad1[0x354 - 0x48];
} Scene;
typedef struct { Scene *p; } SceneHolder;
typedef struct { u8 pad[0x24]; int mode; } Settings;
typedef struct { u8 pad[4]; float secondary; float primary; int kind; int active; } Motion;

extern SceneHolder D_001EF254;
extern Settings *D_001F3FAC;
extern float D_00217E88[3];
extern float D_00217E78[3];
extern void func_001908(Motion *, float, float, int, int);

#define FLOAT_FIELD(offset) (*(float *)((u8 *)D_001EF254.p + (offset)))
#define WORD_FIELD(offset) (*(u32 *)((u8 *)D_001EF254.p + (offset)))
#define MOTION_FIELD(offset) ((Motion *)((u8 *)D_001EF254.p + (offset)))

void func_00AE08(void)
{
    Scene *scene = D_001EF254.p;
    float half = 0.5f;

    FLOAT_FIELD(0x44) = D_00217E88[0];
    *(float *)((u8 *)scene + 0x48) = D_00217E88[1];
    *(float *)((u8 *)scene + 0x4C) = D_00217E88[2];

    D_001EF254.p->flags.b0 = 1;
    D_001EF254.p->flags.b1 = 1;
    D_001EF254.p->flags.b2 = 1;
    D_001EF254.p->flags.b3 = D_001F3FAC->mode != 0;
    D_001EF254.p->flags.b10 = 1;
    D_001EF254.p->flags.b11 = 1;
    D_001EF254.p->flags.b12 = 0;
    D_001EF254.p->flags.b18 = 0;
    D_001EF254.p->flags.b9 = 0;
    D_001EF254.p->flags.b20 = D_001EF254.p->flags.b19;
    D_001EF254.p->flags.b19 = 0;
    D_001EF254.p->flags.b13 = 1;

    func_001908(MOTION_FIELD(0x78), 8.0f, 1.0f, 0, 2);
    func_001908(MOTION_FIELD(0x8C), 1.14f, 1.0f, 0, 2);
    func_001908(MOTION_FIELD(0xA0), FLOAT_FIELD(0xA0), 1.0f, 0, 2);
    func_001908(MOTION_FIELD(0xB4), FLOAT_FIELD(0xB4), 1.0f, 0, 2);

    WORD_FIELD(0xC8) = 0;
    FLOAT_FIELD(0x154) = 1.0f;
    WORD_FIELD(0x160) = 0;
    FLOAT_FIELD(0x164) = 1.0f;
    FLOAT_FIELD(0x168) = half;
    FLOAT_FIELD(0x1A4) = D_00217E78[0];
    FLOAT_FIELD(0x1A8) = D_00217E78[1];
    FLOAT_FIELD(0x1AC) = D_00217E78[2];
    WORD_FIELD(0x20C) = 0;
    WORD_FIELD(0x218) = 0;
    WORD_FIELD(0x230) = 0;

    func_001908(MOTION_FIELD(0x1E4), 0.4f, 1.0f, 0, 2);

    FLOAT_FIELD(0x290) = 0.3f;
    FLOAT_FIELD(0x294) = 0.85f;
    WORD_FIELD(0x298) = 0;
    WORD_FIELD(0x29C) = 0;
    FLOAT_FIELD(0x2A0) = -0.2f;
    FLOAT_FIELD(0x2A4) = half;
    FLOAT_FIELD(0x2A8) = 0.2f;
    FLOAT_FIELD(0x2B4) = 1.2f;
    FLOAT_FIELD(0x2B8) = 0.9f;
    FLOAT_FIELD(0x2BC) = 50.0000038f;
    FLOAT_FIELD(0x2C0) = 0.7f;
    WORD_FIELD(0x2C4) = 0;
    WORD_FIELD(0x33C) = 0;
    FLOAT_FIELD(0x340) = 0.85f;
    FLOAT_FIELD(0x344) = 0.2f;
    FLOAT_FIELD(0x348) = 1.2f;
    FLOAT_FIELD(0x34C) = 1.0f;
    FLOAT_FIELD(0x350) = 0.1f;
}
