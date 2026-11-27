/* LEVEL_22:0x13C978 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_002E8338;
extern Entry D_00166950[];
extern char D_0017C938[];

extern void func_13C670(char *record, long long value);
extern void func_0632A0(char *record);
extern void func_063718(char *record);
extern void func_13C6C0(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_13C978(void)
{
    unsigned int i;
    Rec *r;

    if (D_002E8338.active) {
        for (i = 0; i < 3; i++) {
            r = &D_002E8338.recs[i];
            func_13C670((char *)r, D_002E8338.value);
            func_0632A0((char *)r);
            if (IsMode3(r)) {
                func_063718((char *)r);
                func_13C6C0((char *)r, &D_00166950[i], D_002E8338.value, D_0017C938, 12);
            }
        }
    }
}
