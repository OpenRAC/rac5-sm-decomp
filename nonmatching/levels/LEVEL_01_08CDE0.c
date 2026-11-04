/* USA LEVEL_01.REL:0x08CDE0 -- candidate 188-byte command initializer.
 * Pinned GNU EE links 192 bytes; first difference at body byte 14.
 * The bitfield declaration, aliasing and mask schedule need further review.
 * This source has no matching credit.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u64 low : 16;
    u64 field_16 : 10;
    u64 field_26 : 2;
    u64 mode : 3;
    u64 field_31 : 1;
    u64 field_32 : 31;
    u64 field_63 : 1;
    u16 second_0;
    u8 second_2;
    u8 second_3;
    u16 second_4;
    u8 second_6;
    u8 second_7;
} Command;

extern u8 *D_001F6350;
extern int D_001F6354;
extern u8 *D_001F6358;

void func_08CDE0(Command *command)
{
    u8 *next;
    int consumed;

    command->low = 0;
    command->field_16 = 0;
    command->field_26 = 0;
    command->mode = 6;
    command->field_31 = 0;
    command->field_32 = 0;
    command->field_63 = 0;
    command->second_0 = 0;
    command->second_2 = 0;
    command->second_3 = 0;
    command->second_4 = 0;
    command->second_6 = 0;
    command->second_7 = 0;

    next = (u8 *)command + 16;
    consumed = (int)next - (int)D_001F6358;
    D_001F6350 = next;
    D_001F6354 -= (consumed >> 4) << 4;
}
