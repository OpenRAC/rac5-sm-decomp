/* LEVEL_04:0x1E8370 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_003B3F38;
extern Entry D_00222918[];
extern char D_00244E18[];

extern void func_1E8068(char *record, long long value);
extern void func_06FB68(char *record);
extern void func_06FFE0(char *record);
extern void func_1E80B8(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1E8370(void)
{
    unsigned int i;
    Rec *r;

    if (D_003B3F38.active) {
        for (i = 0; i < 3; i++) {
            r = &D_003B3F38.recs[i];
            func_1E8068((char *)r, D_003B3F38.value);
            func_06FB68((char *)r);
            if (IsMode3(r)) {
                func_06FFE0((char *)r);
                func_1E80B8((char *)r, &D_00222918[i], D_003B3F38.value, D_00244E18, 12);
            }
        }
    }
}
