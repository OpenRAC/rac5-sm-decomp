/* LEVEL_10:0x1D5730 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_003A2028;
extern Entry D_00211FA8[];
extern char D_00233A60[];

extern void func_1D5428(char *record, long long value);
extern void func_06D1A0(char *record);
extern void func_06D618(char *record);
extern void func_1D5478(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1D5730(void)
{
    unsigned int i;
    Rec *r;

    if (D_003A2028.active) {
        for (i = 0; i < 3; i++) {
            r = &D_003A2028.recs[i];
            func_1D5428((char *)r, D_003A2028.value);
            func_06D1A0((char *)r);
            if (IsMode3(r)) {
                func_06D618((char *)r);
                func_1D5478((char *)r, &D_00211FA8[i], D_003A2028.value, D_00233A60, 12);
            }
        }
    }
}
