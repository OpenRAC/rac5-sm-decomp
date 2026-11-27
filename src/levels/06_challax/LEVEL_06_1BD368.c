/* LEVEL_06:0x1BD368 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
typedef struct Rec {
    char pad00[0x30];
    signed char mode;
    char pad31[0x68 - 0x31];
} Rec;

typedef struct State {
    Rec recs[3];
    unsigned char active;
    char pad139[3];
    int value;
} State;

typedef struct Entry {
    char pad[0x44];
} Entry;

extern State D_00385330;
extern Entry D_001F7EE8[];
extern char D_002175E8[];

extern void func_1BD060(char *record, long long value);
extern void func_06AD48(char *record);
extern void func_06B1C0(char *record);
extern void func_1BD0B0(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1BD368(void)
{
    unsigned int i;
    Rec *r;

    if (D_00385330.active) {
        for (i = 0; i < 3; i++) {
            r = &D_00385330.recs[i];
            func_1BD060((char *)r, D_00385330.value);
            func_06AD48((char *)r);
            if (IsMode3(r)) {
                func_06B1C0((char *)r);
                func_1BD0B0((char *)r, &D_001F7EE8[i], D_00385330.value, D_002175E8, 12);
            }
        }
    }
}
