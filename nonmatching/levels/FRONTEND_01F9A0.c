/* USA FRONTEND.REL:0x01F9A0. Retained C hypothesis, not a match.
 * Pinned GNU EE links 968 bytes against a 984-byte complete body; first
 * difference at body byte 12. Reopen with the original parameter and
 * local-variable lifetimes. */
typedef unsigned char u8;
typedef unsigned int u32;

typedef struct {
    u32 current;
    u32 flags;
    u8 ready;
    u8 pad09[3];
    u32 selected;
    u32 entry_count;
    u8 extended_header;
    u8 wide_entries;
    u8 reserved_mode;
    u8 pad17;
    u32 header[8];
    u32 source;
    u32 name;
    u32 limit;
} Resource;

extern char D_001099B8[];
extern char D_001099E8[];
extern char D_001099F0[];
extern char D_00109AA8[];
extern char D_00109A18[];
extern char D_00109A58[];
extern char D_00109AB0[];

extern void func_0001F978(char *message, Resource *resource);
extern int func_0001F6F0(Resource *resource);
extern int func_0001DFF0(u32 name, char *path);
extern void func_0001F940(Resource *resource, u8 index, int enabled);
extern void func_0001E1A0(u32 destination, int mode, u32 size, int file);
extern void func_0001F980(int file);
extern void func_0001E280(int file);
extern int func_0001F880(u32 handle);
extern int func_0001F928(Resource *resource, u32 index);
extern void func_0001E158(int file, u32 offset, int mode);
extern void func_000147C0(u32 end);

int func_0001F9A0(Resource *resource, u8 index, int report_error) {
    int complete = 0;
    u32 sector_mask = 0xfffff800u;
    do {
        int file = 0;
        int loaded;
        u32 handle;
        u32 *records;
        u32 *entry;
        u32 entry_offset;
        u32 entry_size;
        u32 end_offset;
        u32 *inline_data;
        u32 base;
        u32 final_data;
        u32 fixup_start;
        u32 item_count;
        u32 i;

        func_0001F978(D_001099B8, resource);
        loaded = func_0001F6F0(resource);
        if (loaded == 0) {
            file = func_0001DFF0(resource->name, D_001099E8);
            func_0001F940(resource, index, 0);
        }
        func_0001F978(D_001099F0, resource);
        if (file != 0 || func_0001F6F0(resource) != 0) {
            if (func_0001F6F0(resource) == 0) {
                func_0001E1A0(resource->source, 1, 0x800, file);
                func_0001F980(file);
                func_0001E280(file);
            }
            handle = resource->source;
            resource->ready = 0;
            if (func_0001F880(handle) != 0) {
                int flags;
                u32 packed;
                int remaining;
                u32 *cursor;
                resource->ready = 1;
                cursor = (u32 *)(handle + 8);
                flags = (int)*cursor++;
                resource->wide_entries = (flags >> 1) & 1;
                resource->reserved_mode = (flags >> 2) & 1;
                resource->extended_header = flags & 1;
                packed = *cursor++;
                resource->entry_count = packed >> 8;
                item_count = packed & 0xffu;
                if (flags & 1) cursor++;
                records = cursor;
                remaining = 7;
                do {
                    resource->header[7 - remaining] = *records;
                    records++;
                    remaining--;
                } while (remaining >= 0);
                if (flags & 1) records++;
                entry = records + index * 3;
                entry_offset = entry[0];
                entry_size = entry[1];
                end_offset = entry[2];
                func_0001F978(D_00109A18, resource);
                if (entry_size <= resource->limit) {
                    base = (u32)records + item_count *
                           (resource->wide_entries ? 16 : 12);
                    if (func_0001F6F0(resource) == 0) {
                        file = func_0001DFF0(resource->name, D_001099E8);
                    }
                    resource->current = func_0001F6F0(resource) != 0 ?
                        resource->source + entry_offset : base;
                    final_data = func_0001F6F0(resource) != 0 ?
                        resource->source + entry_offset : base;
                    inline_data = (u32 *)(func_0001F6F0(resource) != 0 ?
                        resource->source + entry_offset : base);
                    fixup_start = (u32)inline_data;
                    if (file != 0 || func_0001F6F0(resource) != 0) {
                        if (func_0001F928(resource, index) == 0) {
                            if (func_0001F6F0(resource) == 0) {
                                func_0001E158(file, entry_offset & sector_mask, 2);
                                func_0001F980(file);
                                func_0001E1A0((u32)inline_data, 1,
                                    (entry_size + 0xfff) & sector_mask, file);
                                final_data = (u32)inline_data + (entry_offset & 0x7ff);
                                resource->current = final_data;
                                func_0001F980(file);
                                func_0001E280(file);
                                inline_data = (u32 *)final_data;
                                fixup_start = final_data;
                            }
                            for (i = 0; i < resource->entry_count; i++) {
                                u32 *item = inline_data;
                                if (resource->extended_header != 0) item++;
                                item[1] += resource->current;
                                inline_data = item + (resource->wide_entries ? 3 : 2);
                            }
                            func_0001F940(resource, index, 1);
                            func_0001F978(D_00109A58, resource);
                            if (report_error != 0 &&
                                final_data + end_offset - fixup_start != entry_size) {
                                func_000147C0(final_data + end_offset);
                            }
                            resource->selected = index;
                        } else {
                            resource->selected = index;
                        }
                        complete = 1;
                    }
                }
            } else {
                func_0001F978(D_00109AA8, resource);
            }
        }
        if (complete != 0) {
            func_0001F978(D_00109AB0, resource);
            return complete;
        }
    } while (1);
}
