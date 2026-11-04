/* USA FRONTEND.REL:0x00FC88. Retained C hypothesis, not a match.
 * The GNU EE trial links 736 bytes against the 732-byte body;
 * the first difference is at body byte 8. Reopen after recovering
 * the original lifetimes of the module base, flags pointer, and checksum. */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u8 relocated;
    u8 recognized;
    u8 signature_ok;
    u8 absent;
} LoadStatus;

typedef struct {
    u32 magic;
    u32 flags;
    u32 payload_size;
    u32 checksum;
    u32 data[1];
} RelModule;

extern u8 D_0002FE01;
extern u32 D_0002FE1C;
extern void *status_clear(void *destination, int value, u32 size)
    __asm__("memset");
extern u32 func_0001C530(const void *data, u32 size);

LoadStatus func_0000FC88(RelModule *module)
{
    LoadStatus status;
    u32 *flags;
    u32 *cursor;
    u32 count;
    u32 index;
    u32 checksum;
    u8 *base = (u8 *)module;

    status_clear(&status, 0, sizeof(status));
    status.absent = 1;
    if (module == 0) {
        LoadStatus result = status;
        return result;
    }

    status.absent = 0;
    flags = &module->flags;
    D_0002FE01 = *flags & 1;
    if ((*flags & 0x08060100u) == 0) {
        LoadStatus result = status;
        return result;
    }

    status.recognized = 1;
    checksum = module->checksum;
    if (checksum == func_0001C530(module->data, module->payload_size) &&
        checksum == 0xDF858D32u)
        status.signature_ok = 1;

    if (*flags & 2) {
        status.relocated = 1;
        {
            LoadStatus result = status;
            return result;
        }
    }

    *flags |= 2;
    status.relocated = 1;
    cursor = (u32 *)((u8 *)flags + 12);
    if (D_0002FE01)
        cursor++;
    count = *cursor++;
    for (index = 0; index < count; index++, cursor++)
        *cursor += (u32)base;

    if (D_0002FE01)
        cursor++;
    count = *cursor++;
    for (index = 0; index < count; index++, cursor++)
        *cursor += (u32)base;

    D_0002FE1C = (u32)base;
    {
        LoadStatus result = status;
        return result;
    }
}
