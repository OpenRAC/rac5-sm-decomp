/* LEVEL_08:0x176640 -- placement copy of LEVEL_01_164708.c: initializes a 0x34-byte effect record from an input word and a shared handle. */
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

extern u32 D_00250778[];

void func_176640(Record *record, u32 value)
{
    record->size = 1.2f;
    record->value = value;
    record->color = 0xff2040ffu;
    record->position_y = record->position_x = 2.0f;
    record->scale = 3.0f;
    record->time = 2.00003981590271f;
    record->reserved_10 = 0;
    record->reserved_18 = 0;
    record->reserved_24 = 0;
    record->handle = D_00250778[0];
    record->alpha = 0.4f;
    record->reserved_28 = 0;
}
