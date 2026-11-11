/* USA LEVEL_01.REL:0x013158 — provisional two-record setup. */
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

extern float D_00237E14;
typedef struct { u8 initialized, valid; } State;
extern State D_0027EA50;
extern Record D_0027E978[2];
extern Summary *D_0024FC50;
extern int D_0027EA4C;
extern void *D_0027EA48;
extern char D_002558A8[];

extern void func_012DE8(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_09CEF0(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_11FF78(int, int, int, const char *, int);
extern int func_012FB8(void *, Record *, int);
extern void func_09D048(Record *, void *, int, void *, int);

void func_013158(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_00237E14 = value;
    if (D_0027EA50.initialized == 0) {
        func_012DE8(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_0027EA50.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_0027EA50.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_0027E978;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_09CEF0(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_11FF78(count, 8, 0, D_002558A8, 0xA7);
                extra = func_012FB8(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_11FF78(extra, 16, 0, D_002558A8, 0xAF);
                func_09D048(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_0027EA4C = D_0024FC50->count2 + D_0024FC50->count1 + D_0024FC50->count0;
            D_0027EA48 = func_11FF78(D_0027EA4C + 1, 4, 0, D_002558A8, 0xB9);
        }
    }
}
