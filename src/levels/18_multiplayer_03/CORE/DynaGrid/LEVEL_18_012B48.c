/* USA LEVEL_01.REL:0x012B48 — provisional two-record setup. */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct { float x, y, z, w; } Vec4;
typedef struct { float first, second; } FloatPair;
typedef struct { FloatPair entry[2]; } PairSet;
typedef struct {
    int count0;
    int count1;
    char remaining[0x60];
} Record;
typedef struct {
    char pad0[0x20];
    int count0;
    char pad1[0x0C];
    int count1;
    char pad2[0x14];
    int count2;
} Summary;

extern float D_0019C19C;
typedef struct { u8 initialized, valid; } State;
extern State D_001DE850;
extern Record D_001DE778[2];
extern Summary *D_001B5D20;
extern int D_001DE84C;
extern void *D_001DE848;
extern char D_001C2198[];

extern void func_0127D8(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_085500(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_0EEC28(int, int, int, const char *, int);
extern int func_0129A8(void *, Record *, int);
extern void func_085658(Record *, void *, int, void *, int);

void func_012B48(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_0019C19C = value;
    if (D_001DE850.initialized == 0) {
        func_0127D8(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_001DE850.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_001DE850.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_001DE778;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_085500(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_0EEC28(count, 8, 0, D_001C2198, 0xA7);
                extra = func_0129A8(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_0EEC28(extra, 16, 0, D_001C2198, 0xAF);
                func_085658(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_001DE84C = D_001B5D20->count2 + D_001B5D20->count1 + D_001B5D20->count0;
            D_001DE848 = func_0EEC28(D_001DE84C + 1, 4, 0, D_001C2198, 0xB9);
        }
    }
}
