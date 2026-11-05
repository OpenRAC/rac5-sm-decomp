/* Candidate for LEVEL_01.REL:0x1CAAE8.
 * Lazily binds two local records and initializes their float fields.
 * Field roles remain provisional.
 * Pinned GNU EE links 276 bytes against a 296-byte candidate;
 * first difference is at body byte 1. This is not a match.
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 kind;
    float values[8];
} Record;
typedef struct {
    u8 active;
    u8 pad[3];
    Record *record;
} Holder;
typedef struct {
    u8 pad0[0x0C];
    Holder *second;
    Holder *first;
    u32 reset;
    u8 pad1[0x28 - 0x18];
    float scale;
} Object;

extern Holder D_003988A0;
extern Holder D_00398870;
extern Record D_00398878;
extern Record D_00398848;
extern float D_0022A440[4];
extern float D_0022A468[4];
extern float D_0022A3F8[4];

void func_1CAAE8(Object *object)
{
    if (object->first == 0) {
        float a0,a1,a2,a3,b0,b1,b2,b3;
        object->first = &D_003988A0;
        D_003988A0.active = 1;
        object->first->record = &D_00398878;
        D_00398878.kind = 5;
        a0 = D_0022A468[0]; a1 = D_0022A468[1];
        a2 = D_0022A468[2]; a3 = D_0022A468[3];
        b0 = D_0022A440[0]; b1 = D_0022A440[1];
        b2 = D_0022A440[2]; b3 = D_0022A440[3];
        D_00398878.values[7] = a3;
        D_00398878.values[0] = b0;
        D_00398878.values[3] = b3;
        D_00398878.values[4] = a0;
        D_00398878.values[5] = a1;
        D_00398878.values[6] = a2;
        D_00398878.values[1] = b1;
        D_00398878.values[2] = b2;
        object->scale = 0.5f;
    }
    if (object->second == 0) {
        float c0,c1,c2,c3;
        object->second = &D_00398870;
        D_00398870.active = 1;
        object->second->record = &D_00398848;
        D_00398848.kind = 5;
        c0 = D_0022A3F8[0]; c1 = D_0022A3F8[1];
        c2 = D_0022A3F8[2]; c3 = D_0022A3F8[3];
        D_00398848.values[7] = c3;
        D_00398848.values[3] = 0.0f;
        D_00398848.values[4] = c0;
        D_00398848.values[5] = c1;
        D_00398848.values[6] = c2;
        D_00398848.values[0] = 0.0f;
        D_00398848.values[1] = -0.5f;
        D_00398848.values[2] = 0.0f;
    }
    object->reset = 0;
}
