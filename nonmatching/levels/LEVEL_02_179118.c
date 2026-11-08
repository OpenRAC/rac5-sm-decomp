/* LEVEL_02.REL:0x179118: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 124 bytes; first differs at +0.
 * Retry: Recover float-constant register allocation and late global-handle load in
 * the 124-byte record initializer; current C differs at entry.
 * No matching credit.
 */
typedef unsigned int u32;
typedef struct {
    u32 value;
    u32 color;
    float position_x;
    float position_y;
    u32 reserved_10;
    float scale;
    u32 reserved_18;
    float time;
    float size;
    u32 reserved_24;
    u32 reserved_28;
    float alpha;
    u32 handle;
} Record;

extern u32 D_0021C6A0;

void func_179118(Record *record, u32 value)
{
    u32 handle;
    record->size = 1.2f;
    record->value = value;
    record->color = 0xff2040ffu;
    record->position_y = 2.0f;
    record->scale = 3.0f;
    record->time = 2.0000398f;
    record->position_x = 2.0f;
    record->reserved_10 = 0;
    record->reserved_18 = 0;
    record->reserved_24 = 0;
    handle = D_0021C6A0;
    record->alpha = 0.4f;
    record->handle = handle;
    record->reserved_28 = 0;
}
