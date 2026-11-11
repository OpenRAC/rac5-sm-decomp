/* USA LEVEL_01.REL:0x012510 — provisional two-record setup. */
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

extern float D_000FD404;
typedef struct { u8 initialized, valid; } State;
extern State D_00135E50;
extern Record D_00135D78[2];
extern Summary *D_00116F80;
extern int D_00135E4C;
extern void *D_00135E48;
extern char D_00121C98[];

extern void func_0121A0(Vec4 *, Vec4 *);
extern void *retail_memset(void *, int, u32) __asm__("memset");
extern void func_0733F0(float, Record *, Vec4 *, Vec4 *, FloatPair *);
extern void *func_0CA5D0(int, int, int, const char *, int);
extern int func_012370(void *, Record *, int);
extern void func_073548(Record *, void *, int, void *, int);

void func_012510(float value)
{
    Vec4 low, high, extent;
    PairSet parameters, temporary;
    Record *record;
    FloatPair *pair;
    void *allocation, *additional;
    int count, extra;
    u32 index;

    D_000FD404 = value;
    if (D_00135E50.initialized == 0) {
        func_0121A0(&low, &high);
        extent.x = high.x - low.x;
        extent.y = high.y - low.y;
        extent.z = high.z - low.z;
        D_00135E50.valid = 0.0f < extent.x && 0.0f < extent.y && 0.0f < extent.z;
        if (D_00135E50.valid) {
            retail_memset(&temporary.entry[0], 0, sizeof temporary.entry[0]);
            temporary.entry[0].first = 8.0f;
            temporary.entry[0].second = 8.0f;
            retail_memset(&temporary.entry[1], 0, sizeof temporary.entry[1]);
            temporary.entry[1].first = value;
            temporary.entry[1].second = value;
            parameters = temporary;
            record = D_00135D78;
            pair = parameters.entry;
            for (index = 0; index < 2; ++index) {
                func_0733F0(pair->first * 4.0f, record, &low, &high, pair);
                count = record->count0 * record->count1 + 1;
                allocation = func_0CA5D0(count, 8, 0, D_00121C98, 0xA7);
                extra = func_012370(allocation, record, count);
                if (extra == 0)
                    additional = 0;
                else
                    additional = func_0CA5D0(extra, 16, 0, D_00121C98, 0xAF);
                func_073548(record, allocation, count, additional, extra);
                pair++;
                record++;
            }
            D_00135E4C = D_00116F80->count2 + D_00116F80->count1 + D_00116F80->count0;
            D_00135E48 = func_0CA5D0(D_00135E4C + 1, 4, 0, D_00121C98, 0xB9);
        }
    }
}
