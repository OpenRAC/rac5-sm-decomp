/* LEVEL_08:0x210E78 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_003EB4B0;
extern Entry D_00252B20[];
extern char D_002795B8[];

extern void func_210B70(char *record, long long value);
extern void func_0737D0(char *record);
extern void func_073C48(char *record);
extern void func_210BC0(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_210E78(void)
{
    unsigned int i;
    Rec *r;

    if (D_003EB4B0.active) {
        for (i = 0; i < 3; i++) {
            r = &D_003EB4B0.recs[i];
            func_210B70((char *)r, D_003EB4B0.value);
            func_0737D0((char *)r);
            if (IsMode3(r)) {
                func_073C48((char *)r);
                func_210BC0((char *)r, &D_00252B20[i], D_003EB4B0.value, D_002795B8, 12);
            }
        }
    }
}
