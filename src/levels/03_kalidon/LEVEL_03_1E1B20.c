/* LEVEL_03:0x1E1B20 -- placement copy of LEVEL_01_1D1388.c: when the table is active, runs the update step on each of its three 0x68-byte records and, for records in mode 3, the finish step plus the 12-entry setup with the matching 0x44-byte entry. */
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

extern State D_003B3A60;
extern Entry D_00221EF8[];
extern char D_00245298[];

extern void func_1E1818(char *record, long long value);
extern void func_06C910(char *record);
extern void func_06CD88(char *record);
extern void func_1E1868(char *record, Entry *entry, int value, char *table, int count);
static __inline__ unsigned char IsMode3(Rec *r)
{
    return r->mode == 3;
}

void func_1E1B20(void)
{
    unsigned int i;
    Rec *r;

    if (D_003B3A60.active) {
        for (i = 0; i < 3; i++) {
            r = &D_003B3A60.recs[i];
            func_1E1818((char *)r, D_003B3A60.value);
            func_06C910((char *)r);
            if (IsMode3(r)) {
                func_06CD88((char *)r);
                func_1E1868((char *)r, &D_00221EF8[i], D_003B3A60.value, D_00245298, 12);
            }
        }
    }
}
