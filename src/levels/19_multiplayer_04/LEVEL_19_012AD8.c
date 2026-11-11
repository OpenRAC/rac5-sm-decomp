/* USA LEVEL_01.REL:0x012AD8 — provisional two-record setup. */
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

extern float D_0019BE9C;
typedef struct { u8 initialized, valid; } State;
extern State D_001DE650;
extern Record D_001DE578[2];
extern Summary *D_001B5A20;
extern int D_001DE64C;
extern void *D_001DE648;
extern char D_001C1E18[];

extern void func_012768(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_086068(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_0F0A38(int, int, int, const char *, int);
extern int func_012938(void *, Record *, int);
extern void func_0861C0(Record *, void *, int, void *, int);

void func_012AD8(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_0019BE9C = value;
    if (D_001DE650.initialized == 0) {
        func_012768(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_001DE650.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_001DE650.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_001DE578;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_086068(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_0F0A38(count, 8, 0, D_001C1E18, 0xA7);
                extra = func_012938(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_0F0A38(extra, 16, 0, D_001C1E18, 0xAF);
                func_0861C0(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_001DE64C = D_001B5A20->count2 + D_001B5A20->count1 + D_001B5A20->count0;
            D_001DE648 = func_0F0A38(D_001DE64C + 1, 4, 0, D_001C1E18, 0xB9);
        }
    }
}
