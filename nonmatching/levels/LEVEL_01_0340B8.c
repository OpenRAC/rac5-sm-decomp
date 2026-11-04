/* Candidate conversion of two resource record types at LEVEL_01:0x0340B8.
 * The linked body is not yet a match.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef struct {
    u32 words[3];
} Selection;

extern void *memset(void *dest, int value, unsigned int size);
extern void func_00034678(u32 *descriptor);
extern void func_000346E8(u32 *output, void *first, void *second,
                          u32 *descriptor, const void *source, int option);
extern void *func_0010F7A0(unsigned int size, int zero, const void *tag, int line);
extern void *func_0010F6F0(int align, unsigned int size, int zero,
                           const void *tag, int line);
extern const char D_0020DCA0[];

#define WORD_AT(ptr, off) (*(u32 *)((u8 *)(ptr) + (off)))
#define FLOAT_AT(ptr, off) (*(float *)((u8 *)(ptr) + (off)))
#define HALF_AT(ptr, off) (*(u16 *)((u8 *)(ptr) + (off)))

static __inline__ unsigned int selected(const Selection *entry, u32 mask)
{
    const u8 *bytes = (const u8 *)entry;
    return (mask & (1 << (bytes[3] & 31))) != 0;
}

void func_000340B8(u32 *output, const u8 *source, u32 mask)
{
    u32 kind;
    u8 *body;
    int i;

    output[13] = WORD_AT(source, 12);
    kind = WORD_AT(source, 4);
    if (kind == 0x10000001u) {
        u32 *descriptor;
        int *options;
        int first_total = 0;
        int second_total = 0;
        unsigned int aligned;
        u8 *first_data;
        u8 *second_data;
        u32 *dest;

        output[0] = 1;
        body = *(u8 **)(source + 28);
        output[1] = (u32)body;
        {
            int remaining = 1;
            u32 *header = output + 11;
            do {
                --remaining;
                *header++ = WORD_AT(body, 16);
            } while (remaining >= 0);
        }
        descriptor = output + 14;
        options = (int *)(body + 24);
        for (i = 5; i >= 0; --i) {
            if (*options == 0)
                memset(descriptor, 0, 12);
            else
                func_00034678(descriptor);
            first_total += (int)descriptor[1];
            second_total += (int)descriptor[2];
            ++options;
            descriptor += 3;
        }

        aligned = ((unsigned int)first_total + 15u) & ~15u;
        first_data = func_0010F7A0(aligned + second_total, 0, D_0020DCA0, 250);
        second_data = first_data + aligned;
        descriptor = output + 14;
        dest = output + 32;
        options = (int *)(body + 24);
        for (i = 5; i >= 0; --i) {
            if (descriptor[0] == 0) {
                memset(dest, 0, 8);
            } else {
                func_000346E8(dest, first_data, second_data,
                              descriptor, source, *options);
                first_data += descriptor[1];
                second_data += descriptor[2];
            }
            dest += 2;
            descriptor += 3;
            ++options;
        }
    } else if (kind == 0x10000004u) {
        output[0] = 0;
        body = *(u8 **)(source + 28);
        FLOAT_AT(output, 4) = FLOAT_AT(body, 0xe0) * 0.01f;
        FLOAT_AT(output, 8) = FLOAT_AT(body, 0xe4) * 0.01f;
        FLOAT_AT(output, 12) = FLOAT_AT(body, 0xe8) * 0.01f;
        FLOAT_AT(output, 16) = FLOAT_AT(body, 0xec) * 0.01f;

        for (i = 0; i < 2; ++i) {
            int index = i;
            int last_index = (int)WORD_AT(body, 4) - 1;
            u8 *record;
            Selection *list;
            Selection *end;
            Selection *first;
            Selection *last;
            int span;
            int count;
            Selection *copy;

            if (last_index <= index) index = last_index;
            record = body + index * 36 + 8;
            FLOAT_AT(output, (i + 11) * 4) = FLOAT_AT(record, 4) * 0.01f;
            list = *(Selection **)(record + 16);
            end = list + WORD_AT(record, 12);

            first = list;
            while (first != end && !selected(first, mask)) ++first;
            last = end - 1;
            while (last != list - 1 && !selected(last, mask)) --last;
            span = (int)(last - first) + 1;
            if (span < 0) span = 0;
            if (span == 0) {
                output[5 + i * 3] = 0;
                HALF_AT(output, 28 + i * 12) = 0;
            } else {
                int j;
                count = 0;
                for (copy = first; copy != first + span; ++copy)
                    if (selected(copy, mask)) ++count;
                if (count == span) {
                    output[5 + i * 3] = (u32)first;
                } else {
                    Selection *out_list;
                    out_list = func_0010F6F0(16, count * 12, 0, D_0020DCA0, 331);
                    j = 0;
                    for (copy = first; copy != first + span; ++copy) {
                        if (selected(copy, mask)) out_list[j++] = *copy;
                    }
                    output[5 + i * 3] = (u32)out_list;
                }
                HALF_AT(output, 28 + i * 12) = (u16)count;
            }
            HALF_AT(output, 30 + i * 12) = 0;
        }
        memset(output + 14, 0, 72);
        memset(output + 32, 0, 48);
    }
}
