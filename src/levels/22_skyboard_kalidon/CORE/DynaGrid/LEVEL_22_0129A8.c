/* USA LEVEL_01.REL:0x0129A8 — provisional two-record setup. */
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

extern float D_0014E614;
typedef struct { u8 initialized, valid; } State;
extern State D_001813D0;
extern Record D_001812F8[2];
extern Summary *D_00165D70;
extern int D_001813CC;
extern void *D_001813C8;
extern char D_001690A8[];

extern void func_012638(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_085DA0(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_0EB540(int, int, int, const char *, int);
extern int func_012808(void *, Record *, int);
extern void func_085EF8(Record *, void *, int, void *, int);

void func_0129A8(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_0014E614 = value;
    if (D_001813D0.initialized == 0) {
        func_012638(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_001813D0.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_001813D0.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_001812F8;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_085DA0(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_0EB540(count, 8, 0, D_001690A8, 0xA7);
                extra = func_012808(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_0EB540(extra, 16, 0, D_001690A8, 0xAF);
                func_085EF8(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_001813CC = D_00165D70->count2 + D_00165D70->count1 + D_00165D70->count0;
            D_001813C8 = func_0EB540(D_001813CC + 1, 4, 0, D_001690A8, 0xB9);
        }
    }
}
