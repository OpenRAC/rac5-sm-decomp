/* USA LEVEL_01.REL:0x0130F0 — provisional two-record setup. */
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

extern float D_001EF294;
typedef struct { u8 initialized, valid; } State;
extern State D_0022F7D0;
extern Record D_0022F6F8[2];
extern Summary *D_00206D90;
extern int D_0022F7CC;
extern void *D_0022F7C8;
extern char D_0020BC28[];

extern void func_012D80(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_094FD0(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_10F7D8(int, int, int, const char *, int);
extern int func_012F50(void *, Record *, int);
extern void func_095128(Record *, void *, int, void *, int);

void func_0130F0(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_001EF294 = value;
    if (D_0022F7D0.initialized == 0) {
        func_012D80(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_0022F7D0.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_0022F7D0.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_0022F6F8;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_094FD0(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_10F7D8(count, 8, 0, D_0020BC28, 0xA7);
                extra = func_012F50(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_10F7D8(extra, 16, 0, D_0020BC28, 0xAF);
                func_095128(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_0022F7CC = D_00206D90->count2 + D_00206D90->count1 + D_00206D90->count0;
            D_0022F7C8 = func_10F7D8(D_0022F7CC + 1, 4, 0, D_0020BC28, 0xB9);
        }
    }
}
