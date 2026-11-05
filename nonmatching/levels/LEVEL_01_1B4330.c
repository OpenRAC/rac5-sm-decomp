/* USA LEVEL_01.REL:0x1B4330. Provisional basis and record search.
 * GNU EE divpad links 588 bytes against the 628-byte candidate body;
 * the first differing byte is at +6 in early register allocation.
 * Record types and helper prototypes remain provisional.
 */
typedef unsigned int u32;

typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    Vec4 row[4];
} Basis;

typedef struct {
    unsigned char unused[0x24];
    u32 tag;
    unsigned char tail[0x1C];
} Record;

typedef struct {
    unsigned char unused[0x34];
    Record *records;
    u32 count;
} Manager;

extern float D_00217E88[];
extern Manager *D_00206D90;
extern float sqrtf(float value);
extern void *func_07C558(Record *record, void *context,
                         const Basis *basis, int mask);
extern void func_1DB9F8(void *owner, void *result, float angle);

void *func_1B4330(void *owner, void *context, const float *source,
                  const float *input, float angle)
{
    Basis basis;
    Basis *b = &basis;
    float length_squared;
    Manager *manager;
    Record *record;
    u32 i;
    void *result;

    b->row[2].x = input[0];
    b->row[2].z = input[2];
    b->row[2].y = input[1];
    b->row[0].x = D_00217E88[1] * b->row[2].z
                   - D_00217E88[2] * b->row[2].y;
    b->row[0].y = D_00217E88[2] * b->row[2].x
                   - D_00217E88[0] * b->row[2].z;
    b->row[0].z = D_00217E88[0] * b->row[2].y
                   - D_00217E88[1] * b->row[2].x;
    b->row[0].w = 0.0f;

    length_squared = b->row[0].x * b->row[0].x
                   + b->row[0].y * b->row[0].y
                   + b->row[0].z * b->row[0].z;
    if (length_squared < 2.3841858e-7f)
        goto axis_ready;
    {
        float inv_length = 1.0f / sqrtf(length_squared);
        b->row[0].x *= inv_length;
        b->row[0].y *= inv_length;
        b->row[0].z *= inv_length;
    }
axis_ready:
    b->row[1].x = b->row[2].y * b->row[0].z
                   - b->row[2].z * b->row[0].y;
    b->row[1].y = b->row[2].z * b->row[0].x
                   - b->row[2].x * b->row[0].z;
    b->row[1].z = b->row[2].x * b->row[0].y
                   - b->row[2].y * b->row[0].x;
    b->row[1].w = 0.0f;
    b->row[2].w = 0.0f;
    b->row[3].x = source[0];
    b->row[3].y = source[1];
    b->row[3].z = source[2];
    b->row[3].w = 1.0f;

    manager = D_00206D90;
    record = 0;
    for (i = 0; i < manager->count; i++) {
        if (manager->records[i].tag == 0x7CC3E9BDu) {
            record = &manager->records[i];
            break;
        }
    }
    if (record == 0)
        return 0;
    result = func_07C558(record, context, b, 0xFF);
    if (result != 0)
        func_1DB9F8(owner, result, angle);
    return result;
}
