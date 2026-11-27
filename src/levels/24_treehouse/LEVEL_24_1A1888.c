/* LEVEL_24:0x1A1888 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_00362670;
extern Entry D_001D9E98[];
extern char D_001F67C8[];

extern void func_1A1580(char *record, long long value);
extern void func_0675C8(char *record);
extern void func_067A40(char *record);
extern void func_1A15D0(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1A1888(void)
{
    unsigned int i;
    Rec *r;

    if (D_00362670.active) {
        for (i = 0; i < 3; i++) {
            r = &D_00362670.recs[i];
            func_1A1580((char *)r, D_00362670.value);
            func_0675C8((char *)r);
            if (IsMode3(r)) {
                func_067A40((char *)r);
                func_1A15D0((char *)r, &D_001D9E98[i], D_00362670.value, D_001F67C8, 12);
            }
        }
    }
}
