/* LEVEL_02:0x1E6020 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_003B0878;
extern Entry D_0021DF80[];
extern char D_00241D98[];

extern void func_1E5D18(char *record, long long value);
extern void func_073408(char *record);
extern void func_073880(char *record);
extern void func_1E5D68(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1E6020(void)
{
    unsigned int i;
    Rec *r;

    if (D_003B0878.active) {
        for (i = 0; i < 3; i++) {
            r = &D_003B0878.recs[i];
            func_1E5D18((char *)r, D_003B0878.value);
            func_073408((char *)r);
            if (IsMode3(r)) {
                func_073880((char *)r);
                func_1E5D68((char *)r, &D_0021DF80[i], D_003B0878.value, D_00241D98, 12);
            }
        }
    }
}
