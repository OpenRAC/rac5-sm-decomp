/* USA LEVEL_01.REL:0x018848. Populate variable-length level records.
 * Nonmatching with gnu-ee-trial: 844/868 linked bytes; first difference
 * at body byte 14 (initial register allocation). */
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned long long u64;
typedef struct __attribute__((packed)) { u64 q[8]; } Block64;
typedef struct {
    u8 pad00[0x0C];
    u8 *items;
    u8 pad10[0x2C - 0x10];
    u32 payload_bytes;
    u32 item_count;
    u8 pad34[0x44 - 0x34];
} Entry;
typedef struct {
    u8 pad00[0x1C];
    u8 *third_output;
    u32 third_count;
    u8 pad24[0x2C - 0x24];
    u8 *second_output;
    u32 second_count;
    Entry *entries;
    u32 entry_count;
    u8 pad3C[0x48 - 0x3C];
    u32 total_bytes;
} Manager;

extern Manager *D_00206D90;
extern u8 **D_001EF3CC;
extern u8 D_001EF2B8;
extern void *retail_memcpy(void *, const void *, u32) __asm__("memcpy");

#define U32(p, offset) (*(u32 *)((p) + (offset)))
#define BYTE(p, offset) (*((u8 *)(p) + (offset)))

void func_018848(void)
{
    Manager *manager = D_00206D90;
    Entry *entry = manager->entries;
    Entry *entry_end = entry + manager->entry_count;
    u8 *source = D_001EF3CC[0];
    u8 *destination;
    u8 *end;

    for (; entry < entry_end; ++entry) {
        destination = entry->items;
        end = destination + entry->item_count * 0x80;
        for (; destination < end; destination += 0x80) {
            *(Block64 *)destination = *(const Block64 *)source;
            U32(destination, 0x5C) = U32(source, 0x44);
            U32(destination, 0x64) = U32(source, 0x48);
            BYTE(destination, 0x45) = BYTE(source, 0x4C);
            if (U32(source, 0x40) != 0)
                retail_memcpy((void *)U32(destination, 0x54),
                              (const void *)U32(source, 0x40), entry->payload_bytes);
            source += 0x50;
        }
    }

    source = D_001EF3CC[1];
    end = source + manager->second_count * 0x48;
    destination = manager->second_output;
    for (; source < end; source += 0x48) {
        *(Block64 *)destination = *(const Block64 *)source;
        U32(destination, 0x5C) = U32(source, 0x40);
        BYTE(destination, 0x63) = 0xFF;
        BYTE(destination, 0x61) = BYTE(source, 0x44);
        destination += 0x64 + (u32)BYTE(destination, 0x62) * 8;
    }

    source = D_001EF3CC[2];
    end = source + manager->third_count * 0x44;
    destination = manager->third_output;
    for (; source < end; source += 0x44) {
        *(Block64 *)destination = *(const Block64 *)source;
        BYTE(destination, 0x53) = BYTE(source, 0x40);
        destination += 0x54 + (u32)BYTE(destination, 0x51) * 8;
    }

    if (D_001EF2B8 != 0)
        retail_memcpy(D_001EF3CC[4], D_001EF3CC[3],
                      (manager->total_bytes + 31U & ~31U) >> 3);
}
