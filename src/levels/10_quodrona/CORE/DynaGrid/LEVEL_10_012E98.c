/* USA LEVEL_01.REL:0x012E98 — provisional two-record setup. */
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

extern float D_001F8294;
typedef struct { u8 initialized, valid; } State;
extern State D_00238BD0;
extern Record D_00238AF8[2];
extern Summary *D_0020F9F0;
extern int D_00238BCC;
extern void *D_00238BC8;
extern char D_00214BA8[];

extern void func_012B28(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_095340(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_10D9F0(int, int, int, const char *, int);
extern int func_012CF8(void *, Record *, int);
extern void func_095498(Record *, void *, int, void *, int);

void func_012E98(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_001F8294 = value;
    if (D_00238BD0.initialized == 0) {
        func_012B28(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_00238BD0.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_00238BD0.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_00238AF8;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_095340(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_10D9F0(count, 8, 0, D_00214BA8, 0xA7);
                extra = func_012CF8(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_10D9F0(extra, 16, 0, D_00214BA8, 0xAF);
                func_095498(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_00238BCC = D_0020F9F0->count2 + D_0020F9F0->count1 + D_0020F9F0->count0;
            D_00238BC8 = func_10D9F0(D_00238BCC + 1, 4, 0, D_00214BA8, 0xB9);
        }
    }
}
